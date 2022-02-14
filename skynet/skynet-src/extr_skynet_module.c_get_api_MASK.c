
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_module {char const* name; int module; } ;


 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void *
FUNC_4(struct skynet_module *VAR_0, const char *VAR_1) {
 size_t VAR_2 = FUNC_2(VAR_0->name);
 size_t VAR_3 = FUNC_2(VAR_1);
 char VAR_4[VAR_2 + VAR_3 + 1];
 FUNC_1(VAR_4, VAR_0->name, VAR_2);
 FUNC_1(VAR_4+VAR_2, VAR_1, VAR_3+1);
 char *VAR_5 = FUNC_3(VAR_4, '.');
 if (VAR_5 == ((void*)0)) {
  VAR_5 = VAR_4;
 } else {
  VAR_5 = VAR_5 + 1;
 }
 return FUNC_0(VAR_0->module, VAR_5);
}
