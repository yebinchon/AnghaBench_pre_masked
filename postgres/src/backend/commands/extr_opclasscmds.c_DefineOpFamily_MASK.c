
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int amname; int opfamilyname; } ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_1__ CreateOpFamilyStmt ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 () ;

ObjectAddress
FUNC_11(CreateOpFamilyStmt *VAR_5)
{
 char *VAR_6;
 Oid VAR_7,
    VAR_8;
 AclResult VAR_9;


 VAR_8 = FUNC_2(VAR_5->opfamilyname,
              &VAR_6);


 VAR_9 = FUNC_9(VAR_8, FUNC_1(), VAR_1);
 if (VAR_9 != VAR_0)
  FUNC_3(VAR_9, VAR_4,
        FUNC_8(VAR_8));


 VAR_7 = FUNC_7(VAR_5->amname, 0);







 if (!FUNC_10())
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("must be superuser to create an operator family")));


 return FUNC_0(VAR_5->amname, VAR_6, VAR_8, VAR_7);
}
