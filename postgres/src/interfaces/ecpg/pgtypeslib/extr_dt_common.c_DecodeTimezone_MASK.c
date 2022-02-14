
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, int *VAR_3)
{
 int VAR_4;
 int VAR_5,
    VAR_6;
 char *VAR_7;
 int VAR_8;


 VAR_5 = FUNC_1(VAR_2 + 1, &VAR_7, 10);


 if (*VAR_7 == ':')
  VAR_6 = FUNC_1(VAR_7 + 1, &VAR_7, 10);

 else if (*VAR_7 == '\0' && (VAR_8 = FUNC_0(VAR_2)) > 3)
 {
  VAR_6 = FUNC_1(VAR_2 + VAR_8 - 2, &VAR_7, 10);
  if (VAR_6 < 0 || VAR_6 >= 60)
   return -1;

  *(VAR_2 + VAR_8 - 2) = '\0';
  VAR_5 = FUNC_1(VAR_2 + 1, &VAR_7, 10);
  if (VAR_5 < 0 || VAR_5 > 13)
   return -1;
 }
 else
  VAR_6 = 0;

 VAR_4 = (VAR_5 * VAR_0 + VAR_6) * VAR_1;
 if (*VAR_2 == '-')
  VAR_4 = -VAR_4;

 *VAR_3 = -VAR_4;
 return *VAR_7 != '\0';
}
