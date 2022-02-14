
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_10__ {int atttypid; } ;
struct TYPE_9__ {int natts; } ;
typedef int Oid ;
typedef int DestReceiver ;
typedef int Datum ;


 char* FUNC_0 (int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (unsigned int,TYPE_4__*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int,int*) ;

bool
FUNC_6(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 TupleDesc VAR_2 = VAR_0->tts_tupleDescriptor;
 int VAR_3 = VAR_2->natts;
 int VAR_4;
 Datum VAR_5;
 char *VAR_6;
 bool VAR_7;
 Oid VAR_8;
 bool VAR_9;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
 {
  VAR_5 = FUNC_5(VAR_0, VAR_4 + 1, &VAR_7);
  if (VAR_7)
   continue;
  FUNC_2(FUNC_1(VAR_2, VAR_4)->atttypid,
        &VAR_8, &VAR_9);

  VAR_6 = FUNC_0(VAR_8, VAR_5);

  FUNC_3((unsigned) VAR_4 + 1, FUNC_1(VAR_2, VAR_4), VAR_6);
 }
 FUNC_4("\t----\n");

 return 1;
}
