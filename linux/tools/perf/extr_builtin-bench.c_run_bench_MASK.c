
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* bench_fn_t ) (int,char const**) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,char const*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1, const char *VAR_2, bench_fn_t VAR_3,
       int VAR_4, const char **VAR_5)
{
 int VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_1) + 1 + FUNC_4(VAR_2) + 1;

 VAR_7 = FUNC_5(VAR_6);
 FUNC_0(!VAR_7);

 FUNC_3(VAR_7, VAR_6, "%s-%s", VAR_1, VAR_2);

 FUNC_2(VAR_0, VAR_7);
 VAR_5[0] = VAR_7;

 VAR_8 = VAR_3(VAR_4, VAR_5);

 FUNC_1(VAR_7);

 return VAR_8;
}
