
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cpu_set_t ;
struct TYPE_2__ {int pkg_id; int die_id; int punit_cpu_core; } ;


 unsigned long long FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,size_t,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(int VAR_4, unsigned long long VAR_5,
          size_t VAR_6,
          cpu_set_t *VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 int VAR_11, VAR_12;

 *VAR_8 = 0;
 VAR_11 = FUNC_3(VAR_4);
 VAR_12 = FUNC_4(VAR_4);

 for (VAR_9 = 0; VAR_9 < 64; ++VAR_9) {
  if (VAR_5 & FUNC_0(VAR_9)) {
   int VAR_13;

   for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
    if (!FUNC_1(VAR_13, VAR_2, VAR_1))
     continue;

    if (VAR_0[VAR_13].pkg_id == VAR_12 &&
        VAR_0[VAR_13].die_id == VAR_11 &&
        VAR_0[VAR_13].punit_cpu_core == VAR_9) {
     FUNC_2(VAR_13, VAR_6,
        VAR_7);
     ++VAR_10;
    }
   }
  }
 }

 *VAR_8 = VAR_10;
}
