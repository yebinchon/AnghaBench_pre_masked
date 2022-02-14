
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* tts_tupleDescriptor; int tts_nvalid; int tts_flags; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_6__ {int natts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

TupleTableSlot *
FUNC_2(TupleTableSlot *VAR_1)
{



 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_1->tts_tupleDescriptor != ((void*)0));
 FUNC_0(FUNC_1(VAR_1));

 VAR_1->tts_flags &= ~VAR_0;
 VAR_1->tts_nvalid = VAR_1->tts_tupleDescriptor->natts;

 return VAR_1;
}
