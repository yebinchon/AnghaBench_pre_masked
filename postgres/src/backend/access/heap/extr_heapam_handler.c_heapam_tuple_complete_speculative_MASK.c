
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int tts_tid; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int Relation ;
typedef int HeapTuple ;


 int FUNC_0 (TYPE_1__*,int,int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_0, TupleTableSlot *VAR_1,
          uint32 VAR_2, bool VAR_3)
{
 bool VAR_4 = 1;
 HeapTuple VAR_5 = FUNC_0(VAR_1, 1, &VAR_4);


 if (VAR_3)
  FUNC_2(VAR_0, &VAR_1->tts_tid);
 else
  FUNC_1(VAR_0, &VAR_1->tts_tid);

 if (VAR_4)
  FUNC_3(VAR_5);
}
