
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef int Relation ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,void*,int) ;
 void* VAR_1 ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5(Oid VAR_2, Oid VAR_3,
       int32 VAR_4, Relation VAR_5,
       bool VAR_6)
{
 ObjectAddress VAR_7,
    VAR_8;


 FUNC_2(VAR_2, VAR_3, VAR_4);




 VAR_8.classId = VAR_1;
 VAR_8.objectId = VAR_3;
 VAR_8.objectSubId = 0;
 VAR_7.classId = VAR_1;
 VAR_7.objectId = VAR_2;
 VAR_7.objectSubId = 0;

 FUNC_4(&VAR_7, &VAR_8,
        FUNC_3(VAR_6));






 FUNC_0(VAR_0,
         VAR_2, 0,
         VAR_3, 0);




 FUNC_1(VAR_3, 1);
}
