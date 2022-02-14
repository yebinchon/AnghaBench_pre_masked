
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_18__ ;
typedef struct TYPE_25__ TYPE_13__ ;


typedef int int32 ;
struct TYPE_34__ {int er_typmod; int er_tupdesc_id; int er_typeid; } ;
struct TYPE_33__ {int dtype; } ;
struct TYPE_32__ {scalar_t__* datums; } ;
struct TYPE_31__ {int refname; TYPE_8__* erh; int rectypeid; } ;
struct TYPE_26__ {int ftypmod; int fnumber; int ftypeid; } ;
struct TYPE_30__ {size_t recparentno; TYPE_18__ finfo; int rectupledescid; int fieldname; } ;
struct TYPE_29__ {TYPE_13__* rowtupdesc; } ;
struct TYPE_28__ {int isnull; int value; TYPE_1__* datatype; } ;
struct TYPE_27__ {int atttypmod; int typoid; } ;
struct TYPE_25__ {int tdtypmod; int tdtypeid; } ;
typedef TYPE_2__ PLpgSQL_var ;
typedef TYPE_3__ PLpgSQL_row ;
typedef TYPE_4__ PLpgSQL_recfield ;
typedef TYPE_5__ PLpgSQL_rec ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef TYPE_7__ PLpgSQL_datum ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int * HeapTuple ;
typedef TYPE_8__ ExpandedRecordHeader ;
typedef int Datum ;


 int FUNC_0 (TYPE_13__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;





 int VAR_2 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (TYPE_8__*,int ,int*) ;
 int FUNC_10 (TYPE_8__*,int ,TYPE_18__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,TYPE_5__*) ;
 int * FUNC_13 (TYPE_6__*,TYPE_3__*,TYPE_13__*) ;
 int FUNC_14 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(PLpgSQL_execstate *VAR_3,
    PLpgSQL_datum *VAR_4,
    Oid *VAR_5,
    int32 *VAR_6,
    Datum *VAR_7,
    bool *VAR_8)
{
 MemoryContext VAR_9;

 switch (VAR_4->dtype)
 {
  case 132:

   FUNC_14(VAR_3, (PLpgSQL_var *) VAR_4);



  case 128:
   {
    PLpgSQL_var *VAR_10 = (PLpgSQL_var *) VAR_4;

    *VAR_5 = VAR_10->datatype->typoid;
    *VAR_6 = VAR_10->datatype->atttypmod;
    *VAR_7 = VAR_10->value;
    *VAR_8 = VAR_10->isnull;
    break;
   }

  case 129:
   {
    PLpgSQL_row *VAR_11 = (PLpgSQL_row *) VAR_4;
    HeapTuple VAR_12;


    if (!VAR_11->rowtupdesc)
     FUNC_5(VAR_1, "row variable has no tupdesc");

    FUNC_0(VAR_11->rowtupdesc);
    VAR_9 = FUNC_4(FUNC_11(VAR_3));
    VAR_12 = FUNC_13(VAR_3, VAR_11, VAR_11->rowtupdesc);
    if (VAR_12 == ((void*)0))
     FUNC_5(VAR_1, "row not compatible with its own tupdesc");
    *VAR_5 = VAR_11->rowtupdesc->tdtypeid;
    *VAR_6 = VAR_11->rowtupdesc->tdtypmod;
    *VAR_7 = FUNC_3(VAR_12);
    *VAR_8 = 0;
    FUNC_4(VAR_9);
    break;
   }

  case 131:
   {
    PLpgSQL_rec *VAR_13 = (PLpgSQL_rec *) VAR_4;

    if (VAR_13->erh == ((void*)0))
    {

     *VAR_7 = (Datum) 0;
     *VAR_8 = 1;

     *VAR_5 = VAR_13->rectypeid;
     *VAR_6 = -1;
    }
    else
    {
     if (FUNC_2(VAR_13->erh))
     {

      *VAR_7 = (Datum) 0;
      *VAR_8 = 1;
     }
     else
     {
      *VAR_7 = FUNC_1(VAR_13->erh);
      *VAR_8 = 0;
     }
     if (VAR_13->rectypeid != VAR_2)
     {

      *VAR_5 = VAR_13->rectypeid;
      *VAR_6 = -1;
     }
     else
     {

      *VAR_5 = VAR_13->erh->er_typeid;
      *VAR_6 = VAR_13->erh->er_typmod;
     }
    }
    break;
   }

  case 130:
   {
    PLpgSQL_recfield *VAR_14 = (PLpgSQL_recfield *) VAR_4;
    PLpgSQL_rec *VAR_15;
    ExpandedRecordHeader *VAR_16;

    VAR_15 = (PLpgSQL_rec *) (VAR_3->datums[VAR_14->recparentno]);
    VAR_16 = VAR_15->erh;






    if (VAR_16 == ((void*)0))
    {
     FUNC_12(VAR_3, VAR_15);
     VAR_16 = VAR_15->erh;
    }





    if (FUNC_15(VAR_14->rectupledescid != VAR_16->er_tupdesc_id))
    {
     if (!FUNC_10(VAR_16,
               VAR_14->fieldname,
               &VAR_14->finfo))
      FUNC_6(VAR_1,
        (FUNC_7(VAR_0),
         FUNC_8("record \"%s\" has no field \"%s\"",
          VAR_15->refname, VAR_14->fieldname)));
     VAR_14->rectupledescid = VAR_16->er_tupdesc_id;
    }


    *VAR_5 = VAR_14->finfo.ftypeid;
    *VAR_6 = VAR_14->finfo.ftypmod;


    *VAR_7 = FUNC_9(VAR_16,
               VAR_14->finfo.fnumber,
               VAR_8);
    break;
   }

  default:
   FUNC_5(VAR_1, "unrecognized dtype: %d", VAR_4->dtype);
 }
}
