
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ len; char* buf; } ;
struct mg_connection {int flags; TYPE_1__ recv_mbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (struct mg_connection*,char*,size_t) ;
 int FUNC_2 (struct mg_connection*,char*,size_t) ;
 size_t FUNC_3 (struct mg_connection*,size_t) ;

__attribute__((used)) static int FUNC_4(struct mg_connection *VAR_6) {
  int VAR_7 = 0;
  char *VAR_8 = ((void*)0);
  size_t VAR_9 = (VAR_6->flags & VAR_3 ? VAR_5 : VAR_4);
  if ((VAR_6->flags & (VAR_0 | VAR_1)) ||
      ((VAR_6->flags & VAR_2) && !(VAR_6->flags & VAR_3))) {
    return -1;
  }
  do {
    VAR_9 = FUNC_3(VAR_6, VAR_9);
    if (VAR_9 == 0) {
      VAR_7 = -2;
      break;
    }
    if (VAR_6->recv_mbuf.size < VAR_6->recv_mbuf.len + VAR_9) {
      FUNC_0(&VAR_6->recv_mbuf, VAR_6->recv_mbuf.len + VAR_9);
    }
    VAR_8 = VAR_6->recv_mbuf.buf + VAR_6->recv_mbuf.len;
    VAR_9 = VAR_6->recv_mbuf.size - VAR_6->recv_mbuf.len;
    if (VAR_6->flags & VAR_3) {
      VAR_7 = FUNC_2(VAR_6, VAR_8, VAR_9);
    } else {
      VAR_7 = FUNC_1(VAR_6, VAR_8, VAR_9);
    }
  } while (VAR_7 > 0 && !(VAR_6->flags & (VAR_0 | VAR_3)));
  return VAR_7;
}
