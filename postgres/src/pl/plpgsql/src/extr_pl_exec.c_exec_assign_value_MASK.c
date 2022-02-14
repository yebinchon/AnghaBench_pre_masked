
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;


typedef void* int32 ;
typedef void* int16 ;
struct TYPE_33__ {int er_tupdesc_id; } ;
struct TYPE_32__ {size_t arrayparentno; void* parenttypoid; void* parenttypmod; int elemtypbyval; char elemtypalign; void* arraytypmod; void* arraytypoid; void* elemtyplen; void* arraytyplen; void* elemtypoid; int * subscript; } ;
struct TYPE_31__ {int dtype; } ;
struct TYPE_30__ {int * eval_tuptable; TYPE_6__** datums; int atomic; int datum_context; } ;
struct TYPE_29__ {int refname; TYPE_8__* erh; int notnull; } ;
struct TYPE_25__ {int fnumber; void* ftypmod; void* ftypeid; } ;
struct TYPE_28__ {size_t recparentno; TYPE_14__ finfo; int fieldname; int rectupledescid; } ;
struct TYPE_27__ {int promise; TYPE_1__* datatype; int isnull; int value; int refname; int notnull; } ;
struct TYPE_26__ {int typbyval; int typlen; int typisarray; void* atttypmod; void* typoid; } ;
typedef int SPITupleTable ;
typedef int PLpgSQL_variable ;
typedef TYPE_2__ PLpgSQL_var ;
typedef int PLpgSQL_row ;
typedef TYPE_3__ PLpgSQL_recfield ;
typedef TYPE_4__ PLpgSQL_rec ;
typedef int PLpgSQL_expr ;
typedef TYPE_5__ PLpgSQL_execstate ;
typedef TYPE_6__ PLpgSQL_datum ;
typedef TYPE_7__ PLpgSQL_arrayelem ;
typedef void* Oid ;
typedef int MemoryContext ;
typedef TYPE_8__ ExpandedRecordHeader ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;






 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int*,int ,int,void*,void*,int,char) ;
 int FUNC_8 (TYPE_5__*,TYPE_2__*,int ,int,int) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ,char*,int const) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (TYPE_5__*,int ,int*,void*,void*,void*,void*) ;
 int FUNC_16 (TYPE_5__*,TYPE_6__*,void**,void**,int *,int*) ;
 int FUNC_17 (TYPE_5__*,int *,int*) ;
 int FUNC_18 (TYPE_5__*,int *,int *,int *) ;
 int FUNC_19 (TYPE_5__*,int *,int ) ;
 int FUNC_20 (int ,int ,int *) ;
 int FUNC_21 (TYPE_8__*,int ,TYPE_14__*) ;
 int FUNC_22 (TYPE_8__*,int ,int ,int,int) ;
 void* FUNC_23 (void*,void**) ;
 void* FUNC_24 (void*) ;
 int FUNC_25 (TYPE_5__*) ;
 void* FUNC_26 (void*) ;
 int FUNC_27 (void*,void**,int*,char*) ;
 int FUNC_28 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_29 (void*) ;
 int FUNC_30 (int) ;

