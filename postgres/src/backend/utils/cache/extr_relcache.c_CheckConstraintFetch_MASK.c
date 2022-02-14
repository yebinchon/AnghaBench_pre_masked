
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* constr; } ;
struct TYPE_16__ {void* ccbin; void* ccname; int ccnoinherit; int ccvalid; } ;
struct TYPE_15__ {scalar_t__ contype; int conname; int connoinherit; int convalidated; } ;
struct TYPE_14__ {TYPE_9__* rd_att; } ;
struct TYPE_13__ {int num_check; TYPE_4__* check; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;
typedef int Datum ;
typedef TYPE_4__ ConstrCheck ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,...) ;
 int FUNC_10 (int ,int ,TYPE_9__*,int*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,int,int,int ) ;
 int FUNC_13 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18(Relation VAR_11)
{
 ConstrCheck *VAR_12 = VAR_11->rd_att->constr->check;
 int VAR_13 = VAR_11->rd_att->constr->num_check;
 Relation VAR_14;
 SysScanDesc VAR_15;
 ScanKeyData VAR_16[1];
 HeapTuple VAR_17;
 int VAR_18 = 0;

 FUNC_7(&VAR_16[0],
    VAR_2,
    VAR_3, VAR_10,
    FUNC_4(FUNC_6(VAR_11)));

 VAR_14 = FUNC_17(VAR_7, VAR_0);
 VAR_15 = FUNC_13(VAR_14, VAR_8, 1,
         ((void*)0), 1, VAR_16);

 while (FUNC_1(VAR_17 = FUNC_15(VAR_15)))
 {
  Form_pg_constraint VAR_19 = (Form_pg_constraint) FUNC_0(VAR_17);
  Datum VAR_20;
  bool VAR_21;
  char *VAR_22;


  if (VAR_19->contype != VAR_4)
   continue;

  if (VAR_18 >= VAR_13)
   FUNC_9(VAR_9, "unexpected constraint record found for rel %s",
     FUNC_5(VAR_11));

  VAR_12[VAR_18].ccvalid = VAR_19->convalidated;
  VAR_12[VAR_18].ccnoinherit = VAR_19->connoinherit;
  VAR_12[VAR_18].ccname = FUNC_2(VAR_5,
              FUNC_3(VAR_19->conname));


  VAR_20 = FUNC_10(VAR_17,
        VAR_1,
        VAR_14->rd_att, &VAR_21);
  if (VAR_21)
   FUNC_9(VAR_9, "null conbin for rel %s",
     FUNC_5(VAR_11));


  VAR_22 = FUNC_8(VAR_20);
  VAR_12[VAR_18].ccbin = FUNC_2(VAR_5, VAR_22);
  FUNC_11(VAR_22);

  VAR_18++;
 }

 FUNC_14(VAR_15);
 FUNC_16(VAR_14, VAR_0);

 if (VAR_18 != VAR_13)
  FUNC_9(VAR_9, "%d constraint record(s) missing for rel %s",
    VAR_13 - VAR_18, FUNC_5(VAR_11));


 if (VAR_13 > 1)
  FUNC_12(VAR_12, VAR_13, sizeof(ConstrCheck), VAR_6);
}
