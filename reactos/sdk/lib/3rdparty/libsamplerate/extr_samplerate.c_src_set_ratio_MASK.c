
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double last_ratio; int * const_process; int * vari_process; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (double) ;

int
FUNC_1 (SRC_STATE *VAR_4, double VAR_5)
{ SRC_PRIVATE *VAR_6 ;

 VAR_6 = (SRC_PRIVATE*) VAR_4 ;

 if (VAR_6 == ((void*)0))
  return VAR_2 ;
 if (VAR_6->vari_process == ((void*)0) || VAR_6->const_process == ((void*)0))
  return VAR_0 ;

 if (FUNC_0 (VAR_5))
  return VAR_1 ;

 VAR_6->last_ratio = VAR_5 ;

 return VAR_3 ;
}
