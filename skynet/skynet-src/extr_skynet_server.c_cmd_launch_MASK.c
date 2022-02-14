
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {char const* result; int handle; } ;


 int FUNC_0 (char const*,int ) ;
 struct skynet_context* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static const char *
FUNC_5(struct skynet_context * VAR_0, const char * VAR_1) {
 size_t VAR_2 = FUNC_3(VAR_1);
 char VAR_3[VAR_2+1];
 FUNC_2(VAR_3,VAR_1);
 char * VAR_4 = VAR_3;
 char * VAR_5 = FUNC_4(&VAR_4, " \t\r\n");
 VAR_4 = FUNC_4(&VAR_4, "\r\n");
 struct skynet_context * VAR_6 = FUNC_1(VAR_5,VAR_4);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 } else {
  FUNC_0(VAR_0->result, VAR_6->handle);
  return VAR_0->result;
 }
}
