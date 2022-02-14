
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ len; } ;
struct mg_connection {int flags; int err; TYPE_2__ send_mbuf; TYPE_1__ recv_mbuf; int sock; } ;
typedef int socklen_t ;
typedef int err ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int ,char*,int*) ;
 int FUNC_2 (struct mg_connection*) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*,int) ;
 int FUNC_6 (struct mg_connection*,double) ;

void FUNC_7(struct mg_connection *VAR_11, int VAR_12, double VAR_13) {
  int VAR_14 =
      VAR_12 != 0 || (VAR_11->flags & (VAR_5 | VAR_6));
  if (VAR_14) {
    FUNC_0(("%p fd=%d fd_flags=%d nc_flags=0x%lx rmbl=%d smbl=%d", VAR_11, VAR_11->sock,
         VAR_12, VAR_11->flags, (int) VAR_11->recv_mbuf.len,
         (int) VAR_11->send_mbuf.len));
  }

  if (!FUNC_6(VAR_11, VAR_13)) return;

  if (VAR_11->flags & VAR_2) {
    if (VAR_12 != 0) {
      int VAR_15 = 0;

      if (!(VAR_11->flags & VAR_4)) {
        socklen_t VAR_16 = sizeof(VAR_15);
        int VAR_17 =
            FUNC_1(VAR_11->sock, VAR_7, VAR_8, (char *) &VAR_15, &VAR_16);
        if (VAR_17 != 0) {
          VAR_15 = 1;
        } else if (VAR_15 == VAR_0 || VAR_15 == VAR_1) {
          VAR_15 = 0;
        }
      }






      FUNC_5(VAR_11, VAR_15);
    } else if (VAR_11->err != 0) {
      FUNC_5(VAR_11, VAR_11->err);
    }
  }

  if (VAR_12 & VAR_9) {
    if (VAR_11->flags & VAR_4) {
      FUNC_3(VAR_11);
    } else {
      if (VAR_11->flags & VAR_3) {





        FUNC_2(VAR_11);
      } else {
        FUNC_3(VAR_11);
      }
    }
  }

  if (VAR_12 & VAR_10) FUNC_4(VAR_11);

  if (VAR_14) {
    FUNC_0(("%p after fd=%d nc_flags=0x%lx rmbl=%d smbl=%d", VAR_11, VAR_11->sock,
         VAR_11->flags, (int) VAR_11->recv_mbuf.len, (int) VAR_11->send_mbuf.len));
  }
}
