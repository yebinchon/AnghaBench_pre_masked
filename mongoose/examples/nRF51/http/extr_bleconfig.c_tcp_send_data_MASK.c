
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
struct tcp_pcb {int dummy; } ;
typedef scalar_t__ err_t ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct tcp_pcb*,int ) ;
 scalar_t__ FUNC_2 (struct tcp_pcb*,char*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct tcp_pcb * VAR_5, uint32_t VAR_6)
{
  err_t VAR_7 = VAR_0;

  if (VAR_3 != VAR_2)
  {

    FUNC_1(VAR_5, VAR_4);
    uint8_t VAR_8[VAR_1];

    VAR_8[0] = (uint8_t )((VAR_6 >> 24) & 0x000000FF);
    VAR_8[1] = (uint8_t )((VAR_6 >> 16) & 0x000000FF);
    VAR_8[2] = (uint8_t )((VAR_6 >> 8) & 0x000000FF);
    VAR_8[3] = (uint8_t )(VAR_6 & 0x000000FF);

    VAR_8[4] = 'P';
    VAR_8[5] = 'o';
    VAR_8[6] = 'n';
    VAR_8[7] = 'g';


    VAR_7 = FUNC_2(VAR_5, VAR_8, VAR_1, 1);

    if (VAR_7 != VAR_0)
    {
      FUNC_0 ("[APPL]: Failed to send TCP packet, reason %d\r\n", VAR_7);
    }
    else
    {
      VAR_3 = VAR_2;
    }
  }
  else
  {

  }
}
