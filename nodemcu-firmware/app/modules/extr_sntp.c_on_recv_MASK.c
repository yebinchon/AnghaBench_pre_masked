
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct udp_pcb {int dummy; } ;
struct rtc_timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct pbuf {int len; int payload; } ;
struct ip_addr {scalar_t__ addr; } ;
struct TYPE_16__ {int sec; scalar_t__ frac; } ;
typedef TYPE_5__ ntp_timestamp_t ;
struct TYPE_15__ {scalar_t__ sec; scalar_t__ frac; } ;
struct TYPE_14__ {int sec; int frac; } ;
struct TYPE_13__ {int sec; int frac; } ;
struct TYPE_17__ {int LI; int root_dispersion; int root_delay; TYPE_4__ origin; int stratum; TYPE_3__ xmit; TYPE_2__ recv; int refid; } ;
typedef TYPE_6__ ntp_frame_t ;
typedef int ntp ;
struct TYPE_18__ {scalar_t__ addr; } ;
typedef TYPE_7__ ip_addr_t ;
typedef int int64_t ;
struct TYPE_20__ {scalar_t__ addr; } ;
struct TYPE_12__ {scalar_t__ sec; scalar_t__ frac; } ;
struct TYPE_19__ {size_t server_pos; int kodbits; int last_server_pos; int timer; TYPE_1__ cookie; struct udp_pcb* pcb; } ;


 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rtc_timeval*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pbuf*) ;
 int VAR_0 ;
 int FUNC_8 (int,struct ip_addr*,int,int ,int,int,int,int,int) ;
 int FUNC_9 (struct rtc_timeval*) ;
 TYPE_9__* VAR_1 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;
 TYPE_8__* VAR_2 ;
 int FUNC_12 () ;
 int const VAR_3 ;
 int FUNC_13 (struct udp_pcb*) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15 (void *VAR_4, struct udp_pcb *VAR_5, struct pbuf *VAR_6, struct ip_addr *VAR_7, uint16_t VAR_8)
{
  (void)VAR_8;
  FUNC_10("sntp: on_recv\n");

  if (!VAR_2 || VAR_2->pcb != VAR_5)
  {

    FUNC_13 (VAR_5);
    FUNC_7 (VAR_6);
    return;
  }

  if (!VAR_6)
    return;

  if (VAR_6->len < sizeof (ntp_frame_t))
  {
    FUNC_7 (VAR_6);
    return;
  }


  ntp_frame_t VAR_9;
  FUNC_5 (&VAR_9, VAR_6->payload, sizeof (VAR_9));
  FUNC_7 (VAR_6);
  FUNC_10("sntp: transmit timestamp: %u, %u\n", VAR_9.xmit.sec, VAR_9.xmit.frac);


  ip_addr_t VAR_10;
  FUNC_0(&VAR_10);
  if (VAR_1[VAR_2->server_pos].addr != VAR_10.addr && VAR_1[VAR_2->server_pos].addr != VAR_7->addr)
    return;

  if (VAR_9.origin.sec != VAR_2->cookie.sec ||
      VAR_9.origin.frac != VAR_2->cookie.frac)
    return;

  if (VAR_9.LI == 3) {
    if (FUNC_3(&VAR_9.refid, "DENY", 4) == 0) {

      if (VAR_2->kodbits & (1 << VAR_2->server_pos)) {

        VAR_1[VAR_2->server_pos].addr = 0;
      } else {
        VAR_2->kodbits |= (1 << VAR_2->server_pos);
      }
    }
    return;
  }


  VAR_2->kodbits &= ~(1 << VAR_2->server_pos);

  FUNC_6(&VAR_2->timer);

  if (VAR_9.LI) {
    VAR_0 = VAR_9.LI;
  }

  FUNC_14();

  VAR_9.origin.sec = FUNC_4 (VAR_9.origin.sec);
  VAR_9.origin.frac = FUNC_4 (VAR_9.origin.frac);
  VAR_9.recv.sec = FUNC_4 (VAR_9.recv.sec);
  VAR_9.recv.frac = FUNC_4 (VAR_9.recv.frac);
  VAR_9.xmit.sec = FUNC_4 (VAR_9.xmit.sec);
  VAR_9.xmit.frac = FUNC_4 (VAR_9.xmit.frac);

  const uint64_t VAR_11 = 1000000ull;
  const uint32_t VAR_12 = 2208988800ul;

  uint32_t VAR_13 = FUNC_4(VAR_9.root_dispersion) + FUNC_4(VAR_9.root_delay) / 2;

  bool VAR_14 = VAR_2->server_pos == VAR_2->last_server_pos;
  uint64_t VAR_15 = (((uint64_t) VAR_9.xmit.sec - VAR_12) << 32) + (uint64_t) VAR_9.xmit.frac;
  FUNC_8(VAR_14, VAR_7, VAR_15, VAR_9.stratum, VAR_9.LI, (((int64_t) (FUNC_12() - VAR_9.origin.frac)) << 16) / VAR_11, VAR_13, FUNC_4(VAR_9.root_dispersion), FUNC_4(VAR_9.root_delay));


  FUNC_11();
}
