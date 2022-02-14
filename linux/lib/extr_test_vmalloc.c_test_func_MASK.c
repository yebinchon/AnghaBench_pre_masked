
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct test_driver {size_t cpu; void* stop; void* start; } ;
typedef int ktime_t ;
struct TYPE_5__ {scalar_t__ time; int test_failed; int test_passed; } ;
struct TYPE_4__ {int (* test_func ) () ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 TYPE_2__** VAR_1 ;
 int FUNC_9 (char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 () ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(void *VAR_7)
{
 struct test_driver *VAR_8 = VAR_7;
 int VAR_9[FUNC_0(VAR_5)];
 int VAR_10, VAR_11, VAR_12;
 ktime_t VAR_13;
 u64 VAR_14;

 if (FUNC_10(VAR_0, FUNC_1(VAR_8->cpu)) < 0)
  FUNC_9("Failed to set affinity to %d CPU\n", VAR_8->cpu);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++)
  VAR_9[VAR_11] = VAR_11;

 if (!VAR_4)
  FUNC_11(VAR_9, FUNC_0(VAR_5));




 FUNC_3(&VAR_2);

 VAR_8->start = FUNC_4();
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  VAR_10 = VAR_9[VAR_11];




  if (!((VAR_3 & (1 << VAR_10)) >> VAR_10))
   continue;

  VAR_13 = FUNC_6();
  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   if (!VAR_5[VAR_10].test_func())
    VAR_1[VAR_8->cpu][VAR_10].test_passed++;
   else
    VAR_1[VAR_8->cpu][VAR_10].test_failed++;
  }




  VAR_14 = (u64) FUNC_7(FUNC_6(), VAR_13);
  FUNC_2(VAR_14, (u32) VAR_6);

  VAR_1[VAR_8->cpu][VAR_10].time = VAR_14;
 }
 VAR_8->stop = FUNC_4();

 FUNC_14(&VAR_2);
 FUNC_13();




 while (!FUNC_5())
  FUNC_8(10);

 return 0;
}
