
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct tcp_pcb {int dummy; } ;
struct TYPE_3__ {int addr; } ;
struct ip_info {TYPE_1__ ip; } ;
struct TYPE_4__ {scalar_t__ lastStationStatus; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct tcp_pcb*,char*,int) ;
 char* VAR_1 ;
 int FUNC_4 (char*,char const*,...) ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct ip_info*) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9 (struct tcp_pcb *VAR_3)
{
  FUNC_0("enduser_setup_serve_status_as_json");


  uint8_t VAR_4 = VAR_2->lastStationStatus > 0 ? VAR_2->lastStationStatus : FUNC_8 ();

  char VAR_5[64];

  struct ip_info VAR_6;

  if (VAR_4 == 5)
  {
    FUNC_7(VAR_0 , &VAR_6);

    if (FUNC_5(VAR_1) == 0)
    {
      FUNC_4(VAR_1, "%d.%d.%d.%d", FUNC_1(&VAR_6.ip.addr));
    }
    FUNC_4(VAR_5, "{\"deviceid\":\"%s\", \"status\":%d}", VAR_1, VAR_4);
  }
  else
  {
    FUNC_4(VAR_5, "{\"deviceid\":\"%06X\", \"status\":%d}", FUNC_6(), VAR_4);
  }

  const char VAR_7[] =
    "HTTP/1.1 200 OK\r\n"
    "Cache-Control: no-cache\r\n"
    "Connection: close\r\n"
    "Access-Control-Allow-Origin: *\r\n"
    "Content-Type: application/json\r\n"
    "Content-Length: %d\r\n"
    "\r\n"
    "%s";

  int VAR_8 = FUNC_5(VAR_5);
  char VAR_9[FUNC_5(VAR_7) + FUNC_2(VAR_8) + VAR_8 - 4];
  VAR_8 = FUNC_4 (VAR_9, VAR_7, VAR_8, VAR_5);
  FUNC_3 (VAR_3, VAR_9, VAR_8);
}
