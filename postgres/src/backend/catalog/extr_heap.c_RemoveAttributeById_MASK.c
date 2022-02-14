
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int valuesAtt ;
typedef int replacesAtt ;
typedef int nullsAtt ;
typedef int newattname ;
struct TYPE_10__ {int attisdropped; int attnotnull; char attgenerated; scalar_t__ atthasmissing; int attname; scalar_t__ attstattarget; int atttypid; } ;
struct TYPE_9__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int*,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_10 ;
 TYPE_1__* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,char*,int,int ) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,int,char*,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;

void
FUNC_19(Oid VAR_11, AttrNumber VAR_12)
{
 Relation VAR_13;
 Relation VAR_14;
 HeapTuple VAR_15;
 Form_pg_attribute VAR_16;
 char VAR_17[VAR_7];







 VAR_13 = FUNC_15(VAR_11, VAR_1);

 VAR_14 = FUNC_18(VAR_4, VAR_10);

 VAR_15 = FUNC_10(VAR_0,
        FUNC_7(VAR_11),
        FUNC_5(VAR_12));
 if (!FUNC_4(VAR_15))
  FUNC_11(VAR_5, "cache lookup failed for attribute %d of relation %u",
    VAR_12, VAR_11);
 VAR_16 = (Form_pg_attribute) FUNC_3(VAR_15);

 if (VAR_12 < 0)
 {


  FUNC_1(VAR_14, &VAR_15->t_self);
 }
 else
 {



  VAR_16->attisdropped = 1;
  VAR_16->atttypid = VAR_6;


  VAR_16->attnotnull = 0;


  VAR_16->attstattarget = 0;


  VAR_16->attgenerated = '\0';




  FUNC_16(VAR_17, sizeof(VAR_17),
     "........pg.dropped.%d........", VAR_12);
  FUNC_13(&(VAR_16->attname), VAR_17);


  if (VAR_16->atthasmissing)
  {
   Datum VAR_18[VAR_8];
   bool VAR_19[VAR_8];
   bool VAR_20[VAR_8];


   FUNC_6(VAR_18, 0, sizeof(VAR_18));
   FUNC_6(VAR_19, 0, sizeof(VAR_19));
   FUNC_6(VAR_20, 0, sizeof(VAR_20));

   VAR_18[VAR_2 - 1] =
    FUNC_0(0);
   VAR_20[VAR_2 - 1] = 1;
   VAR_18[VAR_3 - 1] = (Datum) 0;
   VAR_19[VAR_3 - 1] = 1;
   VAR_20[VAR_3 - 1] = 1;

   VAR_15 = FUNC_12(VAR_15, FUNC_8(VAR_14),
           VAR_18, VAR_19, VAR_20);
  }

  FUNC_2(VAR_14, &VAR_15->t_self, VAR_15);
 }







 FUNC_17(VAR_14, VAR_10);

 if (VAR_12 > 0)
  FUNC_9(VAR_11, VAR_12);

 FUNC_14(VAR_13, VAR_9);
}
