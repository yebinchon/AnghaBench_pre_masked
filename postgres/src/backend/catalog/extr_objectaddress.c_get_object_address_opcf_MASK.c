
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectSubId; void* objectId; void* classId; } ;
typedef int Oid ;
typedef int ObjectType ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;


 int VAR_0 ;
 void* VAR_1 ;


 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,int *,int) ;
 void* FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_7(ObjectType VAR_4, List *VAR_5, bool VAR_6)
{
 Oid VAR_7;
 ObjectAddress VAR_8;


 VAR_7 = FUNC_1(FUNC_6(FUNC_4(VAR_5)), 0);
 VAR_5 = FUNC_5(VAR_5, 1);

 switch (VAR_4)
 {
  case 129:
   VAR_8.classId = VAR_2;
   VAR_8.objectId = FUNC_2(VAR_7, VAR_5, VAR_6);
   VAR_8.objectSubId = 0;
   break;
  case 128:
   VAR_8.classId = VAR_3;
   VAR_8.objectId = FUNC_3(VAR_7, VAR_5, VAR_6);
   VAR_8.objectSubId = 0;
   break;
  default:
   FUNC_0(VAR_0, "unrecognized objtype: %d", (int) VAR_4);

   VAR_8.classId = VAR_1;
   VAR_8.objectId = VAR_1;
   VAR_8.objectSubId = 0;
 }

 return VAR_8;
}
