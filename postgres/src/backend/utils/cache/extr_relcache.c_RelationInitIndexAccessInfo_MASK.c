
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_17__ {int values; } ;
typedef TYPE_3__ oidvector ;
struct TYPE_18__ {int values; } ;
typedef TYPE_4__ int2vector ;
typedef int int16 ;
struct TYPE_20__ {int amhandler; } ;
struct TYPE_19__ {int * rd_amcache; int * rd_exclstrats; int * rd_exclprocs; int * rd_exclops; void* rd_indpred; void* rd_indexprs; int * rd_indoption; int rd_indextuple; int * rd_opcintype; int * rd_opfamily; int * rd_support; int * rd_indcollation; int * rd_supportinfo; TYPE_2__* rd_indam; int rd_indexcxt; int rd_amhandler; TYPE_1__* rd_rel; scalar_t__ rd_index; } ;
struct TYPE_16__ {int amsupport; } ;
struct TYPE_15__ {int relam; } ;
typedef TYPE_5__* Relation ;
typedef int RegProcedure ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef scalar_t__ Form_pg_index ;
typedef TYPE_6__* Form_pg_am ;
typedef int FmgrInfo ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*,int *,int *,int *,int,int) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 void* VAR_8 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,char*,int ) ;
 int FUNC_20 (int ,int ,int ,int*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *,int ,int) ;

void
FUNC_23(Relation VAR_9)
{
 HeapTuple VAR_10;
 Form_pg_am VAR_11;
 Datum VAR_12;
 Datum VAR_13;
 Datum VAR_14;
 bool VAR_15;
 oidvector *VAR_16;
 oidvector *VAR_17;
 int2vector *VAR_18;
 MemoryContext VAR_19;
 MemoryContext VAR_20;
 int VAR_21;
 int VAR_22;
 uint16 VAR_23;






 VAR_10 = FUNC_18(VAR_7,
       FUNC_13(FUNC_16(VAR_9)));
 if (!FUNC_5(VAR_10))
  FUNC_19(VAR_6, "cache lookup failed for index %u",
    FUNC_16(VAR_9));
 VAR_20 = FUNC_12(VAR_5);
 VAR_9->rd_indextuple = FUNC_21(VAR_10);
 VAR_9->rd_index = (Form_pg_index) FUNC_3(VAR_9->rd_indextuple);
 FUNC_12(VAR_20);
 FUNC_17(VAR_10);




 VAR_10 = FUNC_18(VAR_1, FUNC_13(VAR_9->rd_rel->relam));
 if (!FUNC_5(VAR_10))
  FUNC_19(VAR_6, "cache lookup failed for access method %u",
    VAR_9->rd_rel->relam);
 VAR_11 = (Form_pg_am) FUNC_3(VAR_10);
 VAR_9->rd_amhandler = VAR_11->amhandler;
 FUNC_17(VAR_10);

 VAR_21 = FUNC_14(VAR_9);
 if (VAR_21 != FUNC_6(VAR_9))
  FUNC_19(VAR_6, "relnatts disagrees with indnatts for index %u",
    FUNC_16(VAR_9));
 VAR_22 = FUNC_7(VAR_9);






 VAR_19 = FUNC_0(VAR_5,
          "index info",
          VAR_0);
 VAR_9->rd_indexcxt = VAR_19;
 FUNC_11(VAR_19,
           FUNC_15(VAR_9));




 FUNC_9(VAR_9);





 VAR_9->rd_opfamily = (Oid *)
  FUNC_10(VAR_19, VAR_22 * sizeof(Oid));
 VAR_9->rd_opcintype = (Oid *)
  FUNC_10(VAR_19, VAR_22 * sizeof(Oid));

 VAR_23 = VAR_9->rd_indam->amsupport;
 if (VAR_23 > 0)
 {
  int VAR_24 = VAR_21 * VAR_23;

  VAR_9->rd_support = (RegProcedure *)
   FUNC_10(VAR_19, VAR_24 * sizeof(RegProcedure));
  VAR_9->rd_supportinfo = (FmgrInfo *)
   FUNC_10(VAR_19, VAR_24 * sizeof(FmgrInfo));
 }
 else
 {
  VAR_9->rd_support = ((void*)0);
  VAR_9->rd_supportinfo = ((void*)0);
 }

 VAR_9->rd_indcollation = (Oid *)
  FUNC_10(VAR_19, VAR_22 * sizeof(Oid));

 VAR_9->rd_indoption = (int16 *)
  FUNC_10(VAR_19, VAR_22 * sizeof(int16));






 VAR_12 = FUNC_20(VAR_9->rd_indextuple,
          VAR_3,
          FUNC_4(),
          &VAR_15);
 FUNC_1(!VAR_15);
 VAR_16 = (oidvector *) FUNC_2(VAR_12);
 FUNC_22(VAR_9->rd_indcollation, VAR_16->values, VAR_22 * sizeof(Oid));






 VAR_13 = FUNC_20(VAR_9->rd_indextuple,
        VAR_2,
        FUNC_4(),
        &VAR_15);
 FUNC_1(!VAR_15);
 VAR_17 = (oidvector *) FUNC_2(VAR_13);






 FUNC_8(VAR_17, VAR_9->rd_support,
         VAR_9->rd_opfamily, VAR_9->rd_opcintype,
         VAR_23, VAR_22);




 VAR_14 = FUNC_20(VAR_9->rd_indextuple,
         VAR_4,
         FUNC_4(),
         &VAR_15);
 FUNC_1(!VAR_15);
 VAR_18 = (int2vector *) FUNC_2(VAR_14);
 FUNC_22(VAR_9->rd_indoption, VAR_18->values, VAR_22 * sizeof(int16));




 VAR_9->rd_indexprs = VAR_8;
 VAR_9->rd_indpred = VAR_8;
 VAR_9->rd_exclops = ((void*)0);
 VAR_9->rd_exclprocs = ((void*)0);
 VAR_9->rd_exclstrats = ((void*)0);
 VAR_9->rd_amcache = ((void*)0);
}
