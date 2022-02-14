
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(const ObjectAddress *VAR_3, const char *VAR_4)
{
 if (VAR_4 == ((void*)0) ||
  FUNC_3(VAR_4, "unclassified") == 0 ||
  FUNC_3(VAR_4, "classified") == 0)
  return;

 if (FUNC_3(VAR_4, "secret") == 0 ||
  FUNC_3(VAR_4, "top secret") == 0)
 {
  if (!FUNC_4())
   FUNC_0(VAR_2,
     (FUNC_1(VAR_0),
      FUNC_2("only superuser can set '%s' label", VAR_4)));
  return;
 }
 FUNC_0(VAR_2,
   (FUNC_1(VAR_1),
    FUNC_2("'%s' is not a valid security label", VAR_4)));
}
