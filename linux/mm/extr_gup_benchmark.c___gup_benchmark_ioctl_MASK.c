
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gup_benchmark {int size; int nr_pages_per_call; unsigned long addr; int flags; void* put_delta_usec; void* get_delta_usec; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int,int,struct page**,int *) ;
 int FUNC_1 (unsigned long,int,int,struct page**) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ) ;
 struct page** FUNC_4 (unsigned long,int,int ) ;
 int FUNC_5 (struct page**) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_6,
  struct gup_benchmark *VAR_7)
{
 ktime_t VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;
 struct page **VAR_15;

 if (VAR_7->size > VAR_5)
  return -VAR_0;

 VAR_11 = VAR_7->size / VAR_4;
 VAR_15 = FUNC_4(VAR_11, sizeof(void *), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_10 = 0;
 VAR_14 = VAR_7->nr_pages_per_call;
 VAR_8 = FUNC_2();
 for (VAR_12 = VAR_7->addr; VAR_12 < VAR_7->addr + VAR_7->size; VAR_12 = VAR_13) {
  if (VAR_14 != VAR_7->nr_pages_per_call)
   break;

  VAR_13 = VAR_12 + VAR_14 * VAR_4;
  if (VAR_13 > VAR_7->addr + VAR_7->size) {
   VAR_13 = VAR_7->addr + VAR_7->size;
   VAR_14 = (VAR_13 - VAR_12) / VAR_4;
  }

  switch (VAR_6) {
  case 129:
   VAR_14 = FUNC_1(VAR_12, VAR_14, VAR_7->flags & 1,
       VAR_15 + VAR_10);
   break;
  case 128:
   VAR_14 = FUNC_0(VAR_12, VAR_14,
         (VAR_7->flags & 1) | VAR_2,
         VAR_15 + VAR_10, ((void*)0));
   break;
  case 130:
   VAR_14 = FUNC_0(VAR_12, VAR_14, VAR_7->flags & 1, VAR_15 + VAR_10,
         ((void*)0));
   break;
  default:
   return -1;
  }

  if (VAR_14 <= 0)
   break;
  VAR_10 += VAR_14;
 }
 VAR_9 = FUNC_2();

 VAR_7->get_delta_usec = FUNC_3(VAR_9, VAR_8);
 VAR_7->size = VAR_12 - VAR_7->addr;

 VAR_8 = FUNC_2();
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (!VAR_15[VAR_10])
   break;
  FUNC_6(VAR_15[VAR_10]);
 }
 VAR_9 = FUNC_2();
 VAR_7->put_delta_usec = FUNC_3(VAR_9, VAR_8);

 FUNC_5(VAR_15);
 return 0;
}
