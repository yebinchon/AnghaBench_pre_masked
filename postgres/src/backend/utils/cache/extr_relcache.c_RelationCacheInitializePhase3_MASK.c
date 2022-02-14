
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ reltype; } ;
struct TYPE_20__ {TYPE_3__* reldesc; } ;
struct TYPE_19__ {int * rd_tableam; TYPE_2__* rd_rel; int * rd_partdesc; int * rd_partkey; int * rd_rsdesc; int * trigdesc; int * rd_rules; TYPE_1__* rd_att; scalar_t__ rd_options; } ;
struct TYPE_18__ {scalar_t__ relowner; int relhasrules; int relhastriggers; scalar_t__ relkind; scalar_t__ relrowsecurity; } ;
struct TYPE_17__ {scalar_t__ tdtypeid; int tdtypmod; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ RelIdCacheEnt ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_5__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 () ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int VAR_38 ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_3__*,int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_19 (int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_20 (int ,int ) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (char*,int ,int,int ,int ) ;
 int FUNC_23 (int *,int ) ;
 scalar_t__ FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (char*,char*,int ) ;
 int FUNC_29 (scalar_t__) ;
 int FUNC_30 (int) ;

void
FUNC_31(void)
{
 HASH_SEQ_STATUS VAR_50;
 RelIdCacheEnt *VAR_51;
 MemoryContext VAR_52;
 bool VAR_53 = !VAR_49;




 FUNC_17();




 VAR_52 = FUNC_5(VAR_11);






 if (FUNC_4() ||
  !FUNC_27(0))
 {
  VAR_53 = 1;

  FUNC_22("pg_class", VAR_40, 0,
      VAR_26, VAR_17);
  FUNC_22("pg_attribute", VAR_3, 0,
      VAR_25, VAR_16);
  FUNC_22("pg_proc", VAR_31, 0,
      VAR_27, VAR_18);
  FUNC_22("pg_type", VAR_47, 0,
      VAR_28, VAR_19);


 }

 FUNC_5(VAR_52);


 if (FUNC_4())
  return;
 if (!VAR_48)
 {
  FUNC_26(VAR_12,
       VAR_39);
  FUNC_26(VAR_4,
       VAR_2);
  FUNC_26(VAR_23,
       VAR_22);
  FUNC_26(VAR_29,
       VAR_30);
  FUNC_26(VAR_0,
       VAR_1);
  FUNC_26(VAR_41,
       VAR_42);
  FUNC_26(VAR_46,
       VAR_45);



  VAR_48 = 1;
 }
 if (!VAR_49)
 {
  FUNC_26(VAR_13,
       VAR_15);
  FUNC_26(VAR_14,
       VAR_15);
  FUNC_26(VAR_7,
       VAR_6);
  FUNC_26(VAR_5,
       VAR_6);
  FUNC_26(VAR_8,
       VAR_9);
  FUNC_26(VAR_43,
       VAR_44);



  VAR_49 = 1;
 }
 FUNC_23(&VAR_50, VAR_38);

 while ((VAR_51 = (RelIdCacheEnt *) FUNC_24(&VAR_50)) != ((void*)0))
 {
  Relation VAR_54 = VAR_51->reldesc;
  bool VAR_55 = 0;




  FUNC_15(VAR_54);




  if (VAR_54->rd_rel->relowner == VAR_24)
  {
   HeapTuple VAR_56;
   Form_pg_class VAR_57;

   VAR_56 = FUNC_20(VAR_37,
           FUNC_6(FUNC_14(VAR_54)));
   if (!FUNC_2(VAR_56))
    FUNC_21(VAR_21, "cache lookup failed for relation %u",
      FUNC_14(VAR_54));
   VAR_57 = (Form_pg_class) FUNC_1(VAR_56);





   FUNC_28((char *) VAR_54->rd_rel, (char *) VAR_57, VAR_10);


   if (VAR_54->rd_options)
    FUNC_29(VAR_54->rd_options);
   FUNC_18(VAR_54, VAR_56);







   FUNC_0(VAR_54->rd_att->tdtypeid == VAR_57->reltype);
   FUNC_0(VAR_54->rd_att->tdtypmod == -1);

   FUNC_19(VAR_56);


   if (VAR_54->rd_rel->relowner == VAR_24)
    FUNC_21(VAR_20, "invalid relowner in pg_class entry for \"%s\"",
      FUNC_13(VAR_54));

   VAR_55 = 1;
  }
  if (VAR_54->rd_rel->relhasrules && VAR_54->rd_rules == ((void*)0))
  {
   FUNC_10(VAR_54);
   if (VAR_54->rd_rules == ((void*)0))
    VAR_54->rd_rel->relhasrules = 0;
   VAR_55 = 1;
  }
  if (VAR_54->rd_rel->relhastriggers && VAR_54->trigdesc == ((void*)0))
  {
   FUNC_11(VAR_54);
   if (VAR_54->trigdesc == ((void*)0))
    VAR_54->rd_rel->relhastriggers = 0;
   VAR_55 = 1;
  }
  if (VAR_54->rd_rel->relrowsecurity && VAR_54->rd_rsdesc == ((void*)0))
  {
   FUNC_9(VAR_54);

   FUNC_0(VAR_54->rd_rsdesc != ((void*)0));
   VAR_55 = 1;
  }




  if (VAR_54->rd_rel->relkind == VAR_33 &&
   VAR_54->rd_partkey == ((void*)0))
  {
   FUNC_8(VAR_54);
   FUNC_0(VAR_54->rd_partkey != ((void*)0));

   VAR_55 = 1;
  }

  if (VAR_54->rd_rel->relkind == VAR_33 &&
   VAR_54->rd_partdesc == ((void*)0))
  {
   FUNC_7(VAR_54);
   FUNC_0(VAR_54->rd_partdesc != ((void*)0));

   VAR_55 = 1;
  }

  if (VAR_54->rd_tableam == ((void*)0) &&
   (VAR_54->rd_rel->relkind == VAR_34 ||
    VAR_54->rd_rel->relkind == VAR_35 ||
    VAR_54->rd_rel->relkind == VAR_36 ||
    VAR_54->rd_rel->relkind == VAR_32))
  {
   FUNC_16(VAR_54);
   FUNC_0(VAR_54->rd_tableam != ((void*)0));

   VAR_55 = 1;
  }


  FUNC_12(VAR_54);


  if (VAR_55)
  {
   FUNC_25(&VAR_50);
   FUNC_23(&VAR_50, VAR_38);
  }
 }





 if (VAR_53)
 {






  FUNC_3();


  FUNC_30(1);
  FUNC_30(0);
 }
}
