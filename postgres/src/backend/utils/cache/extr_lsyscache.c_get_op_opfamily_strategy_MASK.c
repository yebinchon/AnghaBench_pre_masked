
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int amopstrategy; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_amop ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

int
FUNC_6(Oid VAR_2, Oid VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_amop VAR_5;
 int VAR_6;

 VAR_4 = FUNC_5(VAR_0,
       FUNC_3(VAR_2),
       FUNC_0(VAR_1),
       FUNC_3(VAR_3));
 if (!FUNC_2(VAR_4))
  return 0;
 VAR_5 = (Form_pg_amop) FUNC_1(VAR_4);
 VAR_6 = VAR_5->amopstrategy;
 FUNC_4(VAR_4);
 return VAR_6;
}
