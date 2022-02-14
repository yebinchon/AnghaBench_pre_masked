
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int servaddr ;
typedef TYPE_2__* adns_state ;
typedef TYPE_3__* adns_query ;
struct TYPE_11__ {scalar_t__ state; int flags; scalar_t__ retries; int udpnextserver; int udpsent; struct timeval timeout; int query_dglen; scalar_t__ query_dgram; TYPE_2__* ads; } ;
struct TYPE_10__ {int nservers; int udpw; int udpsocket; TYPE_1__* servers; } ;
struct TYPE_9__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int ,char*,int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (TYPE_3__*,struct timeval) ;
 int FUNC_7 (int ,char*,int ,int ,struct sockaddr const*,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct timeval*,int ) ;

void FUNC_10(adns_query VAR_14, struct timeval VAR_15) {
  struct sockaddr_in VAR_16;
  int VAR_17, VAR_18;
  adns_state VAR_19;

  FUNC_3(VAR_14->state == VAR_13);
  if ((VAR_14->flags & VAR_10) || (VAR_14->query_dglen > VAR_3)) {
    FUNC_6(VAR_14,VAR_15);
    return;
  }

  if (VAR_14->retries >= VAR_8) {
    FUNC_1(VAR_14,VAR_11);
    return;
  }

  VAR_17= VAR_14->udpnextserver;
  FUNC_5(&VAR_16,0,sizeof(VAR_16));

  VAR_19= VAR_14->ads;
  VAR_16.sin_family= VAR_2;
  VAR_16.sin_addr= VAR_19->servers[VAR_17].addr;
  VAR_16.sin_port= FUNC_4(VAR_4);

  VAR_1;
  VAR_18= FUNC_7(VAR_19->udpsocket,(char*)VAR_14->query_dgram,VAR_14->query_dglen,0,
     (const struct sockaddr*)&VAR_16,sizeof(VAR_16));
  VAR_0;
  if (VAR_18<0 && VAR_12 == VAR_6) { VAR_14->retries= 0; FUNC_6(VAR_14,VAR_15); return; }
  if (VAR_18<0 && ((VAR_12 != VAR_5) && (VAR_12 != VAR_7))) FUNC_2(VAR_19,VAR_17,0,"sendto failed: %s (%d)",FUNC_8(VAR_12), VAR_12);

  VAR_14->timeout= VAR_15;
  FUNC_9(&VAR_14->timeout,VAR_9);
  VAR_14->udpsent |= (1<<VAR_17);
  VAR_14->udpnextserver= (VAR_17+1)%VAR_19->nservers;
  VAR_14->retries++;
  FUNC_0(VAR_19->udpw,VAR_14);
}
