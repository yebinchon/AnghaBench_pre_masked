
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int security_context_t ;
struct TYPE_4__ {int classId; int objectId; int objectSubId; } ;
typedef TYPE_1__ ObjectAddress ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 char const* FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char const*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,char const*) ;

void
FUNC_10(const ObjectAddress *VAR_3, const char *VAR_4)
{




 if (VAR_4 &&
  FUNC_4((security_context_t) VAR_4) < 0)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("SELinux: invalid security label: \"%s\"", VAR_4)));




 switch (VAR_3->classId)
 {
  case 131:
   FUNC_6(VAR_3->objectId, VAR_4);
   break;

  case 130:
   FUNC_9(VAR_3->objectId, VAR_4);
   break;

  case 128:
   if (VAR_3->objectSubId == 0)
    FUNC_8(VAR_3->objectId,
           VAR_4);
   else
    FUNC_5(VAR_3->objectId,
            VAR_3->objectSubId,
            VAR_4);
   break;

  case 129:
   FUNC_7(VAR_3->objectId, VAR_4);
   break;

  default:
   FUNC_0(VAR_2,
     (FUNC_1(VAR_0),
      FUNC_2("sepgsql provider does not support labels on %s",
       FUNC_3(VAR_3))));
   break;
 }
}
