
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_3__ {int attstattarget; int attndims; int atttypmod; int attinhcount; int attcollation; int attislocal; int attisdropped; int attgenerated; int attidentity; int atthasmissing; int atthasdef; int attnotnull; int attalign; int attstorage; int attbyval; int attnum; int attlen; int atttypid; int attname; int attrelid; } ;
typedef int Relation ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef int Datum ;
typedef int * CatalogIndexState ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int VAR_25 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int*,int,int) ;

void
FUNC_12(Relation VAR_26,
        Form_pg_attribute VAR_27,
        CatalogIndexState VAR_28)
{
 Datum VAR_29[VAR_25];
 bool VAR_30[VAR_25];
 HeapTuple VAR_31;


 FUNC_11(VAR_29, 0, sizeof(VAR_29));
 FUNC_11(VAR_30, 0, sizeof(VAR_30));

 VAR_29[VAR_20 - 1] = FUNC_7(VAR_27->attrelid);
 VAR_29[VAR_15 - 1] = FUNC_6(&VAR_27->attname);
 VAR_29[VAR_23 - 1] = FUNC_7(VAR_27->atttypid);
 VAR_29[VAR_21 - 1] = FUNC_5(VAR_27->attstattarget);
 VAR_29[VAR_13 - 1] = FUNC_4(VAR_27->attlen);
 VAR_29[VAR_18 - 1] = FUNC_4(VAR_27->attnum);
 VAR_29[VAR_16 - 1] = FUNC_5(VAR_27->attndims);
 VAR_29[VAR_3 - 1] = FUNC_5(-1);
 VAR_29[VAR_24 - 1] = FUNC_5(VAR_27->atttypmod);
 VAR_29[VAR_2 - 1] = FUNC_0(VAR_27->attbyval);
 VAR_29[VAR_22 - 1] = FUNC_3(VAR_27->attstorage);
 VAR_29[VAR_1 - 1] = FUNC_3(VAR_27->attalign);
 VAR_29[VAR_17 - 1] = FUNC_0(VAR_27->attnotnull);
 VAR_29[VAR_7 - 1] = FUNC_0(VAR_27->atthasdef);
 VAR_29[VAR_8 - 1] = FUNC_0(VAR_27->atthasmissing);
 VAR_29[VAR_9 - 1] = FUNC_3(VAR_27->attidentity);
 VAR_29[VAR_6 - 1] = FUNC_3(VAR_27->attgenerated);
 VAR_29[VAR_11 - 1] = FUNC_0(VAR_27->attisdropped);
 VAR_29[VAR_12 - 1] = FUNC_0(VAR_27->attislocal);
 VAR_29[VAR_10 - 1] = FUNC_5(VAR_27->attinhcount);
 VAR_29[VAR_4 - 1] = FUNC_7(VAR_27->attcollation);


 VAR_30[VAR_0 - 1] = 1;
 VAR_30[VAR_19 - 1] = 1;
 VAR_30[VAR_5 - 1] = 1;
 VAR_30[VAR_14 - 1] = 1;

 VAR_31 = FUNC_9(FUNC_8(VAR_26), VAR_29, VAR_30);


 if (VAR_28 != ((void*)0))
  FUNC_2(VAR_26, VAR_31, VAR_28);
 else
  FUNC_1(VAR_26, VAR_31);

 FUNC_10(VAR_31);
}
