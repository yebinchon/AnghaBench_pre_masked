
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct skynet_context*) ;
 struct skynet_context* FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (char const*,char*,char*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(struct skynet_context * VAR_0, const char * VAR_1) {
 int VAR_2 = FUNC_5(VAR_1);
 char VAR_3[VAR_2+1];
 char VAR_4[VAR_2+1];
 FUNC_4(VAR_1, "%s %s", VAR_3, VAR_4);
 struct skynet_context *VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(((void*)0), "Bootstrap error : %s\n", VAR_1);
  FUNC_1(VAR_0);
  FUNC_0(1);
 }
}
