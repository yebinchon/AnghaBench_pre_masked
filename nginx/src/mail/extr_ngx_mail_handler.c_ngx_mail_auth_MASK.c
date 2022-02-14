
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ nelts; } ;
struct TYPE_11__ {int login_attempt; scalar_t__ state; TYPE_2__* buffer; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_12__ {TYPE_8__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_13__ {scalar_t__ timer_set; } ;
struct TYPE_10__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; } ;


 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(ngx_mail_session_t *VAR_0, ngx_connection_t *VAR_1)
{
    VAR_0->args.nelts = 0;

    if (VAR_0->buffer->pos == VAR_0->buffer->last) {
        VAR_0->buffer->pos = VAR_0->buffer->start;
        VAR_0->buffer->last = VAR_0->buffer->start;
    }

    VAR_0->state = 0;

    if (VAR_1->read->timer_set) {
        FUNC_0(VAR_1->read);
    }

    VAR_0->login_attempt++;

    FUNC_1(VAR_0);
}
