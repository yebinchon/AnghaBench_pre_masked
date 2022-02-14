
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int end_of_input; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_DATA ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int,int*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

int
FUNC_3 (SRC_DATA *VAR_0, int VAR_1, int VAR_2)
{ SRC_STATE *VAR_3 ;
 int VAR_4 ;

 if ((VAR_3 = FUNC_1 (VAR_1, VAR_2, &VAR_4)) == ((void*)0))
  return VAR_4 ;

 VAR_0->end_of_input = 1 ;

 VAR_4 = FUNC_2 (VAR_3, VAR_0) ;

 FUNC_0 (VAR_3) ;

 return VAR_4 ;
}
