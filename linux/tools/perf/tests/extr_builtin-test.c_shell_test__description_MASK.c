
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char FUNC_1 (int *) ;
 char* FUNC_2 (char*,size_t,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char const*,char const*) ;
 char const* FUNC_5 (char*) ;

__attribute__((used)) static const char *FUNC_6(char *VAR_1, size_t VAR_2,
        const char *VAR_3, const char *VAR_4)
{
 FILE *VAR_5;
 char VAR_6[VAR_0];

 FUNC_4(VAR_6, sizeof(VAR_6), VAR_3, VAR_4);
 VAR_5 = FUNC_3(VAR_6, "r");
 if (!VAR_5)
  return ((void*)0);


 while (FUNC_1(VAR_5) != '\n');

 VAR_1 = FUNC_2(VAR_1, VAR_2, VAR_5);
 FUNC_0(VAR_5);

 return VAR_1 ? FUNC_5(VAR_1 + 1) : ((void*)0);
}
