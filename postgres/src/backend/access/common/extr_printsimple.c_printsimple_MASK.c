
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int text ;
typedef int int64 ;
typedef int int32 ;
struct TYPE_8__ {int * tts_values; scalar_t__* tts_isnull; TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_10__ {int atttypid; } ;
struct TYPE_9__ {int natts; } ;
typedef int StringInfoData ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int DestReceiver ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;



 TYPE_3__* FUNC_3 (TYPE_2__*,int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,char) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*) ;

bool
FUNC_16(TupleTableSlot *VAR_1, DestReceiver *VAR_2)
{
 TupleDesc VAR_3 = VAR_1->tts_tupleDescriptor;
 StringInfoData VAR_4;
 int VAR_5;


 FUNC_14(VAR_1);


 FUNC_9(&VAR_4, 'D');
 FUNC_12(&VAR_4, VAR_3->natts);

 for (VAR_5 = 0; VAR_5 < VAR_3->natts; ++VAR_5)
 {
  Form_pg_attribute VAR_6 = FUNC_3(VAR_3, VAR_5);
  Datum VAR_7;

  if (VAR_1->tts_isnull[VAR_5])
  {
   FUNC_13(&VAR_4, -1);
   continue;
  }

  VAR_7 = VAR_1->tts_values[VAR_5];






  switch (VAR_6->atttypid)
  {
   case 128:
    {
     text *VAR_8 = FUNC_2(VAR_7);

     FUNC_11(&VAR_4,
            FUNC_4(VAR_8),
            FUNC_5(VAR_8),
            0);
    }
    break;

   case 130:
    {
     int32 VAR_9 = FUNC_0(VAR_7);
     char VAR_10[12];

     FUNC_8(VAR_9, VAR_10);
     FUNC_11(&VAR_4, VAR_10, FUNC_15(VAR_10), 0);
    }
    break;

   case 129:
    {
     int64 VAR_11 = FUNC_1(VAR_7);
     char VAR_12[23];

     FUNC_7(VAR_11, VAR_12);
     FUNC_11(&VAR_4, VAR_12, FUNC_15(VAR_12), 0);
    }
    break;

   default:
    FUNC_6(VAR_0, "unsupported type OID: %u", VAR_6->atttypid);
  }
 }

 FUNC_10(&VAR_4);

 return 1;
}
