
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct rtc_timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct pbuf {int payload; } ;
typedef int req ;
struct TYPE_9__ {void* frac; void* sec; } ;
struct TYPE_10__ {int ver; int mode; TYPE_1__ xmit; } ;
typedef TYPE_2__ ntp_frame_t ;
struct TYPE_12__ {size_t server_pos; int kodbits; int attempts; int timer; int pcb; TYPE_1__ cookie; } ;
struct TYPE_11__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 unsigned long const FUNC_1 (int ) ;
 int FUNC_2 (struct rtc_timeval*) ;
 void* FUNC_3 (unsigned long const) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int *) ;
 struct pbuf* FUNC_10 (int ,int,int ) ;
 int FUNC_11 (struct pbuf*) ;
 int FUNC_12 (struct rtc_timeval*) ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_13 (char*,int,...) ;
 TYPE_4__* VAR_10 ;
 unsigned long const FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_11 ;
 unsigned long const VAR_12 ;
 int FUNC_17 (int ,struct pbuf*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_18 ()
{
  do {
    if (VAR_10->server_pos < 0) {
      FUNC_8(&VAR_10->timer);
      FUNC_9(&VAR_10->timer, VAR_7, ((void*)0));
      FUNC_0(VAR_7, VAR_6);


      VAR_10->server_pos = 0;
    } else {
      ++VAR_10->server_pos;
    }

    if (VAR_10->server_pos >= VAR_8) {
      VAR_10->server_pos = 0;
      ++VAR_10->attempts;
    }

    if (VAR_10->attempts >= VAR_0 || VAR_10->attempts * VAR_8 >= 8) {
      FUNC_15(VAR_11, VAR_5);
      return;
    }
  } while (VAR_9[VAR_10->server_pos].addr == 0 || (VAR_10->kodbits & (1 << VAR_10->server_pos)));

  FUNC_13("sntp: server %s (%d), attempt %d\n", FUNC_4(VAR_9 + VAR_10->server_pos), VAR_10->server_pos, VAR_10->attempts);

  struct pbuf *VAR_13 = FUNC_10 (VAR_4, sizeof (ntp_frame_t), VAR_3);
  if (!VAR_13) {
    FUNC_16(VAR_11, VAR_1);
    return;
  }

  ntp_frame_t VAR_14;
  FUNC_6 (&VAR_14, 0, sizeof (VAR_14));
  VAR_14.ver = 4;
  VAR_14.mode = 3;
  VAR_14.xmit.frac = FUNC_3 (FUNC_14 ());

  VAR_10->cookie = VAR_14.xmit;

  FUNC_5 (VAR_13->payload, &VAR_14, sizeof (VAR_14));
  int VAR_15 = FUNC_17 (VAR_10->pcb, VAR_13, VAR_9 + VAR_10->server_pos, VAR_2);
  FUNC_13("sntp: send: %d\n", VAR_15);
  FUNC_11 (VAR_13);



  FUNC_7 (&VAR_10->timer, 1000, 0);
}
