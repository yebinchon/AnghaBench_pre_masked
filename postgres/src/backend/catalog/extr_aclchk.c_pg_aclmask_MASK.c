
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int ObjectType ;
typedef int AttrNumber ;
typedef int AclMode ;
typedef int AclMaskHow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int,int ,int *) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (int ,int ,int,int ) ;

__attribute__((used)) static AclMode
FUNC_12(ObjectType VAR_2, Oid VAR_3, AttrNumber VAR_4, Oid VAR_5,
     AclMode VAR_6, AclMaskHow VAR_7)
{
 switch (VAR_2)
 {
  case 141:
   return
    FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7) |
    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  case 130:
  case 132:
   return FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7);
  case 140:
   return FUNC_3(VAR_3, VAR_5, VAR_6, VAR_7);
  case 136:
   return FUNC_9(VAR_3, VAR_5, VAR_6, VAR_7);
  case 135:
   return FUNC_6(VAR_3, VAR_5, VAR_6, VAR_7);
  case 134:
   return FUNC_7(VAR_3, VAR_5,
               VAR_6, VAR_7, ((void*)0));
  case 133:
   return FUNC_8(VAR_3, VAR_5, VAR_6, VAR_7);
  case 131:
   FUNC_0(VAR_1, "grantable rights not supported for statistics objects");

   return VAR_0;
  case 129:
   return FUNC_10(VAR_3, VAR_5, VAR_6, VAR_7);
  case 138:
   return FUNC_4(VAR_3, VAR_5, VAR_6, VAR_7);
  case 137:
   return FUNC_5(VAR_3, VAR_5, VAR_6, VAR_7);
  case 139:
   FUNC_0(VAR_1, "grantable rights not supported for event triggers");

   return VAR_0;
  case 128:
   return FUNC_11(VAR_3, VAR_5, VAR_6, VAR_7);
  default:
   FUNC_0(VAR_1, "unrecognized objtype: %d",
     (int) VAR_2);

   return VAR_0;
 }
}
