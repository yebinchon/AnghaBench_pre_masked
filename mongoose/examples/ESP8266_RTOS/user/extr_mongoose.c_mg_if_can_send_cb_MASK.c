
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_9__ {char* buf; size_t len; } ;
struct mg_connection {int flags; int user_data; TYPE_4__ send_mbuf; scalar_t__ last_io_time; TYPE_3__* mgr; TYPE_2__* iface; } ;
struct TYPE_8__ {int * hexdump_file; } ;
struct TYPE_7__ {TYPE_1__* vtable; } ;
struct TYPE_6__ {int (* udp_send ) (struct mg_connection*,char const*,size_t) ;int (* tcp_send ) (struct mg_connection*,char const*,size_t) ;} ;


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
 size_t VAR_9 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct mg_connection*,int *,int ,int ,int*) ;
 int FUNC_4 (struct mg_connection*,int *,char const*,int,int ) ;
 int FUNC_5 (struct mg_connection*) ;
 int FUNC_6 (struct mg_connection*,char const*,size_t) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct mg_connection*,char const*,size_t) ;
 int FUNC_9 (struct mg_connection*,char const*,size_t) ;

void FUNC_10(struct mg_connection *VAR_10) {
  int VAR_11 = 0;
  const char *VAR_12 = VAR_10->send_mbuf.buf;
  size_t VAR_13 = VAR_10->send_mbuf.len;

  if (VAR_10->flags & (VAR_1 | VAR_2)) {
    return;
  }
  if (!(VAR_10->flags & VAR_6)) {
    if (VAR_10->flags & VAR_3) return;
    if (VAR_13 > VAR_9) VAR_13 = VAR_9;
  }
      if (VAR_13 > 0) {
    if (VAR_10->flags & VAR_6) {
      VAR_11 = VAR_10->iface->vtable->udp_send(VAR_10, VAR_12, VAR_13);
    } else {
      VAR_11 = VAR_10->iface->vtable->tcp_send(VAR_10, VAR_12, VAR_13);
    }
    FUNC_0(("%p -> %d bytes", VAR_10, VAR_11));
  }






  if (VAR_11 < 0) {
    VAR_10->flags |= VAR_1;
  } else if (VAR_11 > 0) {
    VAR_10->last_io_time = (time_t) FUNC_7();
    FUNC_1(&VAR_10->send_mbuf, VAR_11);
    FUNC_2(&VAR_10->send_mbuf);
  }
  if (VAR_11 != 0) FUNC_3(VAR_10, ((void*)0), VAR_10->user_data, VAR_0, &VAR_11);
}
