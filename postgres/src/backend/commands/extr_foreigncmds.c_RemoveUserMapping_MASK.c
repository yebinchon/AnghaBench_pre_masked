
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int servername; int missing_ok; scalar_t__ user; } ;
struct TYPE_10__ {int servername; int serverid; } ;
struct TYPE_9__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_8__ {scalar_t__ roletype; int rolename; } ;
typedef TYPE_1__ RoleSpec ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef TYPE_3__ ForeignServer ;
typedef TYPE_4__ DropUserMappingStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;

Oid
FUNC_12(DropUserMappingStmt *VAR_10)
{
 ObjectAddress VAR_11;
 Oid VAR_12;
 Oid VAR_13;
 ForeignServer *VAR_14;
 RoleSpec *VAR_15 = (RoleSpec *) VAR_10->user;

 if (VAR_15->roletype == VAR_7)
  VAR_12 = VAR_0;
 else
 {
  VAR_12 = FUNC_9(VAR_10->user, VAR_10->missing_ok);
  if (!FUNC_4(VAR_12))
  {




   FUNC_5(VAR_6, "role \"%s\" does not exist, skipping",
     VAR_15->rolename);
   return VAR_5;
  }
 }

 VAR_14 = FUNC_0(VAR_10->servername, 1);

 if (!VAR_14)
 {
  if (!VAR_10->missing_ok)
   FUNC_6(VAR_4,
     (FUNC_7(VAR_3),
      FUNC_8("server \"%s\" does not exist",
       VAR_10->servername)));

  FUNC_6(VAR_6,
    (FUNC_8("server \"%s\" does not exist, skipping",
      VAR_10->servername)));
  return VAR_5;
 }

 VAR_13 = FUNC_1(VAR_8, VAR_1,
         FUNC_3(VAR_12),
         FUNC_3(VAR_14->serverid));

 if (!FUNC_4(VAR_13))
 {
  if (!VAR_10->missing_ok)
   FUNC_6(VAR_4,
     (FUNC_7(VAR_3),
      FUNC_8("user mapping for \"%s\" does not exist for server \"%s\"",
       FUNC_2(VAR_12), VAR_10->servername)));


  FUNC_6(VAR_6,
    (FUNC_8("user mapping for \"%s\" does not exist for server \"%s\", skipping",
      FUNC_2(VAR_12), VAR_10->servername)));
  return VAR_5;
 }

 FUNC_11(VAR_12, VAR_14->serverid, VAR_14->servername);




 VAR_11.classId = VAR_9;
 VAR_11.objectId = VAR_13;
 VAR_11.objectSubId = 0;

 FUNC_10(&VAR_11, VAR_2, 0);

 return VAR_13;
}
