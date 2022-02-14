
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8 ;
typedef int int16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

int16
FUNC_9(const char *VAR_4)
{
 const char *VAR_5 = VAR_4;
 int16 VAR_6 = 0;
 bool VAR_7 = 0;


 while (FUNC_5(*VAR_5) && FUNC_4((unsigned char) *VAR_5))
  VAR_5++;


 if (*VAR_5 == '-')
 {
  VAR_5++;
  VAR_7 = 1;
 }
 else if (*VAR_5 == '+')
  VAR_5++;


 if (FUNC_8(!FUNC_3((unsigned char) *VAR_5)))
  goto invalid_syntax;


 while (*VAR_5 && FUNC_3((unsigned char) *VAR_5))
 {
  int8 VAR_8 = (*VAR_5++ - '0');

  if (FUNC_8(FUNC_6(VAR_6, 10, &VAR_6)) ||
   FUNC_8(FUNC_7(VAR_6, VAR_8, &VAR_6)))
   goto out_of_range;
 }


 while (*VAR_5 != '\0' && FUNC_4((unsigned char) *VAR_5))
  VAR_5++;

 if (FUNC_8(*VAR_5 != '\0'))
  goto invalid_syntax;

 if (!VAR_7)
 {

  if (FUNC_8(VAR_6 == VAR_3))
   goto out_of_range;
  VAR_6 = -VAR_6;
 }

 return VAR_6;

out_of_range:
 FUNC_0(VAR_2,
   (FUNC_1(VAR_1),
    FUNC_2("value \"%s\" is out of range for type %s",
     VAR_4, "smallint")));

invalid_syntax:
 FUNC_0(VAR_2,
   (FUNC_1(VAR_0),
    FUNC_2("invalid input syntax for type %s: \"%s\"",
     "smallint", VAR_4)));

 return 0;
}
