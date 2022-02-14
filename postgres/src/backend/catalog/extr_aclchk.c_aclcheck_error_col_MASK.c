
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ObjectType ;
typedef int AclResult ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char const*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,char const*) ;

void
FUNC_5(AclResult VAR_2, ObjectType VAR_3,
       const char *VAR_4, const char *VAR_5)
{
 switch (VAR_2)
 {
  case 128:

   break;
  case 129:
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_4("permission denied for column \"%s\" of relation \"%s\"",
       VAR_5, VAR_4)));
   break;
  case 130:

   FUNC_0(VAR_2, VAR_3, VAR_4);
   break;
  default:
   FUNC_1(VAR_1, "unrecognized AclResult: %d", (int) VAR_2);
   break;
 }
}
