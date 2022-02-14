
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snlua {int dummy; } ;
struct skynet_context {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snlua*,struct skynet_context*,void const*,size_t) ;
 int FUNC_2 (struct skynet_context*,int *,int *) ;
 int FUNC_3 (struct skynet_context*,char*,int *) ;

__attribute__((used)) static int
FUNC_4(struct skynet_context * VAR_0, void *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4 , const void * VAR_5, size_t VAR_6) {
 FUNC_0(VAR_2 == 0 && VAR_3 == 0);
 struct snlua *VAR_7 = VAR_1;
 FUNC_2(VAR_0, ((void*)0), ((void*)0));
 int VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_0, "EXIT", ((void*)0));
 }

 return 0;
}
