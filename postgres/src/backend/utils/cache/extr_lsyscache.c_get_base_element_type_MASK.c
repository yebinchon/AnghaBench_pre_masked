
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ typtype; int typlen; int typbasetype; int typelem; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

Oid
FUNC_5(Oid VAR_3)
{



 for (;;)
 {
  HeapTuple VAR_4;
  Form_pg_type VAR_5;

  VAR_4 = FUNC_4(VAR_1, FUNC_2(VAR_3));
  if (!FUNC_1(VAR_4))
   break;
  VAR_5 = (Form_pg_type) FUNC_0(VAR_4);
  if (VAR_5->typtype != VAR_2)
  {

   Oid VAR_6;


   if (VAR_5->typlen == -1)
    VAR_6 = VAR_5->typelem;
   else
    VAR_6 = VAR_0;
   FUNC_3(VAR_4);
   return VAR_6;
  }

  VAR_3 = VAR_5->typbasetype;
  FUNC_3(VAR_4);
 }


 return VAR_0;
}
