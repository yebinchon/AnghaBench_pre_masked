
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {char* val; int len; } ;


 int VAR_0 ;
 struct data FUNC_0 (int ,int ,int *) ;
 struct data FUNC_1 (struct data,int) ;
 int VAR_1 ;
 char FUNC_2 (char const*,int*) ;

struct data FUNC_3(const char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct data VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_0, ((void*)0));
 VAR_5 = FUNC_1(VAR_5, VAR_3 + 1);

 VAR_6 = VAR_5.val;
 while (VAR_4 < VAR_3) {
  char VAR_7 = VAR_2[VAR_4++];

  if (VAR_7 == '\\')
   VAR_7 = FUNC_2(VAR_2, &VAR_4);

  VAR_6[VAR_5.len++] = VAR_7;
 }

 VAR_6[VAR_5.len++] = '\0';
 return VAR_5;
}
