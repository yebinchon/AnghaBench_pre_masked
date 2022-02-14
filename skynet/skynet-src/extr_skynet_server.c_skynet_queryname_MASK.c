
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;


 int FUNC_0 (struct skynet_context*,char*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *,int) ;

uint32_t
FUNC_3(struct skynet_context * VAR_0, const char * VAR_1) {
 switch(VAR_1[0]) {
 case ':':
  return FUNC_2(VAR_1+1,((void*)0),16);
 case '.':
  return FUNC_1(VAR_1 + 1);
 }
 FUNC_0(VAR_0, "Don't support query global name %s",VAR_1);
 return 0;
}
