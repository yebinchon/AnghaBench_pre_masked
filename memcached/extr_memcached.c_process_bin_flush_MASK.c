
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef scalar_t__ time_t ;
typedef void* rel_time_t ;
struct TYPE_18__ {int expiration; } ;
struct TYPE_19__ {TYPE_3__ body; } ;
struct TYPE_22__ {TYPE_4__ message; } ;
typedef TYPE_7__ protocol_binary_request_flush ;
struct TYPE_16__ {int extlen; } ;
struct TYPE_17__ {TYPE_1__ request; } ;
struct TYPE_23__ {TYPE_6__* thread; TYPE_2__ binary_header; } ;
typedef TYPE_8__ conn ;
struct TYPE_20__ {int mutex; int flush_cmds; } ;
struct TYPE_21__ {TYPE_5__ stats; } ;
struct TYPE_15__ {scalar_t__ oldest_live; int oldest_cas; scalar_t__ use_cas; int flush_enabled; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_8__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (scalar_t__) ;
 TYPE_11__ VAR_2 ;
 int FUNC_6 (TYPE_8__*,int ,int *,int ) ;
 int FUNC_7 (TYPE_8__*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(conn *VAR_3) {
    time_t VAR_4 = 0;
    protocol_binary_request_flush* VAR_5 = FUNC_0(VAR_3);
    rel_time_t VAR_6 = 0;

    if (!VAR_2.flush_enabled) {

      FUNC_6(VAR_3, VAR_0, ((void*)0), 0);
      return;
    }

    if (VAR_3->binary_header.request.extlen == sizeof(VAR_5->message.body)) {
        VAR_4 = FUNC_2(VAR_5->message.body.expiration);
    }

    if (VAR_4 > 0) {
        VAR_6 = FUNC_5(VAR_4);
    } else {
        VAR_6 = VAR_1;
    }
    if (VAR_2.use_cas) {
        VAR_2.oldest_live = VAR_6 - 1;
        if (VAR_2.oldest_live <= VAR_1)
            VAR_2.oldest_cas = FUNC_1();
    } else {
        VAR_2.oldest_live = VAR_6;
    }

    FUNC_3(&VAR_3->thread->stats.mutex);
    VAR_3->thread->stats.flush_cmds++;
    FUNC_4(&VAR_3->thread->stats.mutex);

    FUNC_7(VAR_3, ((void*)0), 0, 0, 0);
}
