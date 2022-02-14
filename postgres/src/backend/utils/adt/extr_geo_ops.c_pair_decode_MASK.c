
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (char*,char**,char const*,char const*) ;
 scalar_t__ FUNC_4 (unsigned char) ;

__attribute__((used)) static void
FUNC_5(char *VAR_5, float8 *VAR_6, float8 *VAR_7, char **VAR_8,
   const char *VAR_9, const char *VAR_10)
{
 bool VAR_11;

 while (FUNC_4((unsigned char) *VAR_5))
  VAR_5++;
 if ((VAR_11 = (*VAR_5 == VAR_3)))
  VAR_5++;

 *VAR_6 = FUNC_3(VAR_5, &VAR_5, VAR_9, VAR_10);

 if (*VAR_5++ != VAR_0)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      VAR_9, VAR_10)));

 *VAR_7 = FUNC_3(VAR_5, &VAR_5, VAR_9, VAR_10);

 if (VAR_11)
 {
  if (*VAR_5++ != VAR_4)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("invalid input syntax for type %s: \"%s\"",
       VAR_9, VAR_10)));
  while (FUNC_4((unsigned char) *VAR_5))
   VAR_5++;
 }


 if (VAR_8)
  *VAR_8 = VAR_5;
 else if (*VAR_5 != '\0')
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      VAR_9, VAR_10)));
}
