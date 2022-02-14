
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,char*,int*) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, int *VAR_2)
{
 int VAR_3,
    VAR_4;
 int VAR_5;
 char *VAR_6;
 char VAR_7;

 VAR_6 = VAR_1;
 while (*VAR_6 != '\0' && FUNC_2((unsigned char) *VAR_6))
  VAR_6++;

 if (FUNC_1(VAR_6, &VAR_4) != 0)
  return -1;

 VAR_7 = *VAR_6;
 *VAR_6 = '\0';
 VAR_5 = FUNC_0(VAR_0 - 1, VAR_1, &VAR_3);
 *VAR_6 = VAR_7;

 switch (VAR_5)
 {
  case 129:
  case 128:
   *VAR_2 = -(VAR_3 + VAR_4);
   break;

  default:
   return -1;
 }

 return 0;
}
