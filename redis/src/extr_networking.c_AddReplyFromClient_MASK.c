
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bufpos; scalar_t__ reply_bytes; int reply; int buf; } ;
typedef TYPE_1__ client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void FUNC_4(client *VAR_1, client *VAR_2) {
    if (FUNC_3(VAR_1) != VAR_0)
        return;
    FUNC_0(VAR_1,VAR_2->buf, VAR_2->bufpos);
    if (FUNC_2(VAR_2->reply))
        FUNC_1(VAR_1->reply,VAR_2->reply);
    VAR_1->reply_bytes += VAR_2->reply_bytes;
    VAR_2->reply_bytes = 0;
    VAR_2->bufpos = 0;
}
