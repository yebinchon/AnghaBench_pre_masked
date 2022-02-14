
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rolreplication; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

bool
FUNC_5(Oid VAR_1)
{
 bool VAR_2 = 0;
 HeapTuple VAR_3;

 VAR_3 = FUNC_4(VAR_0, FUNC_2(VAR_1));
 if (FUNC_1(VAR_3))
 {
  VAR_2 = ((Form_pg_authid) FUNC_0(VAR_3))->rolreplication;
  FUNC_3(VAR_3);
 }
 return VAR_2;
}
