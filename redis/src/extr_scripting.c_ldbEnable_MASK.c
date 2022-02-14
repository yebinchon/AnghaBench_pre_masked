
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int conn; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_5__ {int step; scalar_t__ maxlen_hint_sent; int maxlen; int cbuf; scalar_t__ luabp; scalar_t__ bpcount; int conn; int logs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3(client *VAR_3) {
    VAR_3->flags |= VAR_0;
    FUNC_0(VAR_2.logs);
    VAR_2.conn = VAR_3->conn;
    VAR_2.step = 1;
    VAR_2.bpcount = 0;
    VAR_2.luabp = 0;
    FUNC_2(VAR_2.cbuf);
    VAR_2.cbuf = FUNC_1();
    VAR_2.maxlen = VAR_1;
    VAR_2.maxlen_hint_sent = 0;
}
