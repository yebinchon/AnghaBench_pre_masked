
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TypeName ;
typedef int Type ;
struct TYPE_5__ {scalar_t__ typtype; } ;
struct TYPE_4__ {int objectId; scalar_t__ objectSubId; int classId; } ;
typedef scalar_t__ ObjectType ;
typedef TYPE_1__ ObjectAddress ;
typedef TYPE_2__* Form_pg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ObjectAddress
FUNC_9(ObjectType VAR_7, TypeName *VAR_8, bool VAR_9)
{
 ObjectAddress VAR_10;
 Type VAR_11;

 VAR_10.classId = VAR_6;
 VAR_10.objectId = VAR_3;
 VAR_10.objectSubId = 0;

 VAR_11 = FUNC_2(((void*)0), VAR_8, ((void*)0), VAR_9);
 if (!FUNC_1(VAR_11))
 {
  if (!VAR_9)
   FUNC_5(VAR_2,
     (FUNC_6(VAR_0),
      FUNC_7("type \"%s\" does not exist",
       FUNC_4(VAR_8))));
  return VAR_10;
 }
 VAR_10.objectId = FUNC_8(VAR_11);

 if (VAR_7 == VAR_4)
 {
  if (((Form_pg_type) FUNC_0(VAR_11))->typtype != VAR_5)
   FUNC_5(VAR_2,
     (FUNC_6(VAR_1),
      FUNC_7("\"%s\" is not a domain",
       FUNC_4(VAR_8))));
 }

 FUNC_3(VAR_11);

 return VAR_10;
}
