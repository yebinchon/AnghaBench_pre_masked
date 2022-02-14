
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int amopsortfamily; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_amop ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

Oid
FUNC_6(Oid VAR_3, Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_amop VAR_6;
 Oid VAR_7;

 VAR_5 = FUNC_5(VAR_0,
       FUNC_3(VAR_3),
       FUNC_0(VAR_1),
       FUNC_3(VAR_4));
 if (!FUNC_2(VAR_5))
  return VAR_2;
 VAR_6 = (Form_pg_amop) FUNC_1(VAR_5);
 VAR_7 = VAR_6->amopsortfamily;
 FUNC_4(VAR_5);
 return VAR_7;
}
