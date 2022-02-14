
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int activitymsg ;
struct TYPE_4__ {scalar_t__ receivedUpto; scalar_t__ latestChunkStart; int mutex; int receivedTLI; } ;
typedef TYPE_1__ WalRcvData ;
struct TYPE_5__ {scalar_t__ Flush; scalar_t__ Write; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int,char*,int,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_10(bool VAR_6)
{
 if (VAR_0.Flush < VAR_0.Write)
 {
  WalRcvData *VAR_7 = VAR_2;

  FUNC_7(VAR_3, VAR_4);

  VAR_0.Flush = VAR_0.Write;


  FUNC_1(&VAR_7->mutex);
  if (VAR_7->receivedUpto < VAR_0.Flush)
  {
   VAR_7->latestChunkStart = VAR_7->receivedUpto;
   VAR_7->receivedUpto = VAR_0.Flush;
   VAR_7->receivedTLI = VAR_1;
  }
  FUNC_2(&VAR_7->mutex);


  FUNC_3();
  if (FUNC_0())
   FUNC_4();


  if (VAR_5)
  {
   char VAR_8[50];

   FUNC_9(VAR_8, sizeof(VAR_8), "streaming %X/%X",
      (uint32) (VAR_0.Write >> 32),
      (uint32) VAR_0.Write);
   FUNC_8(VAR_8, 0);
  }


  if (!VAR_6)
  {
   FUNC_6(0, 0);
   FUNC_5(0);
  }
 }
}
