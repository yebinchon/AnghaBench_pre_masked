
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {char const* result; int handle; } ;


 int FUNC_0 (struct skynet_context*,char*,char const*) ;
 char const* FUNC_1 (int,char const*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static const char *
FUNC_3(struct skynet_context * VAR_0, const char * VAR_1) {
 if (VAR_1 == ((void*)0) || VAR_1[0] == '\0') {
  FUNC_2(VAR_0->result, ":%x", VAR_0->handle);
  return VAR_0->result;
 } else if (VAR_1[0] == '.') {
  return FUNC_1(VAR_0->handle, VAR_1 + 1);
 } else {
  FUNC_0(VAR_0, "Can't register global name %s in C", VAR_1);
  return ((void*)0);
 }
}
