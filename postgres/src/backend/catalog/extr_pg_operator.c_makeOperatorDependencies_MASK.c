
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int oprowner; int oid; int oprjoin; int oprrest; int oprcode; int oprresult; int oprright; int oprleft; int oprnamespace; } ;
struct TYPE_7__ {scalar_t__ objectSubId; int objectId; void* classId; } ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (void*,int ,int ) ;

ObjectAddress
FUNC_7(HeapTuple VAR_5, bool VAR_6)
{
 Form_pg_operator VAR_7 = (Form_pg_operator) FUNC_0(VAR_5);
 ObjectAddress VAR_8,
    VAR_9;

 VAR_8.classId = VAR_2;
 VAR_8.objectId = VAR_7->oid;
 VAR_8.objectSubId = 0;





 if (VAR_6)
 {
  FUNC_2(VAR_8.classId, VAR_8.objectId, 1);
  FUNC_3(VAR_8.classId, VAR_8.objectId, 0);
 }


 if (FUNC_1(VAR_7->oprnamespace))
 {
  VAR_9.classId = VAR_1;
  VAR_9.objectId = VAR_7->oprnamespace;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }


 if (FUNC_1(VAR_7->oprleft))
 {
  VAR_9.classId = VAR_4;
  VAR_9.objectId = VAR_7->oprleft;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }


 if (FUNC_1(VAR_7->oprright))
 {
  VAR_9.classId = VAR_4;
  VAR_9.objectId = VAR_7->oprright;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }


 if (FUNC_1(VAR_7->oprresult))
 {
  VAR_9.classId = VAR_4;
  VAR_9.objectId = VAR_7->oprresult;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }
 if (FUNC_1(VAR_7->oprcode))
 {
  VAR_9.classId = VAR_3;
  VAR_9.objectId = VAR_7->oprcode;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }


 if (FUNC_1(VAR_7->oprrest))
 {
  VAR_9.classId = VAR_3;
  VAR_9.objectId = VAR_7->oprrest;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }


 if (FUNC_1(VAR_7->oprjoin))
 {
  VAR_9.classId = VAR_3;
  VAR_9.objectId = VAR_7->oprjoin;
  VAR_9.objectSubId = 0;
  FUNC_4(&VAR_8, &VAR_9, VAR_0);
 }


 FUNC_6(VAR_2, VAR_7->oid,
       VAR_7->oprowner);


 FUNC_5(&VAR_8, 1);

 return VAR_8;
}
