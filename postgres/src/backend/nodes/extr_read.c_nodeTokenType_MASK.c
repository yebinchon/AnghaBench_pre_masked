
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NodeTag ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static NodeTag
FUNC_2(const char *VAR_10, int VAR_11)
{
 NodeTag VAR_12;
 const char *VAR_13;
 int VAR_14;




 VAR_13 = VAR_10;
 VAR_14 = VAR_11;
 if (*VAR_13 == '+' || *VAR_13 == '-')
  VAR_13++, VAR_14--;
 if ((VAR_14 > 0 && FUNC_0((unsigned char) *VAR_13)) ||
  (VAR_14 > 1 && *VAR_13 == '.' && FUNC_0((unsigned char) VAR_13[1])))
 {






  char *VAR_15;

  VAR_9 = 0;
  (void) FUNC_1(VAR_10, &VAR_15, 10);
  if (VAR_15 != VAR_10 + VAR_11 || VAR_9 == VAR_0)
   return VAR_6;
  return VAR_7;
 }





 else if (*VAR_10 == '(')
  VAR_12 = VAR_2;
 else if (*VAR_10 == ')')
  VAR_12 = VAR_4;
 else if (*VAR_10 == '{')
  VAR_12 = VAR_1;
 else if (*VAR_10 == '"' && VAR_11 > 1 && VAR_10[VAR_11 - 1] == '"')
  VAR_12 = VAR_8;
 else if (*VAR_10 == 'b')
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_3;
 return VAR_12;
}
