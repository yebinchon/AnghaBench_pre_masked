
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dim1; int * values; } ;
struct TYPE_8__ {TYPE_1__ stxkeys; int stxstattarget; int stxname; int stxnamespace; int oid; } ;
struct TYPE_7__ {int types; int columns; int stattarget; int name; int schema; int statOid; } ;
typedef int SysScanDesc ;
typedef TYPE_2__ StatExtEntry ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_statistic_ext ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * VAR_6 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_12 (int ,int ,int ,int*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int ,int) ;
 TYPE_2__* FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ,int,int *,int,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static List *
FUNC_23(Relation VAR_12, Oid VAR_13)
{
 SysScanDesc VAR_14;
 ScanKeyData VAR_15;
 HeapTuple VAR_16;
 List *VAR_17 = VAR_6;





 FUNC_11(&VAR_15,
    VAR_1,
    VAR_2, VAR_5,
    FUNC_10(VAR_13));

 VAR_14 = FUNC_20(VAR_12, VAR_11, 1,
         ((void*)0), 1, &VAR_15);

 while (FUNC_8(VAR_16 = FUNC_22(VAR_14)))
 {
  StatExtEntry *VAR_18;
  Datum VAR_19;
  bool VAR_20;
  int VAR_21;
  ArrayType *VAR_22;
  char *VAR_23;
  Form_pg_statistic_ext VAR_24;

  VAR_18 = FUNC_18(sizeof(StatExtEntry));
  VAR_24 = (Form_pg_statistic_ext) FUNC_7(VAR_16);
  VAR_18->statOid = VAR_24->oid;
  VAR_18->schema = FUNC_15(VAR_24->stxnamespace);
  VAR_18->name = FUNC_19(FUNC_9(VAR_24->stxname));
  VAR_18->stattarget = VAR_24->stxstattarget;
  for (VAR_21 = 0; VAR_21 < VAR_24->stxkeys.dim1; VAR_21++)
  {
   VAR_18->columns = FUNC_13(VAR_18->columns,
           VAR_24->stxkeys.values[VAR_21]);
  }


  VAR_19 = FUNC_12(VAR_7, VAR_16,
        VAR_0, &VAR_20);
  FUNC_5(!VAR_20);
  VAR_22 = FUNC_6(VAR_19);
  if (FUNC_4(VAR_22) != 1 ||
   FUNC_3(VAR_22) ||
   FUNC_2(VAR_22) != VAR_3)
   FUNC_14(VAR_4, "stxkind is not a 1-D char array");
  VAR_23 = (char *) FUNC_0(VAR_22);
  for (VAR_21 = 0; VAR_21 < FUNC_1(VAR_22)[0]; VAR_21++)
  {
   FUNC_5((VAR_23[VAR_21] == VAR_10) ||
       (VAR_23[VAR_21] == VAR_8) ||
       (VAR_23[VAR_21] == VAR_9));
   VAR_18->types = FUNC_17(VAR_18->types, (int) VAR_23[VAR_21]);
  }

  VAR_17 = FUNC_16(VAR_17, VAR_18);
 }

 FUNC_21(VAR_14);

 return VAR_17;
}
