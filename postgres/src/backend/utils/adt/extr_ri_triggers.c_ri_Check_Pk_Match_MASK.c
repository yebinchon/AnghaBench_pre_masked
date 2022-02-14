
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_26__ {int nkeys; int * pp_eq_oprs; int * pk_attnums; } ;
struct TYPE_25__ {TYPE_1__* rd_rel; } ;
struct TYPE_24__ {int data; } ;
struct TYPE_23__ {scalar_t__ relkind; } ;
typedef TYPE_2__ StringInfoData ;
typedef int * SPIPlanPtr ;
typedef TYPE_3__* Relation ;
typedef int RI_QueryKey ;
typedef TYPE_4__ RI_ConstraintInfo ;
typedef int Oid ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,char*,char const*,char*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,TYPE_3__*) ;
 int FUNC_12 (int *,TYPE_4__ const*,int ) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,char const*,char*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_15 (int ,int *,TYPE_4__ const*,int) ;
 int FUNC_16 (TYPE_4__ const*,int *,int *,TYPE_3__*,TYPE_3__*,int *,int *,int,int ) ;
 int * FUNC_17 (int ,int,int *,int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_18 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_19(Relation VAR_10, Relation VAR_11,
      TupleTableSlot *VAR_12,
      const RI_ConstraintInfo *VAR_13)
{
 SPIPlanPtr VAR_14;
 RI_QueryKey VAR_15;
 bool VAR_16;


 FUNC_0(FUNC_15(FUNC_3(VAR_10), VAR_12, VAR_13, 1) == VAR_4);

 if (FUNC_4() != VAR_7)
  FUNC_8(VAR_0, "SPI_connect failed");





 FUNC_12(&VAR_15, VAR_13, VAR_6);

 if ((VAR_14 = FUNC_13(&VAR_15)) == ((void*)0))
 {
  StringInfoData VAR_17;
  char VAR_18[VAR_2];
  char VAR_19[VAR_1];
  char VAR_20[16];
  const char *VAR_21;
  const char *VAR_22;
  Oid VAR_23[VAR_5];
  FUNC_9(&VAR_17);
  VAR_22 = VAR_10->rd_rel->relkind == VAR_3 ?
   "" : "ONLY ";
  FUNC_11(VAR_18, VAR_10);
  FUNC_6(&VAR_17, "SELECT 1 FROM %s%s x",
       VAR_22, VAR_18);
  VAR_21 = "WHERE";
  for (int VAR_24 = 0; VAR_24 < VAR_13->nkeys; VAR_24++)
  {
   Oid VAR_25 = FUNC_2(VAR_10, VAR_13->pk_attnums[VAR_24]);

   FUNC_10(VAR_19,
       FUNC_1(VAR_10, VAR_13->pk_attnums[VAR_24]));
   FUNC_18(VAR_20, "$%d", VAR_24 + 1);
   FUNC_14(&VAR_17, VAR_21,
       VAR_19, VAR_25,
       VAR_13->pp_eq_oprs[VAR_24],
       VAR_20, VAR_25);
   VAR_21 = "AND";
   VAR_23[VAR_24] = VAR_25;
  }
  FUNC_7(&VAR_17, " FOR KEY SHARE OF x");


  VAR_14 = FUNC_17(VAR_17.data, VAR_13->nkeys, VAR_23,
        &VAR_15, VAR_11, VAR_10);
 }




 VAR_16 = FUNC_16(VAR_13, &VAR_15, VAR_14,
        VAR_11, VAR_10,
        VAR_12, ((void*)0),
        1,
        VAR_9);

 if (FUNC_5() != VAR_8)
  FUNC_8(VAR_0, "SPI_finish failed");

 return VAR_16;
}
