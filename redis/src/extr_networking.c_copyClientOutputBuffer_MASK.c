
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reply_bytes; int bufpos; int buf; int reply; scalar_t__ sentlen; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(client *VAR_0, client *VAR_1) {
    FUNC_1(VAR_0->reply);
    VAR_0->sentlen = 0;
    VAR_0->reply = FUNC_0(VAR_1->reply);
    FUNC_2(VAR_0->buf,VAR_1->buf,VAR_1->bufpos);
    VAR_0->bufpos = VAR_1->bufpos;
    VAR_0->reply_bytes = VAR_1->reply_bytes;
}
