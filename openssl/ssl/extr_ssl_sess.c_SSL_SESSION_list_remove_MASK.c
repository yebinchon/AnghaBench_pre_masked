
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* session_cache_head; TYPE_1__* session_cache_tail; } ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef TYPE_2__ SSL_CTX ;



__attribute__((used)) static void FUNC_0(SSL_CTX *VAR_0, SSL_SESSION *VAR_1)
{
    if ((VAR_1->next == ((void*)0)) || (VAR_1->prev == ((void*)0)))
        return;

    if (VAR_1->next == (SSL_SESSION *)&(VAR_0->session_cache_tail)) {

        if (VAR_1->prev == (SSL_SESSION *)&(VAR_0->session_cache_head)) {

            VAR_0->session_cache_head = ((void*)0);
            VAR_0->session_cache_tail = ((void*)0);
        } else {
            VAR_0->session_cache_tail = VAR_1->prev;
            VAR_1->prev->next = (SSL_SESSION *)&(VAR_0->session_cache_tail);
        }
    } else {
        if (VAR_1->prev == (SSL_SESSION *)&(VAR_0->session_cache_head)) {

            VAR_0->session_cache_head = VAR_1->next;
            VAR_1->next->prev = (SSL_SESSION *)&(VAR_0->session_cache_head);
        } else {

            VAR_1->next->prev = VAR_1->prev;
            VAR_1->prev->next = VAR_1->next;
        }
    }
    VAR_1->prev = VAR_1->next = ((void*)0);
}
