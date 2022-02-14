
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tempfilename ;
typedef int magic ;
typedef int int16 ;
typedef int finalfilename ;
struct TYPE_11__ {TYPE_2__* reldesc; } ;
struct TYPE_10__ {int relisshared; int relnatts; scalar_t__ relkind; int t_len; struct TYPE_10__* rd_indoption; struct TYPE_10__* rd_indcollation; TYPE_1__* rd_indam; struct TYPE_10__* rd_support; struct TYPE_10__* rd_opcintype; struct TYPE_10__* rd_opfamily; struct TYPE_10__* rd_indextuple; struct TYPE_10__* rd_rel; struct TYPE_10__* rd_options; int rd_att; int rd_isnailed; } ;
struct TYPE_9__ {int amsupport; } ;
typedef int RelationData ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ RelIdCacheEnt ;
typedef int RegProcedure ;
typedef int Oid ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_2__* Form_pg_class ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int*,int,int,int *) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 long VAR_15 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,int,char*,char*,...) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (TYPE_2__*,int,int *) ;

__attribute__((used)) static void
FUNC_22(bool VAR_16)
{
 FILE *VAR_17;
 char VAR_18[VAR_6];
 char VAR_19[VAR_6];
 int VAR_20;
 HASH_SEQ_STATUS VAR_21;
 RelIdCacheEnt *VAR_22;
 int VAR_23;





 if (VAR_15 != 0L)
  return;






 if (VAR_16)
 {
  FUNC_19(VAR_18, sizeof(VAR_18), "global/%s.%d",
     VAR_10, VAR_7);
  FUNC_19(VAR_19, sizeof(VAR_19), "global/%s",
     VAR_10);
 }
 else
 {
  FUNC_19(VAR_18, sizeof(VAR_18), "%s/%s.%d",
     VAR_2, VAR_10, VAR_7);
  FUNC_19(VAR_19, sizeof(VAR_19), "%s/%s",
     VAR_2, VAR_10);
 }

 FUNC_20(VAR_18);

 VAR_17 = FUNC_1(VAR_18, VAR_8);
 if (VAR_17 == ((void*)0))
 {




  FUNC_11(VAR_14,
    (FUNC_12(),
     FUNC_14("could not create relation-cache initialization file \"%s\": %m",
      VAR_18),
     FUNC_13("Continuing anyway, but there's something wrong.")));
  return;
 }





 VAR_20 = VAR_9;
 if (FUNC_15(&VAR_20, 1, sizeof(VAR_20), VAR_17) != sizeof(VAR_20))
  FUNC_10(VAR_3, "could not write init file");




 FUNC_16(&VAR_21, VAR_13);

 while ((VAR_22 = (RelIdCacheEnt *) FUNC_17(&VAR_21)) != ((void*)0))
 {
  Relation VAR_24 = VAR_22->reldesc;
  Form_pg_class VAR_25 = VAR_24->rd_rel;


  if (VAR_25->relisshared != VAR_16)
   continue;
  if (!VAR_16 && !FUNC_7(FUNC_6(VAR_24)))
  {

   FUNC_2(!VAR_24->rd_isnailed);
   continue;
  }


  FUNC_21(VAR_24, sizeof(RelationData), VAR_17);


  FUNC_21(VAR_25, VAR_1, VAR_17);


  for (VAR_23 = 0; VAR_23 < VAR_25->relnatts; VAR_23++)
  {
   FUNC_21(FUNC_8(VAR_24->rd_att, VAR_23),
        VAR_0, VAR_17);
  }


  FUNC_21(VAR_24->rd_options,
       (VAR_24->rd_options ? FUNC_9(VAR_24->rd_options) : 0),
       VAR_17);





  if (VAR_24->rd_rel->relkind == VAR_11)
  {


   FUNC_21(VAR_24->rd_indextuple,
        VAR_4 + VAR_24->rd_indextuple->t_len,
        VAR_17);


   FUNC_21(VAR_24->rd_opfamily,
        VAR_25->relnatts * sizeof(Oid),
        VAR_17);


   FUNC_21(VAR_24->rd_opcintype,
        VAR_25->relnatts * sizeof(Oid),
        VAR_17);


   FUNC_21(VAR_24->rd_support,
        VAR_25->relnatts * (VAR_24->rd_indam->amsupport * sizeof(RegProcedure)),
        VAR_17);


   FUNC_21(VAR_24->rd_indcollation,
        VAR_25->relnatts * sizeof(Oid),
        VAR_17);


   FUNC_21(VAR_24->rd_indoption,
        VAR_25->relnatts * sizeof(int16),
        VAR_17);
  }
 }

 if (FUNC_3(VAR_17))
  FUNC_10(VAR_3, "could not write init file");
 FUNC_4(VAR_12, VAR_5);


 FUNC_0();





 if (VAR_15 == 0L)
 {
  if (FUNC_18(VAR_18, VAR_19) < 0)
   FUNC_20(VAR_18);
 }
 else
 {

  FUNC_20(VAR_18);
 }

 FUNC_5(VAR_12);
}
