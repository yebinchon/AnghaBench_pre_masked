
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double last_position; double last_ratio; int error; scalar_t__ saved_frames; int * saved_data; int (* reset ) (TYPE_1__*) ;} ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1 (SRC_STATE *VAR_2)
{ SRC_PRIVATE *VAR_3 ;

 if ((VAR_3 = (SRC_PRIVATE*) VAR_2) == ((void*)0))
  return VAR_0 ;

 if (VAR_3->reset != ((void*)0))
  VAR_3->reset (VAR_3) ;

 VAR_3->last_position = 0.0 ;
 VAR_3->last_ratio = 0.0 ;

 VAR_3->saved_data = ((void*)0) ;
 VAR_3->saved_frames = 0 ;

 VAR_3->error = VAR_1 ;

 return VAR_1 ;
}
