
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tts_tupleDescriptor; } ;
typedef TYPE_2__ TupleTableSlot ;
struct TYPE_5__ {int natts; } ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static bool
FUNC_1(TupleTableSlot *VAR_0)
{
 int VAR_1 = VAR_0->tts_tupleDescriptor->natts;
 int VAR_2;

 for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++)
 {
  if (!FUNC_0(VAR_0, VAR_2))
   return 0;
 }
 return 1;
}
