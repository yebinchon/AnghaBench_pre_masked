
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
struct pbuf {scalar_t__ tot_len; } ;
struct TYPE_6__ {struct tcp_pcb* conn; struct TYPE_6__* next; } ;
typedef TYPE_1__ scan_listener_t ;
typedef scalar_t__ err_t ;
struct TYPE_7__ {scalar_t__ connecting; TYPE_1__* scan_listeners; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct tcp_pcb*) ;
 int FUNC_5 (struct tcp_pcb*,char*,unsigned int) ;
 int FUNC_6 (struct tcp_pcb*,char*,unsigned int) ;
 int FUNC_7 (char*,unsigned int) ;
 int FUNC_8 (struct tcp_pcb*,int ,int ) ;
 scalar_t__ FUNC_9 (struct tcp_pcb*) ;
 int FUNC_10 (struct tcp_pcb*) ;
 int FUNC_11 (struct tcp_pcb*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_14 (int) ;
 int VAR_12 ;
 unsigned int FUNC_15 (struct pbuf*,char*,scalar_t__,int ) ;
 int FUNC_16 (struct pbuf*) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_3__* VAR_13 ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 int FUNC_19 (struct tcp_pcb*) ;
 int FUNC_20 (struct tcp_pcb*,TYPE_1__*) ;
 int FUNC_21 (struct tcp_pcb*,scalar_t__) ;
 int FUNC_22 (int *,int ) ;

__attribute__((used)) static err_t FUNC_23(void *VAR_14, struct tcp_pcb *VAR_15, struct pbuf *VAR_16, err_t VAR_17)
{
  FUNC_0("enduser_setup_http_recvcb");

  if (!VAR_13 || VAR_17 != VAR_5)
  {
    if (!VAR_13)
      FUNC_0("ignoring received data while stopped");
    FUNC_19 (VAR_15);
    return VAR_3;
  }

  if (!VAR_16)
  {
    FUNC_0("connection closed");
    scan_listener_t *VAR_18 = VAR_14;
    if (VAR_18)
      FUNC_17 (VAR_18);

    FUNC_4 (VAR_15);
    return VAR_5;
  }

  char *VAR_19 = FUNC_3 (1, VAR_16->tot_len + 1);
  if (!VAR_19)
    return VAR_4;

  unsigned VAR_20 = FUNC_15 (VAR_16, VAR_19, VAR_16->tot_len, 0);
  FUNC_21 (VAR_15, VAR_16->tot_len);
  FUNC_16 (VAR_16);

  err_t VAR_21 = VAR_5;





  if (FUNC_18(VAR_19, "GET ", 4) == 0)
  {
    if (FUNC_18(VAR_19 + 4, "/ ", 2) == 0 || FUNC_18(VAR_19 + 4, "/?", 2) == 0)
    {
      if (FUNC_9(VAR_15) != 0)
      {
        FUNC_1("http_recvcb failed. Unable to send HTML.", VAR_2, VAR_0);
      }
      else
      {
        goto free_out;
      }
    }
    else if (FUNC_18(VAR_19 + 4, "/aplist", 7) == 0)
    {

      if (VAR_13->connecting == 0)
      {
        scan_listener_t *VAR_22 = FUNC_14 (sizeof (scan_listener_t));
        if (!VAR_22)
        {
          FUNC_1("out of memory", VAR_1, VAR_0);
        }

        bool VAR_23 = (VAR_13->scan_listeners != ((void*)0));

        FUNC_20 (VAR_15, VAR_22);

        VAR_22->conn = VAR_15;
        VAR_22->next = VAR_13->scan_listeners;
        VAR_13->scan_listeners = VAR_22;

        if (!VAR_23)
        {
          if (!FUNC_22(((void*)0), VAR_12))
          {
            FUNC_8(VAR_15, VAR_11, FUNC_2(VAR_11));
            FUNC_4 (VAR_22->conn);
            VAR_22->conn = 0;
            FUNC_13();
          }
        }
        goto free_out;
      }
      else
      {

        FUNC_8(VAR_15, VAR_6, FUNC_2(VAR_6));
      }
    }
    else if (FUNC_18(VAR_19 + 4, "/status.json", 12) == 0)
    {
    FUNC_11(VAR_15);
    }
    else if (FUNC_18(VAR_19 + 4, "/status", 7) == 0)
    {
      FUNC_10(VAR_15);
    }

    else if (FUNC_18(VAR_19 + 4, "/update?", 8) == 0)
    {
      switch (FUNC_7(VAR_19, VAR_20))
      {
        case 0:
          FUNC_8(VAR_15, VAR_7, FUNC_2(VAR_7));
          break;
        case 1:
          FUNC_8(VAR_15, VAR_8, FUNC_2(VAR_8));
          break;
        default:
          FUNC_1("http_recvcb failed. Failed to handle wifi credentials.", VAR_2, VAR_0);
          break;
      }
    }
    else if (FUNC_18(VAR_19 + 4, "/generate_204", 13) == 0)
    {

      FUNC_8(VAR_15, VAR_6, FUNC_2(VAR_6));
    }
    else
    {
      FUNC_0("serving 404");
      FUNC_8(VAR_15, VAR_9, FUNC_2(VAR_9));
    }
  }
  else if (FUNC_18(VAR_19, "OPTIONS ", 8) == 0)
  {
     FUNC_5(VAR_15, VAR_19, VAR_20);
  }
  else if (FUNC_18(VAR_19, "POST ", 5) == 0)
  {
    FUNC_6(VAR_15, VAR_19, VAR_20);
  }
  else
  {
    FUNC_8(VAR_15, VAR_10, FUNC_2(VAR_10));
  }

  FUNC_4 (VAR_15);

free_out:
  FUNC_12 (VAR_19);
  return VAR_21;
}
