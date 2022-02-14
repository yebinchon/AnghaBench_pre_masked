
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * values; } ;
typedef TYPE_1__ oidvector ;
typedef int nulls ;
typedef TYPE_1__ int2vector ;
typedef int int16 ;
struct TYPE_9__ {int ii_NumIndexAttrs; int ii_NumIndexKeyAttrs; scalar_t__ ii_Expressions; scalar_t__ ii_Predicate; int ii_Unique; int * ii_IndexAttrNumbers; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_3__ IndexInfo ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_20 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*,int,int) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_23 ;
 TYPE_1__* FUNC_8 (int *,int) ;
 TYPE_1__* FUNC_9 (int *,int) ;
 int FUNC_10 (int ,scalar_t__*,int*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 char* FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(Oid VAR_24,
     Oid VAR_25,
     Oid VAR_26,
     IndexInfo *VAR_27,
     Oid *VAR_28,
     Oid *VAR_29,
     int16 *VAR_30,
     bool VAR_31,
     bool VAR_32,
     bool VAR_33,
     bool VAR_34,
     bool VAR_35)
{
 int2vector *VAR_36;
 oidvector *VAR_37;
 oidvector *VAR_38;
 int2vector *VAR_39;
 Datum VAR_40;
 Datum VAR_41;
 Datum VAR_42[VAR_22];
 bool VAR_43[VAR_22];
 Relation VAR_44;
 HeapTuple VAR_45;
 int VAR_46;





 VAR_36 = FUNC_8(((void*)0), VAR_27->ii_NumIndexAttrs);
 for (VAR_46 = 0; VAR_46 < VAR_27->ii_NumIndexAttrs; VAR_46++)
  VAR_36->values[VAR_46] = VAR_27->ii_IndexAttrNumbers[VAR_46];
 VAR_37 = FUNC_9(VAR_28, VAR_27->ii_NumIndexKeyAttrs);
 VAR_38 = FUNC_9(VAR_29, VAR_27->ii_NumIndexKeyAttrs);
 VAR_39 = FUNC_8(VAR_30, VAR_27->ii_NumIndexKeyAttrs);




 if (VAR_27->ii_Expressions != VAR_21)
 {
  char *VAR_47;

  VAR_47 = FUNC_13(VAR_27->ii_Expressions);
  VAR_40 = FUNC_1(VAR_47);
  FUNC_14(VAR_47);
 }
 else
  VAR_40 = (Datum) 0;





 if (VAR_27->ii_Predicate != VAR_21)
 {
  char *VAR_48;

  VAR_48 = FUNC_13(FUNC_12(VAR_27->ii_Predicate));
  VAR_41 = FUNC_1(VAR_48);
  FUNC_14(VAR_48);
 }
 else
  VAR_41 = (Datum) 0;




 VAR_44 = FUNC_16(VAR_20, VAR_23);




 FUNC_4(VAR_43, 0, sizeof(VAR_43));

 VAR_42[VAR_4 - 1] = FUNC_5(VAR_24);
 VAR_42[VAR_19 - 1] = FUNC_5(VAR_25);
 VAR_42[VAR_15 - 1] = FUNC_3(VAR_27->ii_NumIndexAttrs);
 VAR_42[VAR_16 - 1] = FUNC_3(VAR_27->ii_NumIndexKeyAttrs);
 VAR_42[VAR_12 - 1] = FUNC_0(VAR_27->ii_Unique);
 VAR_42[VAR_9 - 1] = FUNC_0(VAR_31);
 VAR_42[VAR_7 - 1] = FUNC_0(VAR_32);
 VAR_42[VAR_5 - 1] = FUNC_0(VAR_33);
 VAR_42[VAR_6 - 1] = FUNC_0(0);
 VAR_42[VAR_13 - 1] = FUNC_0(VAR_34);
 VAR_42[VAR_0 - 1] = FUNC_0(0);
 VAR_42[VAR_10 - 1] = FUNC_0(VAR_35);
 VAR_42[VAR_8 - 1] = FUNC_0(1);
 VAR_42[VAR_11 - 1] = FUNC_0(0);
 VAR_42[VAR_14 - 1] = FUNC_6(VAR_36);
 VAR_42[VAR_2 - 1] = FUNC_6(VAR_37);
 VAR_42[VAR_1 - 1] = FUNC_6(VAR_38);
 VAR_42[VAR_17 - 1] = FUNC_6(VAR_39);
 VAR_42[VAR_3 - 1] = VAR_40;
 if (VAR_40 == (Datum) 0)
  VAR_43[VAR_3 - 1] = 1;
 VAR_42[VAR_18 - 1] = VAR_41;
 if (VAR_41 == (Datum) 0)
  VAR_43[VAR_18 - 1] = 1;

 VAR_45 = FUNC_10(FUNC_7(VAR_44), VAR_42, VAR_43);




 FUNC_2(VAR_44, VAR_45);




 FUNC_15(VAR_44, VAR_23);
 FUNC_11(VAR_45);
}
