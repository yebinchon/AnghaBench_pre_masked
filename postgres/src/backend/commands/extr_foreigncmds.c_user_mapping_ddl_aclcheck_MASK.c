
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ,char const*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(Oid VAR_4, Oid VAR_5, const char *VAR_6)
{
 Oid VAR_7 = FUNC_0();

 if (!FUNC_3(VAR_5, VAR_7))
 {
  if (VAR_4 == VAR_7)
  {
   AclResult VAR_8;

   VAR_8 = FUNC_2(VAR_5, VAR_7, VAR_2);
   if (VAR_8 != VAR_1)
    FUNC_1(VAR_8, VAR_3, VAR_6);
  }
  else
   FUNC_1(VAR_0, VAR_3,
         VAR_6);
 }
}
