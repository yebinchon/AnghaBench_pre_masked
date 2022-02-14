
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8 ;
typedef int int64 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int) ;

bool
FUNC_6(const char *VAR_2, bool VAR_3, int64 *VAR_4)
{
 const char *VAR_5 = VAR_2;
 int64 VAR_6 = 0;
 bool VAR_7 = 0;
 while (*VAR_5 && FUNC_2((unsigned char) *VAR_5))
  VAR_5++;


 if (*VAR_5 == '-')
 {
  VAR_5++;
  VAR_7 = 1;
 }
 else if (*VAR_5 == '+')
  VAR_5++;


 if (FUNC_5(!FUNC_1((unsigned char) *VAR_5)))
  goto invalid_syntax;


 while (*VAR_5 && FUNC_1((unsigned char) *VAR_5))
 {
  int8 VAR_8 = (*VAR_5++ - '0');

  if (FUNC_5(FUNC_3(VAR_6, 10, &VAR_6)) ||
   FUNC_5(FUNC_4(VAR_6, VAR_8, &VAR_6)))
   goto out_of_range;
 }


 while (*VAR_5 != '\0' && FUNC_2((unsigned char) *VAR_5))
  VAR_5++;

 if (FUNC_5(*VAR_5 != '\0'))
  goto invalid_syntax;

 if (!VAR_7)
 {
  if (FUNC_5(VAR_6 == VAR_0))
   goto out_of_range;
  VAR_6 = -VAR_6;
 }

 *VAR_4 = VAR_6;
 return 1;

out_of_range:
 if (!VAR_3)
  FUNC_0(VAR_1,
    "value \"%s\" is out of range for type bigint\n", VAR_2);
 return 0;

invalid_syntax:
 if (!VAR_3)
  FUNC_0(VAR_1,
    "invalid input syntax for type bigint: \"%s\"\n", VAR_2);
 return 0;
}
