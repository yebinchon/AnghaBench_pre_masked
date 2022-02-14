
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cb_printf ) (char*,char*) ;} ;
typedef int RIODesc ;
typedef TYPE_1__ RIO ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int*,int*) ;
 char* FUNC_3 (char*,int ,char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static char *FUNC_6(RIO *VAR_0, RIODesc *VAR_1, const char *VAR_2) {
 if (!*VAR_2) {
  return ((void*)0);
 }
 int VAR_3, VAR_4;
 char *VAR_5 = FUNC_4 (VAR_2);
 char *VAR_6 = FUNC_3 ("%s/%s", FUNC_1(VAR_1), VAR_5);
 char *VAR_7 = FUNC_2 (VAR_6, &VAR_3, &VAR_4);
 if (VAR_7 && VAR_4 > 0) {
  VAR_0->cb_printf ("%s", VAR_7);
 }
 FUNC_0 (VAR_7);
 FUNC_0 (VAR_6);
 FUNC_0 (VAR_5);
 return ((void*)0);
}
