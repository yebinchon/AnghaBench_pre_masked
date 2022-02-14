
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int tts_flags; int tts_isnull; int tts_values; int tts_tupleDescriptor; scalar_t__ tts_nvalid; int tts_mcxt; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_13__ {int t_len; } ;
struct TYPE_10__ {char* t_len; scalar_t__ t_data; } ;
struct TYPE_12__ {TYPE_5__* mintuple; TYPE_1__ minhdr; TYPE_1__* tuple; scalar_t__ off; } ;
typedef TYPE_3__ MinimalTupleTableSlot ;
typedef int MemoryContext ;
typedef scalar_t__ HeapTupleHeader ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_5__* FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(TupleTableSlot *VAR_2)
{
 MinimalTupleTableSlot *VAR_3 = (MinimalTupleTableSlot *) VAR_2;
 MemoryContext VAR_4;

 FUNC_0(!FUNC_2(VAR_2));


 if (FUNC_3(VAR_2))
  return;

 VAR_4 = FUNC_1(VAR_2->tts_mcxt);





 VAR_2->tts_nvalid = 0;
 VAR_3->off = 0;

 if (!VAR_3->mintuple)
 {
  VAR_3->mintuple = FUNC_5(VAR_2->tts_tupleDescriptor,
              VAR_2->tts_values,
              VAR_2->tts_isnull);
 }
 else
 {





  VAR_3->mintuple = FUNC_4(VAR_3->mintuple);
 }

 VAR_2->tts_flags |= VAR_1;

 FUNC_0(VAR_3->tuple == &VAR_3->minhdr);

 VAR_3->minhdr.t_len = VAR_3->mintuple->t_len + VAR_0;
 VAR_3->minhdr.t_data = (HeapTupleHeader) ((char *) VAR_3->mintuple - VAR_0);

 FUNC_1(VAR_4);
}
