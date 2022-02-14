
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_pcb {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tcp_pcb*,char const*,int ) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4 (struct tcp_pcb *VAR_0, char *VAR_1, unsigned short VAR_2)
{
  FUNC_0("enduser_setup_handle_OPTIONS");

  const char VAR_3[] =
    "HTTP/1.1 200 OK\r\n"
    "Cache-Control: no-cache\r\n"
    "Connection: close\r\n"
    "Content-Type: application/json\r\n"
    "Content-Length: 0\r\n"
    "Access-Control-Allow-Origin: *\r\n"
    "Access-Control-Allow-Methods: GET\r\n"
    "Access-Control-Allow-Age: 300\r\n"
    "\r\n";

  const char VAR_4[] =
    "HTTP/1.1 200 OK\r\n"
    "Cache-Control: no-cache\r\n"
    "Connection: close\r\n"
    "Content-Length: 0\r\n"
    "\r\n";

  int VAR_5 = 0;

  if (FUNC_3(VAR_1, "GET ", 4) == 0)
  {
    if (FUNC_3(VAR_1 + 4, "/aplist", 7) == 0 || FUNC_3(VAR_1 + 4, "/setwifi?", 9) == 0 || FUNC_3(VAR_1 + 4, "/status.json", 12) == 0)
    {
      FUNC_1 (VAR_0, VAR_3, FUNC_2(VAR_3));
      return;
   }
  }
  FUNC_1 (VAR_0, VAR_4, FUNC_2(VAR_4));
  return;
}
