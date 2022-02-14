
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_2__ {scalar_t__ typtype; int typtypmod; int typbasetype; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,char*,int ) ;

Oid
FUNC_7(Oid VAR_3, int32 *VAR_4)
{



 for (;;)
 {
  HeapTuple VAR_5;
  Form_pg_type VAR_6;

  VAR_5 = FUNC_5(VAR_1, FUNC_3(VAR_3));
  if (!FUNC_2(VAR_5))
   FUNC_6(VAR_0, "cache lookup failed for type %u", VAR_3);
  VAR_6 = (Form_pg_type) FUNC_1(VAR_5);
  if (VAR_6->typtype != VAR_2)
  {

   FUNC_4(VAR_5);
   break;
  }

  FUNC_0(*VAR_4 == -1);
  VAR_3 = VAR_6->typbasetype;
  *VAR_4 = VAR_6->typtypmod;

  FUNC_4(VAR_5);
 }

 return VAR_3;
}
