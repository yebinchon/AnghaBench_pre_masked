
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int int32 ;
struct TYPE_20__ {int dtype; } ;
struct TYPE_19__ {scalar_t__* datums; } ;
struct TYPE_18__ {TYPE_11__* erh; int refname; int rectypeid; } ;
struct TYPE_14__ {int ftypmod; int fcollation; int ftypeid; } ;
struct TYPE_17__ {size_t recparentno; TYPE_12__ finfo; int rectupledescid; int fieldname; } ;
struct TYPE_16__ {TYPE_1__* datatype; } ;
struct TYPE_15__ {int atttypmod; int collation; int typoid; } ;
struct TYPE_13__ {int er_tupdesc_id; int er_typeid; } ;
typedef TYPE_2__ PLpgSQL_var ;
typedef TYPE_3__ PLpgSQL_recfield ;
typedef TYPE_4__ PLpgSQL_rec ;
typedef TYPE_5__ PLpgSQL_execstate ;
typedef TYPE_6__ PLpgSQL_datum ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (TYPE_11__*,int ,TYPE_12__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (int) ;

void
FUNC_7(PLpgSQL_execstate *VAR_4,
         PLpgSQL_datum *VAR_5,
         Oid *VAR_6, int32 *VAR_7, Oid *VAR_8)
{
 switch (VAR_5->dtype)
 {
  case 128:
  case 131:
   {
    PLpgSQL_var *VAR_9 = (PLpgSQL_var *) VAR_5;

    *VAR_6 = VAR_9->datatype->typoid;
    *VAR_7 = VAR_9->datatype->atttypmod;
    *VAR_8 = VAR_9->datatype->collation;
    break;
   }

  case 130:
   {
    PLpgSQL_rec *VAR_10 = (PLpgSQL_rec *) VAR_5;

    if (VAR_10->erh == ((void*)0) || VAR_10->rectypeid != VAR_3)
    {

     *VAR_6 = VAR_10->rectypeid;
     *VAR_7 = -1;
    }
    else
    {

     *VAR_6 = VAR_10->erh->er_typeid;

     *VAR_7 = -1;
    }

    *VAR_8 = VAR_2;
    break;
   }

  case 129:
   {
    PLpgSQL_recfield *VAR_11 = (PLpgSQL_recfield *) VAR_5;
    PLpgSQL_rec *VAR_12;

    VAR_12 = (PLpgSQL_rec *) (VAR_4->datums[VAR_11->recparentno]);






    if (VAR_12->erh == ((void*)0))
     FUNC_5(VAR_4, VAR_12);





    if (FUNC_6(VAR_11->rectupledescid != VAR_12->erh->er_tupdesc_id))
    {
     if (!FUNC_4(VAR_12->erh,
               VAR_11->fieldname,
               &VAR_11->finfo))
      FUNC_1(VAR_1,
        (FUNC_2(VAR_0),
         FUNC_3("record \"%s\" has no field \"%s\"",
          VAR_12->refname, VAR_11->fieldname)));
     VAR_11->rectupledescid = VAR_12->erh->er_tupdesc_id;
    }

    *VAR_6 = VAR_11->finfo.ftypeid;
    *VAR_7 = VAR_11->finfo.ftypmod;
    *VAR_8 = VAR_11->finfo.fcollation;
    break;
   }

  default:
   FUNC_0(VAR_1, "unrecognized dtype: %d", VAR_5->dtype);
   *VAR_6 = VAR_2;
   *VAR_7 = -1;
   *VAR_8 = VAR_2;
   break;
 }
}
