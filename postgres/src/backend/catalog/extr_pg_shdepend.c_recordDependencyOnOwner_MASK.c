
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;

void
FUNC_1(Oid VAR_2, Oid VAR_3, Oid VAR_4)
{
 ObjectAddress VAR_5,
    VAR_6;

 VAR_5.classId = VAR_2;
 VAR_5.objectId = VAR_3;
 VAR_5.objectSubId = 0;

 VAR_6.classId = VAR_0;
 VAR_6.objectId = VAR_4;
 VAR_6.objectSubId = 0;

 FUNC_0(&VAR_5, &VAR_6, VAR_1);
}
