
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_10__ {int bloomLength; } ;
struct TYPE_15__ {TYPE_1__ opts; } ;
struct TYPE_14__ {int* sign; TYPE_6__ state; } ;
struct TYPE_13__ {int* sign; int heapPtr; } ;
struct TYPE_12__ {int numberOfKeys; int indexRelation; int xs_snapshot; TYPE_2__* keyData; int opaque; } ;
struct TYPE_11__ {int sk_flags; scalar_t__ sk_attno; int sk_argument; } ;
typedef int TIDBitmap ;
typedef TYPE_2__* ScanKey ;
typedef int Page ;
typedef int OffsetNumber ;
typedef TYPE_3__* IndexScanDesc ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef TYPE_4__ BloomTuple ;
typedef int BloomSignatureWord ;
typedef TYPE_5__* BloomScanOpaque ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int* FUNC_13 (int) ;
 int FUNC_14 (int*) ;
 int FUNC_15 (TYPE_6__*,int*,int ,scalar_t__) ;
 int FUNC_16 (int *,int *,int,int) ;

int64
FUNC_17(IndexScanDesc VAR_6, TIDBitmap *VAR_7)
{
 int64 VAR_8 = 0;
 BlockNumber VAR_9 = VAR_1,
    VAR_10;
 int VAR_11;
 BufferAccessStrategy VAR_12;
 BloomScanOpaque VAR_13 = (BloomScanOpaque) VAR_6->opaque;

 if (VAR_13->sign == ((void*)0))
 {

  ScanKey VAR_14 = VAR_6->keyData;

  VAR_13->sign = FUNC_13(sizeof(BloomSignatureWord) * VAR_13->state.opts.bloomLength);

  for (VAR_11 = 0; VAR_11 < VAR_6->numberOfKeys; VAR_11++)
  {




   if (VAR_14->sk_flags & VAR_5)
   {
    FUNC_14(VAR_13->sign);
    VAR_13->sign = ((void*)0);
    return 0;
   }


   FUNC_15(&VAR_13->state, VAR_13->sign, VAR_14->sk_argument,
       VAR_14->sk_attno - 1);

   VAR_14++;
  }
 }





 VAR_12 = FUNC_6(VAR_0);
 VAR_10 = FUNC_10(VAR_6->indexRelation);

 for (VAR_9 = VAR_1; VAR_9 < VAR_10; VAR_9++)
 {
  Buffer VAR_15;
  Page VAR_16;

  VAR_15 = FUNC_9(VAR_6->indexRelation, VAR_3,
         VAR_9, VAR_4, VAR_12);

  FUNC_7(VAR_15, VAR_2);
  VAR_16 = FUNC_3(VAR_15);
  FUNC_11(VAR_6->xs_snapshot, VAR_6->indexRelation, VAR_16);

  if (!FUNC_8(VAR_16) && !FUNC_2(VAR_16))
  {
   OffsetNumber VAR_17,
      VAR_18 = FUNC_0(VAR_16);

   for (VAR_17 = 1; VAR_17 <= VAR_18; VAR_17++)
   {
    BloomTuple *VAR_19 = FUNC_1(&VAR_13->state, VAR_16, VAR_17);
    bool VAR_20 = 1;


    for (VAR_11 = 0; VAR_11 < VAR_13->state.opts.bloomLength; VAR_11++)
    {
     if ((VAR_19->sign[VAR_11] & VAR_13->sign[VAR_11]) != VAR_13->sign[VAR_11])
     {
      VAR_20 = 0;
      break;
     }
    }


    if (VAR_20)
    {
     FUNC_16(VAR_7, &VAR_19->heapPtr, 1, 1);
     VAR_8++;
    }
   }
  }

  FUNC_12(VAR_15);
  FUNC_4();
 }
 FUNC_5(VAR_12);

 return VAR_8;
}
