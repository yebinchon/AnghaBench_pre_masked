
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tcp_pcb {int dummy; } ;
struct pbuf {int* payload; scalar_t__ len; int tot_len; } ;
typedef scalar_t__ err_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct pbuf*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tcp_pcb*,int ) ;
 int FUNC_7 (struct tcp_pcb*,int) ;

err_t FUNC_8(void * VAR_8,
    struct tcp_pcb * VAR_9,
    struct pbuf * VAR_10,
    err_t VAR_11)
{
  FUNC_0 ("[APPL]: >> TCP Data.\r\n");


  if (VAR_11 == VAR_5)
  {
    uint8_t *VAR_12 = VAR_10->payload;

    if (VAR_10->len == VAR_6)
    {
      uint32_t VAR_13 = 0;

      VAR_13 = ((VAR_12[0] << 24) & 0xFF000000);
      VAR_13 |= ((VAR_12[1] << 16) & 0x00FF0000);
      VAR_13 |= ((VAR_12[2] << 8) & 0x0000FF00);
      VAR_13 |= (VAR_12[3] & 0x000000FF);

      FUNC_1(VAR_0);

      if (VAR_13 & 0x00000001)
      {
        FUNC_2(VAR_1);
      }
      if (VAR_13 & 0x00000002)
      {
        FUNC_2(VAR_2);
      }
      if (VAR_13 & 0x00000004)
      {
        FUNC_2(VAR_3);
      }
      if (VAR_13 & 0x00000008)
      {
        FUNC_2(VAR_4);
      }


      FUNC_7(VAR_9, VAR_13);
    }
    else
    {
      FUNC_0 ("[APPL]: TCP data received in incorrect format.\r\n");
    }

    FUNC_6(VAR_9, VAR_10->tot_len);
    FUNC_3(FUNC_4(VAR_10));
  }
  else
  {

    if (VAR_10 != ((void*)0))
    {
      FUNC_3(FUNC_4(VAR_10));
    }


    FUNC_5(VAR_7);
  }

  return VAR_5;
}
