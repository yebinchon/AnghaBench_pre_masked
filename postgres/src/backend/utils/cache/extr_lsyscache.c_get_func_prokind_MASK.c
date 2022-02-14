
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char prokind; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;

char
FUNC_6(Oid VAR_2)
{
 HeapTuple VAR_3;
 char VAR_4;

 VAR_3 = FUNC_4(VAR_1, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_3))
  FUNC_5(VAR_0, "cache lookup failed for function %u", VAR_2);

 VAR_4 = ((Form_pg_proc) FUNC_0(VAR_3))->prokind;
 FUNC_3(VAR_3);
 return VAR_4;
}
