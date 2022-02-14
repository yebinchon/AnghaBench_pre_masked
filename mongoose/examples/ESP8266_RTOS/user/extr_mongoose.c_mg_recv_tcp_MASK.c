
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_8__ {int len; } ;
struct mg_connection {int flags; TYPE_4__ recv_mbuf; int user_data; TYPE_3__* mgr; scalar_t__ last_io_time; TYPE_2__* iface; } ;
struct TYPE_7__ {int * hexdump_file; } ;
struct TYPE_6__ {TYPE_1__* vtable; } ;
struct TYPE_5__ {int (* tcp_recv ) (struct mg_connection*,char*,size_t) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct mg_connection*,int *,int ,int ,int*) ;
 int FUNC_3 (struct mg_connection*,int *,char*,int,int ) ;
 int FUNC_4 (struct mg_connection*) ;
 int FUNC_5 (struct mg_connection*,char*,size_t) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct mg_connection*,char*,size_t) ;

__attribute__((used)) static int FUNC_8(struct mg_connection *VAR_6, char *VAR_7, size_t VAR_8) {
  int VAR_9 = 0;
  {
    VAR_9 = VAR_6->iface->vtable->tcp_recv(VAR_6, VAR_7, VAR_8);
    FUNC_0(("%p <- %d bytes", VAR_6, VAR_9));
  }
  if (VAR_9 > 0) {
    VAR_6->recv_mbuf.len += VAR_9;
    VAR_6->last_io_time = (time_t) FUNC_6();





    FUNC_1(&VAR_6->recv_mbuf);
    FUNC_2(VAR_6, ((void*)0), VAR_6->user_data, VAR_0, &VAR_9);
  } else if (VAR_9 < 0) {
    VAR_6->flags |= VAR_1;
  }
  FUNC_1(&VAR_6->recv_mbuf);
  return VAR_9;
}
