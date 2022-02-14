
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int tts_flags; scalar_t__ tts_nvalid; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_13__ {int t_len; } ;
struct TYPE_10__ {char* t_len; scalar_t__ t_data; } ;
struct TYPE_12__ {TYPE_1__ minhdr; TYPE_1__* tuple; TYPE_4__* mintuple; scalar_t__ off; } ;
typedef TYPE_3__ MinimalTupleTableSlot ;
typedef TYPE_4__* MinimalTuple ;
typedef scalar_t__ HeapTupleHeader ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(TupleTableSlot *VAR_3, MinimalTuple VAR_4, bool VAR_5)
{
 MinimalTupleTableSlot *VAR_6 = (MinimalTupleTableSlot *) VAR_3;

 FUNC_3(VAR_3);

 FUNC_0(!FUNC_2(VAR_3));
 FUNC_0(FUNC_1(VAR_3));

 VAR_3->tts_flags &= ~VAR_1;
 VAR_3->tts_nvalid = 0;
 VAR_6->off = 0;

 VAR_6->mintuple = VAR_4;
 FUNC_0(VAR_6->tuple == &VAR_6->minhdr);
 VAR_6->minhdr.t_len = VAR_4->t_len + VAR_0;
 VAR_6->minhdr.t_data = (HeapTupleHeader) ((char *) VAR_4 - VAR_0);


 if (VAR_5)
  VAR_3->tts_flags |= VAR_2;
}
