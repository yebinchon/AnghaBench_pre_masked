
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ai_grantor; void* ai_grantee; } ;
typedef void* Oid ;
typedef int ObjectType ;
typedef scalar_t__ AclMode ;
typedef TYPE_1__ AclItem ;
typedef int Acl ;


 int FUNC_0 (TYPE_1__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

Acl *
FUNC_4(ObjectType VAR_18, Oid VAR_19)
{
 AclMode VAR_20;
 AclMode VAR_21;
 int VAR_22;
 Acl *VAR_23;
 AclItem *VAR_24;

 switch (VAR_18)
 {
  case 140:

   VAR_20 = VAR_15;
   VAR_21 = VAR_15;
   break;
  case 130:
   VAR_20 = VAR_15;
   VAR_21 = VAR_6;
   break;
  case 131:
   VAR_20 = VAR_15;
   VAR_21 = VAR_8;
   break;
  case 139:

   VAR_20 = VAR_12 | VAR_11;
   VAR_21 = VAR_0;
   break;
  case 135:

   VAR_20 = VAR_13;
   VAR_21 = VAR_3;
   break;
  case 134:

   VAR_20 = VAR_16;
   VAR_21 = VAR_4;
   break;
  case 133:
   VAR_20 = VAR_15;
   VAR_21 = VAR_5;
   break;
  case 132:
   VAR_20 = VAR_15;
   VAR_21 = VAR_7;
   break;
  case 129:
   VAR_20 = VAR_15;
   VAR_21 = VAR_9;
   break;
  case 137:
   VAR_20 = VAR_15;
   VAR_21 = VAR_1;
   break;
  case 136:
   VAR_20 = VAR_15;
   VAR_21 = VAR_2;
   break;
  case 138:
  case 128:
   VAR_20 = VAR_16;
   VAR_21 = VAR_10;
   break;
  default:
   FUNC_3(VAR_17, "unrecognized objtype: %d", (int) VAR_18);
   VAR_20 = VAR_15;
   VAR_21 = VAR_15;
   break;
 }

 VAR_22 = 0;
 if (VAR_20 != VAR_15)
  VAR_22++;
 if (VAR_21 != VAR_15)
  VAR_22++;

 VAR_23 = FUNC_2(VAR_22);
 VAR_24 = FUNC_1(VAR_23);

 if (VAR_20 != VAR_15)
 {
  VAR_24->ai_grantee = VAR_14;
  VAR_24->ai_grantor = VAR_19;
  FUNC_0(*VAR_24, VAR_20, VAR_15);
  VAR_24++;
 }
 if (VAR_21 != VAR_15)
 {
  VAR_24->ai_grantee = VAR_19;
  VAR_24->ai_grantor = VAR_19;
  FUNC_0(*VAR_24, VAR_21, VAR_15);
 }

 return VAR_23;
}
