
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_2, Oid VAR_3)
{
 if (VAR_3 == VAR_1)
  FUNC_2(VAR_2, '\0');
 else
 {
  char *VAR_4 = FUNC_1(VAR_3);

  if (VAR_4 == ((void*)0))
   FUNC_0(VAR_0, "cache lookup failed for namespace %u",
     VAR_3);

  FUNC_3(VAR_2, VAR_4);
 }
}
