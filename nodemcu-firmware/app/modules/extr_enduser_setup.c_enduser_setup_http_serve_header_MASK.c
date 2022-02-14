
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcp_pcb {int dummy; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tcp_pcb*) ;
 scalar_t__ FUNC_3 (struct tcp_pcb*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tcp_pcb *VAR_4, const char *VAR_5, uint32_t VAR_6)
{
  FUNC_0("enduser_setup_http_serve_header");

  err_t VAR_7 = FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_3);
  if (VAR_7 != VAR_2)
  {
    FUNC_2 (VAR_4);
    FUNC_1("http_serve_header failed on tcp_write", VAR_1, VAR_0);
  }

  return 0;
}
