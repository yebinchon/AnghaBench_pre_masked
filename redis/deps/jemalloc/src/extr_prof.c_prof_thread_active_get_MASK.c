
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {int active; } ;
typedef TYPE_1__ prof_tdata_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

bool
FUNC_1(tsd_t *VAR_0) {
 prof_tdata_t *VAR_1;

 VAR_1 = FUNC_0(VAR_0, 1);
 if (VAR_1 == ((void*)0)) {
  return 0;
 }
 return VAR_1->active;
}
