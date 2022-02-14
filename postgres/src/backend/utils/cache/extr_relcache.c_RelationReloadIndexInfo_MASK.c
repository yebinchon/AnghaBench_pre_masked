
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ relkind; scalar_t__ relisshared; } ;
struct TYPE_24__ {int indislive; int indisready; int indcheckxmin; int indisvalid; int indisclustered; int indimmediate; int indisexclusion; int indisprimary; int indisunique; } ;
struct TYPE_23__ {int t_data; } ;
struct TYPE_22__ {int rd_isvalid; TYPE_2__* rd_indextuple; TYPE_1__* rd_index; int * rd_options; TYPE_6__* rd_rel; int * rd_amcache; } ;
struct TYPE_21__ {int t_data; } ;
struct TYPE_20__ {int indislive; int indisready; int indcheckxmin; int indisvalid; int indisclustered; int indimmediate; int indisexclusion; int indisprimary; int indisunique; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_index ;
typedef scalar_t__ Form_pg_class ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_4__* FUNC_12 (scalar_t__,int,int) ;
 TYPE_4__* FUNC_13 (int ,int ) ;
 int VAR_6 ;
 int FUNC_14 (int ,char*,scalar_t__) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_6__*,scalar_t__,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(Relation VAR_7)
{
 bool VAR_8;
 HeapTuple VAR_9;
 Form_pg_class VAR_10;


 FUNC_0((VAR_7->rd_rel->relkind == VAR_4 ||
   VAR_7->rd_rel->relkind == VAR_5) &&
     !VAR_7->rd_isvalid);


 FUNC_7(VAR_7);


 if (VAR_7->rd_amcache)
  FUNC_17(VAR_7->rd_amcache);
 VAR_7->rd_amcache = ((void*)0);
 if (VAR_7->rd_rel->relisshared && !VAR_6)
 {
  VAR_7->rd_isvalid = 1;
  return;
 }







 VAR_8 = (FUNC_8(VAR_7) != VAR_1);
 VAR_9 = FUNC_12(FUNC_8(VAR_7), VAR_8, 0);
 if (!FUNC_4(VAR_9))
  FUNC_14(VAR_2, "could not find pg_class tuple for index %u",
    FUNC_8(VAR_7));
 VAR_10 = (Form_pg_class) FUNC_1(VAR_9);
 FUNC_16(VAR_7->rd_rel, VAR_10, VAR_0);

 if (VAR_7->rd_options)
  FUNC_17(VAR_7->rd_options);
 FUNC_10(VAR_7, VAR_9);

 FUNC_15(VAR_9);

 FUNC_9(VAR_7);
 if (!FUNC_5(VAR_7))
 {
  HeapTuple VAR_11;
  Form_pg_index VAR_12;

  VAR_11 = FUNC_13(VAR_3,
        FUNC_6(FUNC_8(VAR_7)));
  if (!FUNC_4(VAR_11))
   FUNC_14(VAR_2, "cache lookup failed for index %u",
     FUNC_8(VAR_7));
  VAR_12 = (Form_pg_index) FUNC_1(VAR_11);







  VAR_7->rd_index->indisunique = VAR_12->indisunique;
  VAR_7->rd_index->indisprimary = VAR_12->indisprimary;
  VAR_7->rd_index->indisexclusion = VAR_12->indisexclusion;
  VAR_7->rd_index->indimmediate = VAR_12->indimmediate;
  VAR_7->rd_index->indisclustered = VAR_12->indisclustered;
  VAR_7->rd_index->indisvalid = VAR_12->indisvalid;
  VAR_7->rd_index->indcheckxmin = VAR_12->indcheckxmin;
  VAR_7->rd_index->indisready = VAR_12->indisready;
  VAR_7->rd_index->indislive = VAR_12->indislive;


  FUNC_3(VAR_7->rd_indextuple->t_data,
          FUNC_2(VAR_11->t_data));

  FUNC_11(VAR_11);
 }


 VAR_7->rd_isvalid = 1;
}
