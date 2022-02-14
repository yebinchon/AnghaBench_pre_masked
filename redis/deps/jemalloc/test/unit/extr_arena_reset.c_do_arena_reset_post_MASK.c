
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_2__ {int mtx; } ;


 int FUNC_0 (int ,int ,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 unsigned int VAR_2 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,void*) ;

__attribute__((used)) static void
FUNC_6(void **VAR_3, unsigned VAR_4, unsigned VAR_5) {
 tsdn_t *VAR_6;
 unsigned VAR_7;

 VAR_6 = FUNC_4();

 if (VAR_1) {
  FUNC_2(VAR_6,
      &VAR_0[VAR_5 % VAR_2].mtx);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  FUNC_0(FUNC_5(VAR_6, VAR_3[VAR_7]), 0,
      "Allocation should no longer exist");
 }
 if (VAR_1) {
  FUNC_3(VAR_6,
      &VAR_0[VAR_5 % VAR_2].mtx);
 }

 FUNC_1(VAR_3);
}
