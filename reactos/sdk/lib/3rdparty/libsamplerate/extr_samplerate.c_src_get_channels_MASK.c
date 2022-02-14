
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channels; int * const_process; int * vari_process; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0 (SRC_STATE *VAR_2)
{ SRC_PRIVATE *VAR_3 ;

 VAR_3 = (SRC_PRIVATE*) VAR_2 ;

 if (VAR_3 == ((void*)0))
  return VAR_1 ;
 if (VAR_3->vari_process == ((void*)0) || VAR_3->const_process == ((void*)0))
  return VAR_0 ;

 return VAR_3->channels ;
}
