
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int listNode ;
struct TYPE_9__ {size_t size; size_t used; scalar_t__ buf; } ;
typedef TYPE_1__ clientReplyBlock ;
struct TYPE_10__ {int flags; int reply_bytes; int reply; } ;
typedef TYPE_2__ client ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,char const*,size_t) ;
 TYPE_1__* FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(client *VAR_2, const char *VAR_3, size_t VAR_4) {
    if (VAR_2->flags & VAR_0) return;

    listNode *VAR_5 = FUNC_2(VAR_2->reply);
    clientReplyBlock *VAR_6 = VAR_5? FUNC_3(VAR_5): ((void*)0);






    if (VAR_6) {


        size_t VAR_7 = VAR_6->size - VAR_6->used;
        size_t VAR_8 = VAR_7 >= VAR_4? VAR_4: VAR_7;
        FUNC_4(VAR_6->buf + VAR_6->used, VAR_3, VAR_8);
        VAR_6->used += VAR_8;
        VAR_3 += VAR_8;
        VAR_4 -= VAR_8;
    }
    if (VAR_4) {


        size_t VAR_9 = VAR_4 < VAR_1? VAR_1: VAR_4;
        VAR_6 = FUNC_5(VAR_9 + sizeof(clientReplyBlock));

        VAR_6->size = FUNC_6(VAR_6) - sizeof(clientReplyBlock);
        VAR_6->used = VAR_4;
        FUNC_4(VAR_6->buf, VAR_3, VAR_4);
        FUNC_1(VAR_2->reply, VAR_6);
        VAR_2->reply_bytes += VAR_6->size;
    }
    FUNC_0(VAR_2);
}
