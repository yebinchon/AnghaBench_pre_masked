
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int byte ;
typedef TYPE_2__* adns_state ;
typedef TYPE_3__* adns_query ;
struct TYPE_13__ {scalar_t__ used; } ;
struct TYPE_12__ {scalar_t__ state; int query_dglen; int* query_dgram; TYPE_2__* ads; int retries; } ;
struct TYPE_10__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_11__ {scalar_t__ tcpstate; TYPE_4__ tcpsend; int tcpsocket; TYPE_1__ tcptimeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_4__*,int*,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,struct iovec*,int) ;

void FUNC_8(adns_query VAR_11, struct timeval VAR_12) {
  byte VAR_13[2];
  struct iovec VAR_14[2];
  int VAR_15, VAR_16;
  adns_state VAR_17;

  if (VAR_11->ads->tcpstate != VAR_10) return;

  FUNC_5(VAR_11->state == VAR_9);

  VAR_13[0]= (VAR_11->query_dglen&0x0ff00U) >>8;
  VAR_13[1]= (VAR_11->query_dglen&0x0ff);

  VAR_17= VAR_11->ads;
  if (!FUNC_4(&VAR_17->tcpsend,VAR_17->tcpsend.used+VAR_11->query_dglen+2)) return;

  VAR_11->retries++;


  VAR_17->tcptimeout.tv_sec= VAR_17->tcptimeout.tv_usec= 0;

  if (VAR_17->tcpsend.used) {
    VAR_15= 0;
  } else {
    VAR_14[0].iov_base= (char*)VAR_13;
    VAR_14[0].iov_len= 2;
    VAR_14[1].iov_base= (char*)VAR_11->query_dgram;
    VAR_14[1].iov_len= VAR_11->query_dglen;
    FUNC_0(VAR_11->ads);

    VAR_1;
    VAR_15= FUNC_7(VAR_11->ads->tcpsocket,VAR_14,2);
    VAR_0;
    FUNC_1(VAR_11->ads);
    if (VAR_15 < 0) {
      if (!(VAR_8 == VAR_2 || VAR_8 == VAR_7 || VAR_8 == VAR_3 || VAR_8 == VAR_6 ||
     VAR_8 == VAR_4 || VAR_8 == VAR_5)) {
 FUNC_2(VAR_17,"write",FUNC_6(VAR_8));
 return;
      }
      VAR_15= 0;
    }
  }

  if (VAR_15<2) {
    VAR_16= FUNC_3(&VAR_17->tcpsend,VAR_13,2-VAR_15); FUNC_5(VAR_16);
    VAR_15= 0;
  } else {
    VAR_15-= 2;
  }
  if (VAR_15<VAR_11->query_dglen) {
    VAR_16= FUNC_3(&VAR_17->tcpsend,VAR_11->query_dgram+VAR_15,VAR_11->query_dglen-VAR_15); FUNC_5(VAR_16);
  }
}
