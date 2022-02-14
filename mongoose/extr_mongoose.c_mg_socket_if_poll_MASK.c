
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct mg_mgr {scalar_t__* ctl; struct mg_connection* active_connections; } ;
struct mg_iface {struct mg_mgr* mgr; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct mg_connection {scalar_t__ sock; scalar_t__ recv_mbuf_limit; int flags; double ev_timer_time; struct mg_connection* next; int * listener; TYPE_2__ send_mbuf; TYPE_1__ recv_mbuf; } ;
typedef scalar_t__ sock_t ;
typedef int fd_set ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int *,scalar_t__*) ;
 int FUNC_6 (struct mg_connection*,int,double) ;
 int FUNC_7 (struct mg_mgr*) ;
 double FUNC_8 () ;
 int FUNC_9 (int,int *,int *,int *,struct timeval*) ;

time_t FUNC_10(struct mg_iface *VAR_8, int VAR_9) {
  struct mg_mgr *VAR_10 = VAR_8->mgr;
  double VAR_11 = FUNC_8();
  double VAR_12;
  struct mg_connection *VAR_13, *VAR_14;
  struct timeval VAR_15;
  fd_set VAR_16, VAR_17, VAR_18;
  sock_t VAR_19 = VAR_1;
  int VAR_20, VAR_21, VAR_22 = 0;

  int VAR_23 = 1;


  FUNC_2(&VAR_16);
  FUNC_2(&VAR_17);
  FUNC_2(&VAR_18);
  VAR_12 = 0;
  for (VAR_13 = VAR_10->active_connections, VAR_20 = 0; VAR_13 != ((void*)0); VAR_13 = VAR_14) {
    VAR_14 = VAR_13->next;

    if (VAR_13->sock != VAR_1) {
      VAR_20++;



      if (VAR_13->sock >= (sock_t) VAR_0 && VAR_23) {
        int VAR_24 = FUNC_4(VAR_13->sock);
        if (VAR_24 >= 0) {
          if (VAR_24 < (sock_t) VAR_0) {
            FUNC_3(VAR_13->sock);
            FUNC_0(("new sock %d -> %d", VAR_13->sock, VAR_24));
            VAR_13->sock = VAR_24;
          } else {
            FUNC_3(VAR_24);
            FUNC_0(("new sock is still larger than FD_SETSIZE, disregard"));
            VAR_23 = 0;
          }
        } else {
          VAR_23 = 0;
        }
      }


      if (VAR_13->recv_mbuf.len < VAR_13->recv_mbuf_limit &&
          (!(VAR_13->flags & VAR_3) || VAR_13->listener == ((void*)0))) {
        FUNC_5(VAR_13->sock, &VAR_16, &VAR_19);
      }

      if (((VAR_13->flags & VAR_2) && !(VAR_13->flags & VAR_4)) ||
          (VAR_13->send_mbuf.len > 0 && !(VAR_13->flags & VAR_2))) {
        FUNC_5(VAR_13->sock, &VAR_17, &VAR_19);
        FUNC_5(VAR_13->sock, &VAR_18, &VAR_19);
      }
    }

    if (VAR_13->ev_timer_time > 0) {
      if (VAR_22 == 0 || VAR_13->ev_timer_time < VAR_12) {
        VAR_12 = VAR_13->ev_timer_time;
      }
      VAR_22++;
    }
  }





  if (VAR_22 > 0) {
    double VAR_25 = (VAR_12 - FUNC_8()) * 1000 + 1 ;
    if (VAR_25 < VAR_9) {
      VAR_9 = (int) VAR_25;
    }
  }
  if (VAR_9 < 0) VAR_9 = 0;

  VAR_15.tv_sec = VAR_9 / 1000;
  VAR_15.tv_usec = (VAR_9 % 1000) * 1000;

  VAR_21 = FUNC_9((int) VAR_19 + 1, &VAR_16, &VAR_17, &VAR_18, &VAR_15);
  VAR_11 = FUNC_8();
  for (VAR_13 = VAR_10->active_connections; VAR_13 != ((void*)0); VAR_13 = VAR_14) {
    int VAR_26 = 0;
    if (VAR_13->sock != VAR_1) {
      if (VAR_21 > 0) {
        VAR_26 = (FUNC_1(VAR_13->sock, &VAR_16) &&
                            (!(VAR_13->flags & VAR_3) || VAR_13->listener == ((void*)0))
                        ? VAR_5
                        : 0) |
                   (FUNC_1(VAR_13->sock, &VAR_17) ? VAR_6 : 0) |
                   (FUNC_1(VAR_13->sock, &VAR_18) ? VAR_7 : 0);
      }






    }
    VAR_14 = VAR_13->next;
    FUNC_6(VAR_13, VAR_26, VAR_11);
  }

  return (time_t) VAR_11;
}
