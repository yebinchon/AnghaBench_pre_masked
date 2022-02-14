
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;


 int FUNC_0 (struct evsel*) ;
 int FUNC_1 (char*,size_t,char*,int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, size_t VAR_1,
        struct evsel *VAR_2)
{
 char *VAR_3 = VAR_0;

 FUNC_1(VAR_0, VAR_1, "stat__%s", FUNC_0(VAR_2));

 while ((VAR_3 = FUNC_2(VAR_3, ':'))) {
  *VAR_3 = '_';
  VAR_3++;
 }
}
