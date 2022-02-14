
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int channels; int mode; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;

SRC_STATE *
FUNC_4 (int VAR_5, int VAR_6, int *VAR_7)
{ SRC_PRIVATE *VAR_8 ;

 if (VAR_7)
  *VAR_7 = VAR_3 ;

 if (VAR_6 < 1)
 { if (VAR_7)
   *VAR_7 = VAR_0 ;
  return ((void*)0) ;
  } ;

 if ((VAR_8 = FUNC_0 (1, sizeof (*VAR_8))) == ((void*)0))
 { if (VAR_7)
   *VAR_7 = VAR_2 ;
  return ((void*)0) ;
  } ;

 VAR_8->channels = VAR_6 ;
 VAR_8->mode = VAR_4 ;

 if (FUNC_2 (VAR_8, VAR_5) != VAR_3)
 { if (VAR_7)
   *VAR_7 = VAR_1 ;
  FUNC_1 (VAR_8) ;
  VAR_8 = ((void*)0) ;
  } ;

 FUNC_3 ((SRC_STATE*) VAR_8) ;

 return (SRC_STATE*) VAR_8 ;
}
