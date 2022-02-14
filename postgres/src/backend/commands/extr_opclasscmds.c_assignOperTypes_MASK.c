
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char oprkind; scalar_t__ oprresult; int oprright; int oprleft; } ;
struct TYPE_7__ {int amcanorderbyop; } ;
struct TYPE_6__ {int righttype; int lefttype; int sortfamily; int object; } ;
typedef int Operator ;
typedef TYPE_1__ OpFamilyMember ;
typedef int Oid ;
typedef TYPE_2__ IndexAmRoutine ;
typedef TYPE_3__* Form_pg_operator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(OpFamilyMember *VAR_4, Oid VAR_5, Oid VAR_6)
{
 Operator VAR_7;
 Form_pg_operator VAR_8;


 VAR_7 = FUNC_6(VAR_3, FUNC_3(VAR_4->object));
 if (!FUNC_2(VAR_7))
  FUNC_7(VAR_2, "cache lookup failed for operator %u", VAR_4->object);
 VAR_8 = (Form_pg_operator) FUNC_0(VAR_7);




 if (VAR_8->oprkind != 'b')
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("index operators must be binary")));

 if (FUNC_4(VAR_4->sortfamily))
 {
  IndexAmRoutine *VAR_9 = FUNC_1(VAR_5, 0);

  if (!VAR_9->amcanorderbyop)
   FUNC_8(VAR_2,
     (FUNC_9(VAR_1),
      FUNC_10("access method \"%s\" does not support ordering operators",
       FUNC_11(VAR_5))));
 }
 else
 {



  if (VAR_8->oprresult != VAR_0)
   FUNC_8(VAR_2,
     (FUNC_9(VAR_1),
      FUNC_10("index search operators must return boolean")));
 }




 if (!FUNC_4(VAR_4->lefttype))
  VAR_4->lefttype = VAR_8->oprleft;
 if (!FUNC_4(VAR_4->righttype))
  VAR_4->righttype = VAR_8->oprright;

 FUNC_5(VAR_7);
}
