
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prosupport; } ;
typedef int RegProcedure ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

RegProcedure
FUNC_5(Oid VAR_2)
{
 HeapTuple VAR_3;

 VAR_3 = FUNC_4(VAR_1, FUNC_2(VAR_2));
 if (FUNC_1(VAR_3))
 {
  Form_pg_proc VAR_4 = (Form_pg_proc) FUNC_0(VAR_3);
  RegProcedure VAR_5;

  VAR_5 = VAR_4->prosupport;
  FUNC_3(VAR_3);
  return VAR_5;
 }
 else
  return (RegProcedure) VAR_0;
}
