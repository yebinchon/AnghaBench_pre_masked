
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin_port; int sin_addr; } ;
struct TYPE_3__ {TYPE_2__ sin; } ;
struct mbuf {scalar_t__ len; int buf; } ;
struct mg_connection {int flags; TYPE_1__ sa; struct mbuf recv_mbuf; } ;




 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int,...) ;

__attribute__((used)) static void FUNC_4(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  struct mbuf *VAR_4 = &VAR_1->recv_mbuf;
  (void) VAR_3;
  switch (VAR_2) {
    case 129: {
      const char *VAR_5;
      VAR_5 = FUNC_0(VAR_1->sa.sin.sin_addr);
      FUNC_3("nc->sa: %s %d\n", VAR_5, FUNC_2(VAR_1->sa.sin.sin_port));

      break;
    }
    case 128:
      FUNC_3("Received (%zu bytes): '%.*s'\n", VAR_4->len, (int) VAR_4->len, VAR_4->buf);
      FUNC_1(VAR_4, VAR_4->len);
      VAR_1->flags |= VAR_0;
      break;
    default:
      break;
  }
}
