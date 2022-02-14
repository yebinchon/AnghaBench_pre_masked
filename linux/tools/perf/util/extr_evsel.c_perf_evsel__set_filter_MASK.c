
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {char* filter; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;

int FUNC_2(struct evsel *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_0->filter);
  VAR_0->filter = VAR_2;
  return 0;
 }

 return -1;
}
