
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ relisshared; int oid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(HeapTuple VAR_2)
{
 Form_pg_class VAR_3 = (Form_pg_class) FUNC_0(VAR_2);
 Oid VAR_4;
 Oid VAR_5;

 FUNC_1();

 VAR_5 = VAR_3->oid;
 if (VAR_3->relisshared)
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;
 FUNC_2(VAR_4, VAR_5);
}
