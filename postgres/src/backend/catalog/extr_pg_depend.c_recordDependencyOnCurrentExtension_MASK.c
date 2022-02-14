
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ objectSubId; scalar_t__ objectId; int classId; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ObjectAddress ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_1__*,int ) ;

void
FUNC_9(const ObjectAddress *VAR_6,
           bool VAR_7)
{

 FUNC_0(VAR_6->objectSubId == 0);

 if (VAR_5)
 {
  ObjectAddress VAR_8;


  if (VAR_7)
  {
   Oid VAR_9;

   VAR_9 = FUNC_5(VAR_6->classId, VAR_6->objectId);
   if (FUNC_1(VAR_9))
   {

    if (VAR_9 == VAR_0)
     return;

    FUNC_2(VAR_3,
      (FUNC_3(VAR_2),
       FUNC_4("%s is already a member of extension \"%s\"",
        FUNC_6(VAR_6),
        FUNC_7(VAR_9))));
   }
  }


  VAR_8.classId = VAR_4;
  VAR_8.objectId = VAR_0;
  VAR_8.objectSubId = 0;

  FUNC_8(VAR_6, &VAR_8, VAR_1);
 }
}
