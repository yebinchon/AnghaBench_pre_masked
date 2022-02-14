
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
struct TYPE_11__ {int format; int finfo; } ;
struct TYPE_10__ {int natts; } ;
typedef int * StringInfo ;
typedef TYPE_3__ PrinttupAttrInfo ;
typedef int MemoryContext ;
typedef int DestReceiver ;
typedef int Datum ;
typedef TYPE_4__ DR_printtup ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_13(TupleTableSlot *VAR_1, DestReceiver *VAR_2)
{
 TupleDesc VAR_3 = VAR_1->tts_tupleDescriptor;
 DR_printtup *VAR_4 = (DR_printtup *) VAR_2;
 MemoryContext VAR_5;
 StringInfo VAR_6 = &VAR_4->buf;
 int VAR_7 = VAR_3->natts;
 int VAR_8,
    VAR_9,
    VAR_10;


 if (VAR_4->attrinfo != VAR_3 || VAR_4->nattrs != VAR_7)
  FUNC_11(VAR_4, VAR_3, VAR_7);


 FUNC_12(VAR_1);


 VAR_5 = FUNC_2(VAR_4->tmpcontext);




 FUNC_6(VAR_6, 'B');




 VAR_9 = 0;
 VAR_10 = 1 << 7;
 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
 {
  if (!VAR_1->tts_isnull[VAR_8])
   VAR_9 |= VAR_10;
  VAR_10 >>= 1;
  if (VAR_10 == 0)
  {
   FUNC_10(VAR_6, VAR_9);
   VAR_9 = 0;
   VAR_10 = 1 << 7;
  }
 }
 if (VAR_10 != (1 << 7))
  FUNC_10(VAR_6, VAR_9);




 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
 {
  PrinttupAttrInfo *VAR_11 = VAR_4->myinfo + VAR_8;
  Datum VAR_12 = VAR_1->tts_values[VAR_8];
  bytea *VAR_13;

  if (VAR_1->tts_isnull[VAR_8])
   continue;

  FUNC_0(VAR_11->format == 1);

  VAR_13 = FUNC_3(&VAR_11->finfo, VAR_12);
  FUNC_9(VAR_6, FUNC_5(VAR_13) - VAR_0);
  FUNC_8(VAR_6, FUNC_4(VAR_13),
      FUNC_5(VAR_13) - VAR_0);
 }

 FUNC_7(VAR_6);


 FUNC_2(VAR_5);
 FUNC_1(VAR_4->tmpcontext);

 return 1;
}
