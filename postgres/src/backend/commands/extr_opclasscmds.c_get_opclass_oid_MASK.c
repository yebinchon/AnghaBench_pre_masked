
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_opclass ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ) ;

Oid
FUNC_4(Oid VAR_1, List *VAR_2, bool VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_opclass VAR_5;
 Oid VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!FUNC_1(VAR_4))
  return VAR_0;
 VAR_5 = (Form_pg_opclass) FUNC_0(VAR_4);
 VAR_6 = VAR_5->oid;
 FUNC_3(VAR_4);

 return VAR_6;
}
