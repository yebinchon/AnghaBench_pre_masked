
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* tts_isnull; int * tts_values; TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_12__ {int nattrs; int tmpcontext; TYPE_3__* myinfo; TYPE_2__* attrinfo; int buf; } ;
struct TYPE_11__ {scalar_t__ format; int finfo; } ;
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
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static bool
FUNC_11(TupleTableSlot *VAR_0, DestReceiver *VAR_1)
{
 TupleDesc VAR_2 = VAR_0->tts_tupleDescriptor;
 DR_printtup *VAR_3 = (DR_printtup *) VAR_1;
 MemoryContext VAR_4;
 StringInfo VAR_5 = &VAR_3->buf;
 int VAR_6 = VAR_2->natts;
 int VAR_7,
    VAR_8,
    VAR_9;


 if (VAR_3->attrinfo != VAR_2 || VAR_3->nattrs != VAR_6)
  FUNC_8(VAR_3, VAR_2, VAR_6);


 FUNC_9(VAR_0);


 VAR_4 = FUNC_2(VAR_3->tmpcontext);




 FUNC_4(VAR_5, 'D');




 VAR_8 = 0;
 VAR_9 = 1 << 7;
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
 {
  if (!VAR_0->tts_isnull[VAR_7])
   VAR_8 |= VAR_9;
  VAR_9 >>= 1;
  if (VAR_9 == 0)
  {
   FUNC_7(VAR_5, VAR_8);
   VAR_8 = 0;
   VAR_9 = 1 << 7;
  }
 }
 if (VAR_9 != (1 << 7))
  FUNC_7(VAR_5, VAR_8);




 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
 {
  PrinttupAttrInfo *VAR_10 = VAR_3->myinfo + VAR_7;
  Datum VAR_11 = VAR_0->tts_values[VAR_7];
  char *VAR_12;

  if (VAR_0->tts_isnull[VAR_7])
   continue;

  FUNC_0(VAR_10->format == 0);

  VAR_12 = FUNC_3(&VAR_10->finfo, VAR_11);
  FUNC_6(VAR_5, VAR_12, FUNC_10(VAR_12), 1);
 }

 FUNC_5(VAR_5);


 FUNC_2(VAR_4);
 FUNC_1(VAR_3->tmpcontext);

 return 1;
}
