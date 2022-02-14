
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int TupleTableSlot ;
struct TYPE_9__ {int (* rShutdown ) (TYPE_2__*) ;int (* receiveSlot ) (int *,TYPE_2__*) ;int (* rStartup ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_8__ {int holdStore; int holdContext; int tupDesc; } ;
typedef int ScanDirection ;
typedef TYPE_1__* Portal ;
typedef int MemoryContext ;
typedef TYPE_2__ DestReceiver ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int,int,int *) ;

__attribute__((used)) static uint64
FUNC_10(Portal VAR_2, ScanDirection VAR_3, uint64 VAR_4,
    DestReceiver *VAR_5)
{
 uint64 VAR_6 = 0;
 TupleTableSlot *VAR_7;

 VAR_7 = FUNC_2(VAR_2->tupDesc, &VAR_1);

 VAR_5->rStartup(VAR_5, VAR_0, VAR_2->tupDesc);

 if (FUNC_5(VAR_3))
 {

 }
 else
 {
  bool VAR_8 = FUNC_4(VAR_3);

  for (;;)
  {
   MemoryContext VAR_9;
   bool VAR_10;

   VAR_9 = FUNC_3(VAR_2->holdContext);

   VAR_10 = FUNC_9(VAR_2->holdStore, VAR_8, 0,
           VAR_7);

   FUNC_3(VAR_9);

   if (!VAR_10)
    break;






   if (!VAR_5->receiveSlot(VAR_7, VAR_5))
    break;

   FUNC_0(VAR_7);






   VAR_6++;
   if (VAR_4 && VAR_4 == VAR_6)
    break;
  }
 }

 VAR_5->rShutdown(VAR_5);

 FUNC_1(VAR_7);

 return VAR_6;
}
