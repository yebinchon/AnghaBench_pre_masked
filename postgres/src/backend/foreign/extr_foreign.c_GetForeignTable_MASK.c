
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int options; int serverid; int relid; } ;
struct TYPE_4__ {int ftserver; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_foreign_table ;
typedef TYPE_2__ ForeignTable ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;

ForeignTable *
FUNC_9(Oid VAR_4)
{
 Form_pg_foreign_table VAR_5;
 ForeignTable *VAR_6;
 HeapTuple VAR_7;
 Datum VAR_8;
 bool VAR_9;

 VAR_7 = FUNC_4(VAR_2, FUNC_2(VAR_4));
 if (!FUNC_1(VAR_7))
  FUNC_6(VAR_1, "cache lookup failed for foreign table %u", VAR_4);
 VAR_5 = (Form_pg_foreign_table) FUNC_0(VAR_7);

 VAR_6 = (ForeignTable *) FUNC_7(sizeof(ForeignTable));
 VAR_6->relid = VAR_4;
 VAR_6->serverid = VAR_5->ftserver;


 VAR_8 = FUNC_5(VAR_2,
       VAR_7,
       VAR_0,
       &VAR_9);
 if (VAR_9)
  VAR_6->options = VAR_3;
 else
  VAR_6->options = FUNC_8(VAR_8);

 FUNC_3(VAR_7);

 return VAR_6;
}
