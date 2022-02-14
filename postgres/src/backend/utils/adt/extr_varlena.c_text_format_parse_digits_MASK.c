
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char int8 ;


 int FUNC_0 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char,int*) ;
 int FUNC_5 (int,int,int*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(const char **VAR_2, const char *VAR_3, int *VAR_4)
{
 bool VAR_5 = 0;
 const char *VAR_6 = *VAR_2;
 int VAR_7 = 0;

 while (*VAR_6 >= '0' && *VAR_6 <= '9')
 {
  int8 VAR_8 = (*VAR_6 - '0');

  if (FUNC_6(FUNC_5(VAR_7, 10, &VAR_7)) ||
   FUNC_6(FUNC_4(VAR_7, VAR_8, &VAR_7)))
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("number is out of range")));
  FUNC_0(VAR_6, VAR_3);
  VAR_5 = 1;
 }

 *VAR_2 = VAR_6;
 *VAR_4 = VAR_7;

 return VAR_5;
}
