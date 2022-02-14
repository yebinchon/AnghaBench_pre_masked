
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1)
{
 char *VAR_2, *VAR_3 = ((void*)0);
 size_t VAR_4 = 0;
 FILE *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1, "r");
 if (!VAR_5)
  return -1;

 VAR_6 = FUNC_3(&VAR_3, &VAR_4, VAR_5);
 FUNC_0(VAR_5);
 if (VAR_6 < 0)
  return -1;

 VAR_0 = 0;
 VAR_6 = FUNC_4(VAR_3, &VAR_2, 10);
 if (VAR_0 || *VAR_3 == '\0' || *VAR_2 != '\n')
  VAR_6 = -1;
 FUNC_2(VAR_3);

 return VAR_6;
}
