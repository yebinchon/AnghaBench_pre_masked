
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int ObjectType ;
typedef int AttrNumber ;
typedef scalar_t__ AclMode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int,char const*) ;
 int FUNC_3 (int ,int,char const*,char const*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*,...) ;
 scalar_t__ FUNC_8 (int,int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static AclMode
FUNC_9(bool VAR_19, AclMode VAR_20, bool VAR_21,
       AclMode VAR_22, Oid VAR_23, Oid VAR_24,
       ObjectType VAR_25, const char *VAR_26,
       AttrNumber VAR_27, const char *VAR_28)
{
 AclMode VAR_29;
 AclMode VAR_30;

 switch (VAR_25)
 {
  case 140:
   VAR_30 = VAR_2;
   break;
  case 130:
   VAR_30 = VAR_9;
   break;
  case 131:
   VAR_30 = VAR_11;
   break;
  case 139:
   VAR_30 = VAR_3;
   break;
  case 135:
   VAR_30 = VAR_6;
   break;
  case 134:
   VAR_30 = VAR_7;
   break;
  case 133:
   VAR_30 = VAR_8;
   break;
  case 132:
   VAR_30 = VAR_10;
   break;
  case 129:
   VAR_30 = VAR_12;
   break;
  case 137:
   VAR_30 = VAR_4;
   break;
  case 136:
   VAR_30 = VAR_5;
   break;
  case 138:
   FUNC_4(VAR_17, "grantable rights not supported for event triggers");

   return VAR_14;
  case 128:
   VAR_30 = VAR_13;
   break;
  default:
   FUNC_4(VAR_17, "unrecognized object type: %d", VAR_25);

   return VAR_14;
 }






 if (VAR_20 == VAR_14)
 {
  if (FUNC_8(VAR_25, VAR_23, VAR_27, VAR_24,
        VAR_30 | FUNC_0(VAR_30),
        VAR_1) == VAR_14)
  {
   if (VAR_25 == 140 && VAR_28)
    FUNC_3(VAR_0, VAR_25, VAR_26, VAR_28);
   else
    FUNC_2(VAR_0, VAR_25, VAR_26);
  }
 }
 VAR_29 = VAR_22 & FUNC_1(VAR_20);
 if (VAR_19)
 {
  if (VAR_29 == 0)
  {
   if (VAR_25 == 140 && VAR_28)
    FUNC_5(VAR_18,
      (FUNC_6(VAR_15),
       FUNC_7("no privileges were granted for column \"%s\" of relation \"%s\"",
        VAR_28, VAR_26)));
   else
    FUNC_5(VAR_18,
      (FUNC_6(VAR_15),
       FUNC_7("no privileges were granted for \"%s\"",
        VAR_26)));
  }
  else if (!VAR_21 && VAR_29 != VAR_22)
  {
   if (VAR_25 == 140 && VAR_28)
    FUNC_5(VAR_18,
      (FUNC_6(VAR_15),
       FUNC_7("not all privileges were granted for column \"%s\" of relation \"%s\"",
        VAR_28, VAR_26)));
   else
    FUNC_5(VAR_18,
      (FUNC_6(VAR_15),
       FUNC_7("not all privileges were granted for \"%s\"",
        VAR_26)));
  }
 }
 else
 {
  if (VAR_29 == 0)
  {
   if (VAR_25 == 140 && VAR_28)
    FUNC_5(VAR_18,
      (FUNC_6(VAR_16),
       FUNC_7("no privileges could be revoked for column \"%s\" of relation \"%s\"",
        VAR_28, VAR_26)));
   else
    FUNC_5(VAR_18,
      (FUNC_6(VAR_16),
       FUNC_7("no privileges could be revoked for \"%s\"",
        VAR_26)));
  }
  else if (!VAR_21 && VAR_29 != VAR_22)
  {
   if (VAR_25 == 140 && VAR_28)
    FUNC_5(VAR_18,
      (FUNC_6(VAR_16),
       FUNC_7("not all privileges could be revoked for column \"%s\" of relation \"%s\"",
        VAR_28, VAR_26)));
   else
    FUNC_5(VAR_18,
      (FUNC_6(VAR_16),
       FUNC_7("not all privileges could be revoked for \"%s\"",
        VAR_26)));
  }
 }

 return VAR_29;
}
