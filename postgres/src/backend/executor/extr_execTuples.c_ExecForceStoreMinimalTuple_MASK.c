
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int tts_isnull; int tts_values; int tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
struct TYPE_16__ {char* t_len; scalar_t__ t_data; } ;
struct TYPE_15__ {int t_len; } ;
typedef TYPE_2__* MinimalTuple ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_3__ HeapTupleData ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int) ;

void
FUNC_7(MinimalTuple VAR_1,
         TupleTableSlot *VAR_2,
         bool VAR_3)
{
 if (FUNC_3(VAR_2))
 {
  FUNC_6(VAR_2, VAR_1, VAR_3);
 }
 else
 {
  HeapTupleData VAR_4;

  FUNC_0(VAR_2);

  VAR_4.t_len = VAR_1->t_len + VAR_0;
  VAR_4.t_data = (HeapTupleHeader) ((char *) VAR_1 - VAR_0);
  FUNC_4(&VAR_4, VAR_2->tts_tupleDescriptor,
        VAR_2->tts_values, VAR_2->tts_isnull);
  FUNC_2(VAR_2);

  if (VAR_3)
  {
   FUNC_1(VAR_2);
   FUNC_5(VAR_1);
  }
 }
}
