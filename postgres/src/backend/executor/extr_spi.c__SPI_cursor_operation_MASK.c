
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_6__ {int * tuptable; scalar_t__ processed; } ;
struct TYPE_5__ {scalar_t__ mydest; } ;
typedef int Portal ;
typedef int FetchDirection ;
typedef TYPE_1__ DestReceiver ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,long,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 TYPE_3__* VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(Portal VAR_5, FetchDirection VAR_6, long VAR_7,
       DestReceiver *VAR_8)
{
 uint64 VAR_9;


 if (!FUNC_0(VAR_5))
  FUNC_5(VAR_1, "invalid portal in SPI cursor operation");


 if (FUNC_2(1) < 0)
  FUNC_5(VAR_1, "SPI cursor operation called while not connected");


 VAR_2 = 0;
 VAR_3 = ((void*)0);
 VAR_4->processed = 0;
 VAR_4->tuptable = ((void*)0);


 VAR_9 = FUNC_1(VAR_5,
         VAR_6,
         VAR_7,
         VAR_8);
 VAR_4->processed = VAR_9;

 if (VAR_8->mydest == VAR_0 && FUNC_3())
  FUNC_5(VAR_1, "consistency check on SPI tuple count failed");


 VAR_2 = VAR_4->processed;
 VAR_3 = VAR_4->tuptable;


 VAR_4->tuptable = ((void*)0);


 FUNC_4(1);
}
