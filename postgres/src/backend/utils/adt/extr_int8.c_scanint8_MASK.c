
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8 ;
typedef int int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

bool
FUNC_8(const char *VAR_4, bool VAR_5, int64 *VAR_6)
{
 const char *VAR_7 = VAR_4;
 int64 VAR_8 = 0;
 bool VAR_9 = 0;
 while (*VAR_7 && FUNC_4((unsigned char) *VAR_7))
  VAR_7++;


 if (*VAR_7 == '-')
 {
  VAR_7++;
  VAR_9 = 1;
 }
 else if (*VAR_7 == '+')
  VAR_7++;


 if (FUNC_7(!FUNC_3((unsigned char) *VAR_7)))
  goto invalid_syntax;


 while (*VAR_7 && FUNC_3((unsigned char) *VAR_7))
 {
  int8 VAR_10 = (*VAR_7++ - '0');

  if (FUNC_7(FUNC_5(VAR_8, 10, &VAR_8)) ||
   FUNC_7(FUNC_6(VAR_8, VAR_10, &VAR_8)))
   goto out_of_range;
 }


 while (*VAR_7 != '\0' && FUNC_4((unsigned char) *VAR_7))
  VAR_7++;

 if (FUNC_7(*VAR_7 != '\0'))
  goto invalid_syntax;

 if (!VAR_9)
 {

  if (FUNC_7(VAR_8 == VAR_3))
   goto out_of_range;
  VAR_8 = -VAR_8;
 }

 *VAR_6 = VAR_8;
 return 1;

out_of_range:
 if (!VAR_5)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("value \"%s\" is out of range for type %s",
      VAR_4, "bigint")));
 return 0;

invalid_syntax:
 if (!VAR_5)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_0),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      "bigint", VAR_4)));
 return 0;
}
