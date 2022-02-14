
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

bool
FUNC_5(const char *VAR_3, int VAR_4)
{
 const char *VAR_5;

 if (FUNC_4(VAR_3) == 0)
 {
  FUNC_0(VAR_4,
    (FUNC_1(VAR_0),
     FUNC_3("replication slot name \"%s\" is too short",
      VAR_3)));
  return 0;
 }

 if (FUNC_4(VAR_3) >= VAR_2)
 {
  FUNC_0(VAR_4,
    (FUNC_1(VAR_1),
     FUNC_3("replication slot name \"%s\" is too long",
      VAR_3)));
  return 0;
 }

 for (VAR_5 = VAR_3; *VAR_5; VAR_5++)
 {
  if (!((*VAR_5 >= 'a' && *VAR_5 <= 'z')
     || (*VAR_5 >= '0' && *VAR_5 <= '9')
     || (*VAR_5 == '_')))
  {
   FUNC_0(VAR_4,
     (FUNC_1(VAR_0),
      FUNC_3("replication slot name \"%s\" contains invalid character",
       VAR_3),
      FUNC_2("Replication slot names may only contain lower case letters, numbers, and the underscore character.")));
   return 0;
  }
 }
 return 1;
}