__attribute__((used)) static void
FUNC_31(PLpgSQL_execstate *VAR_8,
      PLpgSQL_datum *VAR_9,
      Datum VAR_10, bool VAR_11,
      Oid VAR_12, int32 VAR_13)
{
 switch (VAR_9->dtype)
 {
  case 128:
  case 132:
   {



    PLpgSQL_var *VAR_14 = (PLpgSQL_var *) VAR_9;
    Datum VAR_15;

    VAR_15 = FUNC_15(VAR_8,
             VAR_10,
             &VAR_11,
             VAR_12,
             VAR_13,
             VAR_14->datatype->typoid,
             VAR_14->datatype->atttypmod);

    if (VAR_11 && VAR_14->notnull)
     FUNC_12(VAR_5,
       (FUNC_13(VAR_2),
        FUNC_14("null value cannot be assigned to variable \"%s\" declared NOT NULL",
         VAR_14->refname)));
    if (!VAR_14->datatype->typbyval && !VAR_11)
    {
     if (VAR_14->datatype->typisarray &&
      !FUNC_6(FUNC_1(VAR_15)))
     {

      VAR_15 = FUNC_20(VAR_15,
            VAR_8->datum_context,
            ((void*)0));
     }
     else
     {

      VAR_15 = FUNC_10(VAR_15,
             0,
             VAR_14->datatype->typlen);
     }
    }
    if (VAR_14->value != VAR_15 || VAR_14->isnull || VAR_11)
     FUNC_8(VAR_8, VAR_14, VAR_15, VAR_11,
           (!VAR_14->datatype->typbyval && !VAR_11));
    else
     VAR_14->promise = VAR_7;
    break;
   }

  case 129:
   {



    PLpgSQL_row *VAR_16 = (PLpgSQL_row *) VAR_9;

    if (VAR_11)
    {

     FUNC_18(VAR_8, (PLpgSQL_variable *) VAR_16,
          ((void*)0), ((void*)0));
    }
    else
    {

     if (!FUNC_29(VAR_12))
      FUNC_12(VAR_5,
        (FUNC_13(VAR_0),
         FUNC_14("cannot assign non-composite value to a row variable")));
     FUNC_19(VAR_8, (PLpgSQL_variable *) VAR_16,
            VAR_10);
    }
    break;
   }

  case 131:
   {



    PLpgSQL_rec *VAR_17 = (PLpgSQL_rec *) VAR_9;

    if (VAR_11)
    {
     if (VAR_17->notnull)
      FUNC_12(VAR_5,
        (FUNC_13(VAR_2),
         FUNC_14("null value cannot be assigned to variable \"%s\" declared NOT NULL",
          VAR_17->refname)));


     FUNC_18(VAR_8, (PLpgSQL_variable *) VAR_17,
          ((void*)0), ((void*)0));
    }
    else
    {

     if (!FUNC_29(VAR_12))
      FUNC_12(VAR_5,
        (FUNC_13(VAR_0),
         FUNC_14("cannot assign non-composite value to a record variable")));
     FUNC_19(VAR_8, (PLpgSQL_variable *) VAR_17,
            VAR_10);
    }
    break;
   }

  case 130:
   {



    PLpgSQL_recfield *VAR_18 = (PLpgSQL_recfield *) VAR_9;
    PLpgSQL_rec *VAR_19;
    ExpandedRecordHeader *VAR_20;

    VAR_19 = (PLpgSQL_rec *) (VAR_8->datums[VAR_18->recparentno]);
    VAR_20 = VAR_19->erh;







    if (VAR_20 == ((void*)0))
    {
     FUNC_28(VAR_8, VAR_19);
     VAR_20 = VAR_19->erh;
    }





    if (FUNC_30(VAR_18->rectupledescid != VAR_20->er_tupdesc_id))
    {
     if (!FUNC_21(VAR_20,
               VAR_18->fieldname,
               &VAR_18->finfo))
      FUNC_12(VAR_5,
        (FUNC_13(VAR_4),
         FUNC_14("record \"%s\" has no field \"%s\"",
          VAR_19->refname, VAR_18->fieldname)));
     VAR_18->rectupledescid = VAR_20->er_tupdesc_id;
    }


    if (VAR_18->finfo.fnumber <= 0)
     FUNC_12(VAR_5,
       (FUNC_13(VAR_1),
        FUNC_14("cannot assign to system column \"%s\"",
         VAR_18->fieldname)));


    VAR_10 = FUNC_15(VAR_8,
          VAR_10,
          &VAR_11,
          VAR_12,
          VAR_13,
          VAR_18->finfo.ftypeid,
          VAR_18->finfo.ftypmod);


    FUNC_22(VAR_20, VAR_18->finfo.fnumber,
            VAR_10, VAR_11, !VAR_8->atomic);
    break;
   }

  case 133:
   {



    PLpgSQL_arrayelem *VAR_21;
    int VAR_22;
    int VAR_23;
    PLpgSQL_expr *VAR_24[VAR_6];
    int VAR_25[VAR_6];
    Datum VAR_26,
       VAR_27,
       VAR_28;
    bool VAR_29;
    Oid VAR_30;
    int32 VAR_31;
    SPITupleTable *VAR_32;
    MemoryContext VAR_33;
    VAR_32 = VAR_8->eval_tuptable;
    VAR_8->eval_tuptable = ((void*)0);
    VAR_22 = 0;
    do
    {
     VAR_21 = (PLpgSQL_arrayelem *) VAR_9;
     if (VAR_22 >= VAR_6)
      FUNC_12(VAR_5,
        (FUNC_13(VAR_3),
         FUNC_14("number of array dimensions (%d) exceeds the maximum allowed (%d)",
          VAR_22 + 1, VAR_6)));
     VAR_24[VAR_22++] = VAR_21->subscript;
     VAR_9 = VAR_8->datums[VAR_21->arrayparentno];
    } while (VAR_9->dtype == 133);


    FUNC_16(VAR_8, VAR_9,
        &VAR_30, &VAR_31,
        &VAR_26, &VAR_29);


    if (VAR_21->parenttypoid != VAR_30 ||
     VAR_21->parenttypmod != VAR_31)
    {
     Oid VAR_34;
     int32 VAR_35 = VAR_31;
     int16 VAR_36;
     Oid VAR_37;
     int16 VAR_38;
     bool VAR_39;
     char VAR_40;


     VAR_34 = FUNC_23(VAR_30,
                &VAR_35);


     VAR_37 = FUNC_24(VAR_34);
     if (!FUNC_3(VAR_37))
      FUNC_12(VAR_5,
        (FUNC_13(VAR_0),
         FUNC_14("subscripted object is not an array")));


     VAR_36 = FUNC_26(VAR_34);

     FUNC_27(VAR_37,
           &VAR_38,
           &VAR_39,
           &VAR_40);


     VAR_21->parenttypoid = VAR_30;
     VAR_21->parenttypmod = VAR_31;
     VAR_21->arraytypoid = VAR_34;
     VAR_21->arraytypmod = VAR_35;
     VAR_21->arraytyplen = VAR_36;
     VAR_21->elemtypoid = VAR_37;
     VAR_21->elemtyplen = VAR_38;
     VAR_21->elemtypbyval = VAR_39;
     VAR_21->elemtypalign = VAR_40;
    }






    for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
    {
     bool VAR_41;

     VAR_25[VAR_23] =
      FUNC_17(VAR_8,
            VAR_24[VAR_22 - 1 - VAR_23],
            &VAR_41);
     if (VAR_41)
      FUNC_12(VAR_5,
        (FUNC_13(VAR_2),
         FUNC_14("array subscript in assignment must not be null")));
     if (VAR_8->eval_tuptable != ((void*)0))
      FUNC_5(VAR_8->eval_tuptable);
     VAR_8->eval_tuptable = ((void*)0);
    }


    FUNC_0(VAR_8->eval_tuptable == ((void*)0));
    VAR_8->eval_tuptable = VAR_32;


    VAR_28 = FUNC_15(VAR_8,
            VAR_10,
            &VAR_11,
            VAR_12,
            VAR_13,
            VAR_21->elemtypoid,
            VAR_21->arraytypmod);
    if (VAR_21->arraytyplen > 0 &&
     (VAR_29 || VAR_11))
     return;


    VAR_33 = FUNC_2(FUNC_25(VAR_8));

    if (VAR_29)
     VAR_26 = FUNC_4(FUNC_9(VAR_21->elemtypoid));




    VAR_27 = FUNC_7(VAR_26,
              VAR_22,
              VAR_25,
              VAR_28,
              VAR_11,
              VAR_21->arraytyplen,
              VAR_21->elemtyplen,
              VAR_21->elemtypbyval,
              VAR_21->elemtypalign);

    FUNC_2(VAR_33);







    FUNC_31(VAR_8, VAR_9,
          VAR_27,
          0,
          VAR_21->arraytypoid,
          VAR_21->arraytypmod);
    break;
   }

  default:
   FUNC_11(VAR_5, "unrecognized dtype: %d", VAR_9->dtype);
 }
}
