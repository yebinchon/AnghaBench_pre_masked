
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;


 char* FUNC_0 (struct skynet_context*,char*,char const*) ;

__attribute__((used)) static const char *
FUNC_1(struct skynet_context *VAR_0, const char *VAR_1, const char * VAR_2) {
 const char * VAR_3 = FUNC_0(VAR_0, "GETENV", VAR_1);
 if (VAR_3 == ((void*)0)) {
  return VAR_2;
 }
 return VAR_3;
}
