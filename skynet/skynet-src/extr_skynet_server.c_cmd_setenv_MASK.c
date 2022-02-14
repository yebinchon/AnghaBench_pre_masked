
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static const char *
FUNC_2(struct skynet_context * VAR_0, const char * VAR_1) {
 size_t VAR_2 = FUNC_1(VAR_1);
 char VAR_3[VAR_2+1];
 int VAR_4;
 for (VAR_4=0;VAR_1[VAR_4] != ' ' && VAR_1[VAR_4];VAR_4++) {
  VAR_3[VAR_4] = VAR_1[VAR_4];
 }
 if (VAR_1[VAR_4] == '\0')
  return ((void*)0);

 VAR_3[VAR_4] = '\0';
 VAR_1 += VAR_4+1;

 FUNC_0(VAR_3,VAR_1);
 return ((void*)0);
}
