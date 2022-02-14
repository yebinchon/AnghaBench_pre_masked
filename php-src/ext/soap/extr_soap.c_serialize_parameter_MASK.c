
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int xmlNodePtr ;
typedef TYPE_1__* sdlParamPtr ;
typedef int paramNameBuf ;
struct TYPE_4__ {char* paramName; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,char*,int,int ) ;
 int FUNC_5 (char*,int,char*,int) ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 (int ,char*,int) ;

__attribute__((used)) static xmlNodePtr FUNC_7(sdlParamPtr VAR_3, zval *VAR_4, int VAR_5, char *VAR_6, int VAR_7, xmlNodePtr VAR_8)
{
 char *VAR_9;
 xmlNodePtr VAR_10;
 char VAR_11[10];

 if (VAR_4 &&
     FUNC_3(VAR_4) == VAR_0 &&
     FUNC_0(VAR_4) == VAR_2) {
  zval *VAR_12;
  zval *VAR_13;

  if ((VAR_12 = FUNC_6(FUNC_1(VAR_4), "param_name", sizeof("param_name")-1)) != ((void*)0) &&
      FUNC_3(VAR_12) == VAR_1 &&
      (VAR_13 = FUNC_6(FUNC_1(VAR_4), "param_data", sizeof("param_data")-1)) != ((void*)0)) {
   VAR_4 = VAR_13;
   VAR_6 = FUNC_2(VAR_12);
  }
 }

 if (VAR_3 != ((void*)0) && VAR_3->paramName != ((void*)0)) {
  VAR_9 = VAR_3->paramName;
 } else {
  if (VAR_6 == ((void*)0)) {
   VAR_9 = VAR_11;
   FUNC_5(VAR_9, sizeof(VAR_11), "param%d",VAR_5);
  } else {
   VAR_9 = VAR_6;
  }
 }

 VAR_10 = FUNC_4(VAR_4, VAR_3, VAR_9, VAR_7, VAR_8);

 return VAR_10;
}
