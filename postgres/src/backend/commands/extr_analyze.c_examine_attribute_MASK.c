
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ attstattarget; int tupattnum; scalar_t__ minrows; struct TYPE_13__* attr; int * compute_stats; TYPE_3__* attrtype; int * statypalign; int * statypbyval; int * statyplen; int attrtypid; int * statypid; int anl_context; int attcollation; int attrcollid; int atttypmod; int attrtypmod; int atttypid; scalar_t__ attisdropped; } ;
typedef TYPE_1__ VacAttrStats ;
struct TYPE_15__ {int typanalyze; int typalign; int typbyval; int typlen; } ;
struct TYPE_14__ {int * rd_indcollation; int rd_att; } ;
typedef TYPE_2__* Relation ;
typedef int Node ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_type ;
typedef TYPE_1__* Form_pg_attribute ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_8 (int ,int) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static VacAttrStats *
FUNC_19(Relation VAR_5, int VAR_6, Node *VAR_7)
{
 Form_pg_attribute VAR_8 = FUNC_8(VAR_5->rd_att, VAR_6 - 1);
 HeapTuple VAR_9;
 VacAttrStats *VAR_10;
 int VAR_11;
 bool VAR_12;


 if (VAR_8->attisdropped)
  return ((void*)0);


 if (VAR_8->attstattarget == 0)
  return ((void*)0);





 VAR_10 = (VacAttrStats *) FUNC_16(sizeof(VacAttrStats));
 VAR_10->attr = (Form_pg_attribute) FUNC_15(VAR_0);
 FUNC_14(VAR_10->attr, VAR_8, VAR_0);
 if (VAR_7)
 {
  VAR_10->attrtypid = FUNC_11(VAR_7);
  VAR_10->attrtypmod = FUNC_12(VAR_7);






  if (FUNC_5(VAR_5->rd_indcollation[VAR_6 - 1]))
   VAR_10->attrcollid = VAR_5->rd_indcollation[VAR_6 - 1];
  else
   VAR_10->attrcollid = FUNC_10(VAR_7);
 }
 else
 {
  VAR_10->attrtypid = VAR_8->atttypid;
  VAR_10->attrtypmod = VAR_8->atttypmod;
  VAR_10->attrcollid = VAR_8->attcollation;
 }

 VAR_9 = FUNC_7(VAR_3,
           FUNC_3(VAR_10->attrtypid));
 if (!FUNC_2(VAR_9))
  FUNC_9(VAR_1, "cache lookup failed for type %u", VAR_10->attrtypid);
 VAR_10->attrtype = (Form_pg_type) FUNC_1(VAR_9);
 VAR_10->anl_context = VAR_4;
 VAR_10->tupattnum = VAR_6;






 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
 {
  VAR_10->statypid[VAR_11] = VAR_10->attrtypid;
  VAR_10->statyplen[VAR_11] = VAR_10->attrtype->typlen;
  VAR_10->statypbyval[VAR_11] = VAR_10->attrtype->typbyval;
  VAR_10->statypalign[VAR_11] = VAR_10->attrtype->typalign;
 }





 if (FUNC_5(VAR_10->attrtype->typanalyze))
  VAR_12 = FUNC_0(FUNC_4(VAR_10->attrtype->typanalyze,
             FUNC_6(VAR_10)));
 else
  VAR_12 = FUNC_18(VAR_10);

 if (!VAR_12 || VAR_10->compute_stats == ((void*)0) || VAR_10->minrows <= 0)
 {
  FUNC_13(VAR_9);
  FUNC_17(VAR_10->attr);
  FUNC_17(VAR_10);
  return ((void*)0);
 }

 return VAR_10;
}
