
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * src_callback_t ;
struct TYPE_2__ {void* user_callback_data; int * callback_func; int mode; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int*) ;
 int FUNC_1 (int *) ;

SRC_STATE*
FUNC_2 (src_callback_t VAR_2, int VAR_3, int VAR_4, int *VAR_5, void* VAR_6)
{ SRC_STATE *VAR_7 ;

 if (VAR_2 == ((void*)0))
 { if (VAR_5)
   *VAR_5 = VAR_0 ;
  return ((void*)0) ;
  } ;

 if (VAR_5 != ((void*)0))
  *VAR_5 = 0 ;

 if ((VAR_7 = FUNC_0 (VAR_3, VAR_4, VAR_5)) == ((void*)0))
  return ((void*)0) ;

 FUNC_1 (VAR_7) ;

 ((SRC_PRIVATE*) VAR_7)->mode = VAR_1 ;
 ((SRC_PRIVATE*) VAR_7)->callback_func = VAR_2 ;
 ((SRC_PRIVATE*) VAR_7)->user_callback_data = VAR_6 ;

 return VAR_7 ;
}
