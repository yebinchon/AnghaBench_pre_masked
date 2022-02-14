
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int values ;
typedef int replaces ;
typedef int nulls ;
typedef int bytea ;
typedef int VacAttrStats ;
struct TYPE_9__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef int MVNDistinct ;
typedef int MVDependencies ;
typedef int MCVList ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_10 (int*,int,int) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *,int **) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(Oid VAR_8,
     MVNDistinct *VAR_9, MVDependencies *VAR_10,
     MCVList *VAR_11, VacAttrStats **VAR_12)
{
 HeapTuple VAR_13,
    VAR_14;
 Datum VAR_15[VAR_4];
 bool VAR_16[VAR_4];
 bool VAR_17[VAR_4];
 Relation VAR_18;

 FUNC_10(VAR_16, 1, sizeof(VAR_16));
 FUNC_10(VAR_17, 0, sizeof(VAR_17));
 FUNC_10(VAR_15, 0, sizeof(VAR_15));





 if (VAR_9 != ((void*)0))
 {
  bytea *VAR_19 = FUNC_13(VAR_9);

  VAR_16[VAR_2 - 1] = (VAR_19 == ((void*)0));
  VAR_15[VAR_2 - 1] = FUNC_3(VAR_19);
 }

 if (VAR_10 != ((void*)0))
 {
  bytea *VAR_20 = FUNC_11(VAR_10);

  VAR_16[VAR_0 - 1] = (VAR_20 == ((void*)0));
  VAR_15[VAR_0 - 1] = FUNC_3(VAR_20);
 }
 if (VAR_11 != ((void*)0))
 {
  bytea *VAR_21 = FUNC_12(VAR_11, VAR_12);

  VAR_16[VAR_1 - 1] = (VAR_21 == ((void*)0));
  VAR_15[VAR_1 - 1] = FUNC_3(VAR_21);
 }


 VAR_17[VAR_2 - 1] = 1;
 VAR_17[VAR_0 - 1] = 1;
 VAR_17[VAR_1 - 1] = 1;


 VAR_14 = FUNC_6(VAR_6, FUNC_2(VAR_8));
 if (!FUNC_1(VAR_14))
  FUNC_7(VAR_3, "cache lookup failed for statistics object %u", VAR_8);


 VAR_18 = FUNC_15(VAR_7, VAR_5);

 VAR_13 = FUNC_9(VAR_14,
        FUNC_4(VAR_18),
        VAR_15,
        VAR_16,
        VAR_17);
 FUNC_5(VAR_14);
 FUNC_0(VAR_18, &VAR_13->t_self, VAR_13);

 FUNC_8(VAR_13);

 FUNC_14(VAR_18, VAR_5);
}
