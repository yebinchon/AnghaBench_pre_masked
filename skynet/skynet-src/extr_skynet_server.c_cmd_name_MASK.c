
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_context {int dummy; } ;


 int FUNC_0 (struct skynet_context*,char*,char*) ;
 char const* FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (char const*,char*,char*,char*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;

__attribute__((used)) static const char *
FUNC_5(struct skynet_context * VAR_0, const char * VAR_1) {
 int VAR_2 = FUNC_3(VAR_1);
 char VAR_3[VAR_2+1];
 char VAR_4[VAR_2+1];
 FUNC_2(VAR_1,"%s %s",VAR_3,VAR_4);
 if (VAR_4[0] != ':') {
  return ((void*)0);
 }
 uint32_t VAR_5 = FUNC_4(VAR_4+1, ((void*)0), 16);
 if (VAR_5 == 0) {
  return ((void*)0);
 }
 if (VAR_3[0] == '.') {
  return FUNC_1(VAR_5, VAR_3 + 1);
 } else {
  FUNC_0(VAR_0, "Can't set global name %s in C", VAR_3);
 }
 return ((void*)0);
}
