
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_2__ {int conrelid; int oid; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_6(HeapTuple VAR_3, TupleDesc VAR_4)
{
 Form_pg_constraint VAR_5;
 bool VAR_6;
 Datum VAR_7;
 Datum VAR_8;

 VAR_5 = (Form_pg_constraint) FUNC_1(VAR_3);
 VAR_7 = FUNC_5(VAR_3, VAR_0, VAR_4, &VAR_6);
 if (VAR_6)
  FUNC_4(VAR_1, "null conbin for constraint %u", VAR_5->oid);

 VAR_8 = FUNC_0(VAR_2, VAR_7,
          FUNC_2(VAR_5->conrelid));
 return FUNC_3(VAR_8);
}
