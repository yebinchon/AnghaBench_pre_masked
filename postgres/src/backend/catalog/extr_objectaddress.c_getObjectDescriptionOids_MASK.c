
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;


 char* FUNC_0 (TYPE_1__*) ;

char *
FUNC_1(Oid VAR_0, Oid VAR_1)
{
 ObjectAddress VAR_2;

 VAR_2.classId = VAR_0;
 VAR_2.objectId = VAR_1;
 VAR_2.objectSubId = 0;

 return FUNC_0(&VAR_2);
}
