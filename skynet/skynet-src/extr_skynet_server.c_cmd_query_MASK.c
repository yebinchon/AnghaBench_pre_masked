
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {char const* result; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct skynet_context * VAR_0, const char * VAR_1) {
 if (VAR_1[0] == '.') {
  uint32_t VAR_2 = FUNC_0(VAR_1+1);
  if (VAR_2) {
   FUNC_1(VAR_0->result, ":%x", VAR_2);
   return VAR_0->result;
  }
 }
 return ((void*)0);
}
