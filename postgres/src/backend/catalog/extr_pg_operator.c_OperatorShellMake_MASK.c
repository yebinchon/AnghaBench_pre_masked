
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_6__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef scalar_t__ Oid ;
typedef int NameData ;
typedef int HeapTuple ;
typedef scalar_t__ Datum ;


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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 () ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_18 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (int ,scalar_t__*,int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_17 (int ,int ) ;
 int FUNC_18 (char const*) ;

__attribute__((used)) static Oid
FUNC_19(const char *VAR_22,
      Oid VAR_23,
      Oid VAR_24,
      Oid VAR_25)
{
 Relation VAR_26;
 Oid VAR_27;
 int VAR_28;
 HeapTuple VAR_29;
 Datum VAR_30[VAR_18];
 bool VAR_31[VAR_18];
 NameData VAR_32;
 TupleDesc VAR_33;




 if (!FUNC_18(VAR_22))
  FUNC_9(VAR_16,
    (FUNC_10(VAR_15),
     FUNC_11("\"%s\" is not a valid operator name",
      VAR_22)));




 VAR_26 = FUNC_17(VAR_20, VAR_21);
 VAR_33 = VAR_26->rd_att;




 for (VAR_28 = 0; VAR_28 < VAR_18; ++VAR_28)
 {
  VAR_31[VAR_28] = 0;
  VAR_30[VAR_28] = (Datum) ((void*)0);
 }





 VAR_27 = FUNC_4(VAR_26, VAR_19,
            VAR_0);
 VAR_30[VAR_0 - 1] = FUNC_8(VAR_27);
 FUNC_15(&VAR_32, VAR_22);
 VAR_30[VAR_8 - 1] = FUNC_7(&VAR_32);
 VAR_30[VAR_9 - 1] = FUNC_8(VAR_23);
 VAR_30[VAR_11 - 1] = FUNC_8(FUNC_5());
 VAR_30[VAR_6 - 1] = FUNC_2(VAR_24 ? (VAR_25 ? 'b' : 'r') : 'l');
 VAR_30[VAR_2 - 1] = FUNC_0(0);
 VAR_30[VAR_1 - 1] = FUNC_0(0);
 VAR_30[VAR_7 - 1] = FUNC_8(VAR_24);
 VAR_30[VAR_14 - 1] = FUNC_8(VAR_25);
 VAR_30[VAR_13 - 1] = FUNC_8(VAR_17);
 VAR_30[VAR_4 - 1] = FUNC_8(VAR_17);
 VAR_30[VAR_10 - 1] = FUNC_8(VAR_17);
 VAR_30[VAR_3 - 1] = FUNC_8(VAR_17);
 VAR_30[VAR_12 - 1] = FUNC_8(VAR_17);
 VAR_30[VAR_5 - 1] = FUNC_8(VAR_17);




 VAR_29 = FUNC_12(VAR_33, VAR_30, VAR_31);




 FUNC_1(VAR_26, VAR_29);


 FUNC_14(VAR_29, 0);

 FUNC_13(VAR_29);


 FUNC_6(VAR_20, VAR_27, 0);




 FUNC_3();




 FUNC_16(VAR_26, VAR_21);

 return VAR_27;
}
