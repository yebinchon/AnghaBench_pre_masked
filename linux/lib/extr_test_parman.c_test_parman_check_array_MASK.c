
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int index; } ;
struct test_parman_item {TYPE_2__ parman_item; TYPE_1__* prio; } ;
struct test_parman {unsigned int prio_array_limit; unsigned int used_items; struct test_parman_item** prio_array; } ;
struct TYPE_3__ {unsigned long priority; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct test_parman *VAR_3,
       bool VAR_4)
{
 unsigned int VAR_5 = 0;
 unsigned long VAR_6 = 0;
 unsigned int VAR_7 = 0;
 int VAR_8;

 if (VAR_3->prio_array_limit < VAR_1) {
  FUNC_0("Array limit is lower than the base count (%lu < %lu)\n",
         VAR_3->prio_array_limit, VAR_1);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3->prio_array_limit; VAR_8++) {
  struct test_parman_item *VAR_9 = VAR_3->prio_array[VAR_8];

  if (!VAR_9) {
   VAR_5++;
   continue;
  }
  if (VAR_5 && !VAR_4) {
   FUNC_0("Gap found in array even though they are forbidden\n");
   return -VAR_0;
  }

  VAR_5 = 0;
  VAR_7++;

  if (VAR_9->prio->priority < VAR_6) {
   FUNC_0("Item belongs under higher priority then the last one (current: %lu, previous: %lu)\n",
          VAR_9->prio->priority, VAR_6);
   return -VAR_0;
  }
  VAR_6 = VAR_9->prio->priority;

  if (VAR_9->parman_item.index != VAR_8) {
   FUNC_0("Item has different index in compare to where it actually is (%lu != %d)\n",
          VAR_9->parman_item.index, VAR_8);
   return -VAR_0;
  }
 }

 if (VAR_7 != VAR_3->used_items) {
  FUNC_0("Number of used items in array does not match (%u != %u)\n",
         VAR_7, VAR_3->used_items);
  return -VAR_0;
 }

 if (VAR_5 >= VAR_2) {
  FUNC_0("Number of unused item at the end of array is bigger than resize step (%u >= %lu)\n",
         VAR_5, VAR_2);
  return -VAR_0;
 }

 FUNC_1("Priority array check successful\n");

 return 0;
}
