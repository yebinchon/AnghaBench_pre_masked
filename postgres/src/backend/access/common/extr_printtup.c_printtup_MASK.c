
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_9__ {scalar_t__* tts_isnull; int * tts_values; TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_12__ {int nattrs; int tmpcontext; TYPE_3__* myinfo; TYPE_2__* attrinfo; int buf; } ;
struct TYPE_11__ {scalar_t__ format; int finfo; scalar_t__ typisvarlena; } ;
struct TYPE_10__ {int natts; } ;
typedef int * StringInfo ;
typedef TYPE_3__ PrinttupAttrInfo ;
typedef int MemoryContext ;
typedef int DestReceiver ;
typedef int Datum ;
typedef TYPE_4__ DR_printtup ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,char*,int ,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static bool
FUNC_18(TupleTableSlot *VAR_1, DestReceiver *VAR_2)
{
 TupleDesc VAR_3 = VAR_1->tts_tupleDescriptor;
 DR_printtup *VAR_4 = (DR_printtup *) VAR_2;
 MemoryContext VAR_5;
 StringInfo VAR_6 = &VAR_4->buf;
 int VAR_7 = VAR_3->natts;
 int VAR_8;


 if (VAR_4->attrinfo != VAR_3 || VAR_4->nattrs != VAR_7)
  FUNC_15(VAR_4, VAR_3, VAR_7);


 FUNC_16(VAR_1);


 VAR_5 = FUNC_2(VAR_4->tmpcontext);




 FUNC_9(VAR_6, 'D');

 FUNC_13(VAR_6, VAR_7);




 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
 {
  PrinttupAttrInfo *VAR_9 = VAR_4->myinfo + VAR_8;
  Datum VAR_10 = VAR_1->tts_values[VAR_8];

  if (VAR_1->tts_isnull[VAR_8])
  {
   FUNC_14(VAR_6, -1);
   continue;
  }
  if (VAR_9->typisvarlena)
   FUNC_5(FUNC_0(VAR_10),
            FUNC_8(VAR_10));

  if (VAR_9->format == 0)
  {

   char *VAR_11;

   VAR_11 = FUNC_3(&VAR_9->finfo, VAR_10);
   FUNC_12(VAR_6, VAR_11, FUNC_17(VAR_11), 0);
  }
  else
  {

   bytea *VAR_12;

   VAR_12 = FUNC_4(&VAR_9->finfo, VAR_10);
   FUNC_14(VAR_6, FUNC_7(VAR_12) - VAR_0);
   FUNC_11(VAR_6, FUNC_6(VAR_12),
       FUNC_7(VAR_12) - VAR_0);
  }
 }

 FUNC_10(VAR_6);


 FUNC_2(VAR_5);
 FUNC_1(VAR_4->tmpcontext);

 return 1;
}
