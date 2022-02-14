
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int addr; } ;
struct ip_info {TYPE_1__ ip; } ;
struct TYPE_4__ {int softAPchannel; int lastStationStatus; int success; int callbackDone; int shutdown_timer; scalar_t__ connecting; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct ip_info*,int ,int) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (char*,char*,int,...) ;
 TYPE_2__* VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,struct ip_info*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(void *VAR_8)
{
  FUNC_0("enduser_setup_check_station");

  (void)VAR_8;
  struct ip_info VAR_9;
  FUNC_6(&VAR_9, 0, sizeof(struct ip_info));

  FUNC_11(VAR_2, &VAR_9);

  int VAR_10;
  char VAR_11 = 0;
  for (VAR_10 = 0; VAR_10 < sizeof(struct ip_info); ++VAR_10)
  {
    VAR_11 |= ((char *) &VAR_9)[VAR_10];
  }

  uint8_t VAR_12 = FUNC_10();

  if (VAR_11 == 0)
  {

    uint8_t VAR_13 = FUNC_14();
    char VAR_14[20];
    FUNC_9(VAR_14, "status=%d,chan=%d", VAR_13, VAR_12);
    FUNC_0(VAR_14);

    if (VAR_13 == 2 || VAR_13 == 3 || VAR_13 == 4)
    {
      VAR_7->connecting = 0;





      if (VAR_12 != VAR_7->softAPchannel) {
        VAR_7->lastStationStatus = VAR_13;

        FUNC_0("Turning off Station due to different channel than AP");

        FUNC_13();
        FUNC_12(VAR_1);
        FUNC_3();
      }
   }
   return;
  }

  FUNC_9 (VAR_5, "%d.%d.%d.%d", FUNC_1(&VAR_9.ip.addr));

  VAR_7->success = 1;
  VAR_7->lastStationStatus = 5;
  VAR_7->connecting = 0;







  if (VAR_12 == VAR_7->softAPchannel)
  {
    FUNC_5();
    VAR_7->callbackDone = 1;
  }
  else
  {
    FUNC_0("Turning off Station due to different channel than AP");
    FUNC_13();
    FUNC_12(VAR_1);
    FUNC_3();
  }

  FUNC_4();


  if (!VAR_6)
  {
    FUNC_8(&(VAR_7->shutdown_timer), VAR_4, ((void*)0));
    FUNC_2(VAR_4, VAR_3);


    FUNC_7(&(VAR_7->shutdown_timer), 10*1000, VAR_0);
  }
}
