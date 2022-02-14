
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(char *VAR_0, int VAR_1)
{
 char *VAR_2;
 int VAR_3 = FUNC_4(VAR_0);

 if (VAR_3 >= VAR_1)
  return -1;

 VAR_2 = FUNC_1(sizeof(char) * (VAR_1+1));
 for (; VAR_3 < VAR_1; VAR_3++)
  VAR_0[VAR_3] = ' ';
 VAR_0[VAR_3] = '\0';
 FUNC_2(VAR_2, VAR_1+1, " %s", VAR_0);
 FUNC_3(VAR_0, VAR_2);
 FUNC_0(VAR_2);
 return 0;
}
