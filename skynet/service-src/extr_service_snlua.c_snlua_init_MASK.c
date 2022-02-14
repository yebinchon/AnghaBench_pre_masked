
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snlua {int dummy; } ;
struct skynet_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (struct skynet_context*,struct snlua*,int ) ;
 char* FUNC_2 (struct skynet_context*,char*,int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct skynet_context*,int ,int ,int ,int ,char*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int *,int) ;

int
FUNC_7(struct snlua *VAR_2, struct skynet_context *VAR_3, const char * VAR_4) {
 int VAR_5 = FUNC_5(VAR_4);
 char * VAR_6 = FUNC_3(VAR_5);
 FUNC_0(VAR_6, VAR_4, VAR_5);
 FUNC_1(VAR_3, VAR_2 , VAR_1);
 const char * VAR_7 = FUNC_2(VAR_3, "REG", ((void*)0));
 uint32_t VAR_8 = FUNC_6(VAR_7+1, ((void*)0), 16);

 FUNC_4(VAR_3, 0, VAR_8, VAR_0,0, VAR_6, VAR_5);
 return 0;
}
