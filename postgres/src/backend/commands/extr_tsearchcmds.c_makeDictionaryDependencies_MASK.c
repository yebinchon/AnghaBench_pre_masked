
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dicttemplate; int dictowner; int dictnamespace; int oid; } ;
struct TYPE_7__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef TYPE_1__ ObjectAddress ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_ts_dict ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_4(HeapTuple VAR_4)
{
 Form_pg_ts_dict VAR_5 = (Form_pg_ts_dict) FUNC_0(VAR_4);
 ObjectAddress VAR_6,
    VAR_7;

 VAR_6.classId = VAR_2;
 VAR_6.objectId = VAR_5->oid;
 VAR_6.objectSubId = 0;


 VAR_7.classId = VAR_1;
 VAR_7.objectId = VAR_5->dictnamespace;
 VAR_7.objectSubId = 0;
 FUNC_1(&VAR_6, &VAR_7, VAR_0);


 FUNC_3(VAR_6.classId, VAR_6.objectId, VAR_5->dictowner);


 FUNC_2(&VAR_6, 0);


 VAR_7.classId = VAR_3;
 VAR_7.objectId = VAR_5->dicttemplate;
 VAR_7.objectSubId = 0;
 FUNC_1(&VAR_6, &VAR_7, VAR_0);

 return VAR_6;
}
