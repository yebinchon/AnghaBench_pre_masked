
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char attgenerated; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;

char
FUNC_7(Oid VAR_2, AttrNumber VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_attribute VAR_5;
 char VAR_6;

 VAR_4 = FUNC_5(VAR_0,
       FUNC_3(VAR_2),
       FUNC_2(VAR_3));
 if (!FUNC_1(VAR_4))
  FUNC_6(VAR_1, "cache lookup failed for attribute %d of relation %u",
    VAR_3, VAR_2);
 VAR_5 = (Form_pg_attribute) FUNC_0(VAR_4);
 VAR_6 = VAR_5->attgenerated;
 FUNC_4(VAR_4);
 return VAR_6;
}
