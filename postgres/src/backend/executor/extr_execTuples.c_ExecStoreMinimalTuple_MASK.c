
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef int * MinimalTuple ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_4 (int) ;

TupleTableSlot *
FUNC_5(MinimalTuple VAR_1,
       TupleTableSlot *VAR_2,
       bool VAR_3)
{



 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->tts_tupleDescriptor != ((void*)0));

 if (FUNC_4(!FUNC_1(VAR_2)))
  FUNC_2(VAR_0, "trying to store a minimal tuple into wrong type of slot");
 FUNC_3(VAR_2, VAR_1, VAR_3);

 return VAR_2;
}
