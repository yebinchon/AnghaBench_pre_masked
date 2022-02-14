
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (unsigned char) ;
 unsigned long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static Oid
FUNC_5(const char *VAR_6, char **VAR_7)
{
 unsigned long VAR_8;
 char *VAR_9;
 Oid VAR_10;

 if (*VAR_6 == '\0')
  FUNC_0(VAR_4,
    (FUNC_1(VAR_2),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      "oid", VAR_6)));

 VAR_5 = 0;
 VAR_8 = FUNC_4(VAR_6, &VAR_9, 10);






 if (VAR_5 && VAR_5 != VAR_1 && VAR_5 != VAR_0)
  FUNC_0(VAR_4,
    (FUNC_1(VAR_2),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      "oid", VAR_6)));

 if (VAR_9 == VAR_6 && *VAR_6 != '\0')
  FUNC_0(VAR_4,
    (FUNC_1(VAR_2),
     FUNC_2("invalid input syntax for type %s: \"%s\"",
      "oid", VAR_6)));

 if (VAR_5 == VAR_1)
  FUNC_0(VAR_4,
    (FUNC_1(VAR_3),
     FUNC_2("value \"%s\" is out of range for type %s",
      VAR_6, "oid")));

 if (VAR_7)
 {

  *VAR_7 = VAR_9;
 }
 else
 {

  while (*VAR_9 && FUNC_3((unsigned char) *VAR_9))
   VAR_9++;
  if (*VAR_9)
   FUNC_0(VAR_4,
     (FUNC_1(VAR_2),
      FUNC_2("invalid input syntax for type %s: \"%s\"",
       "oid", VAR_6)));
 }

 VAR_10 = (Oid) VAR_8;
 return VAR_10;
}
