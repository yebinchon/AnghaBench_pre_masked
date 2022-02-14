
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_6__ {int busy; int severity; } ;
typedef TYPE_1__ ngx_syslog_peer_t ;
struct TYPE_7__ {TYPE_1__* wdata; } ;
typedef TYPE_2__ ngx_log_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,size_t,char*,int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

void
FUNC_3(ngx_log_t *VAR_2, ngx_uint_t VAR_3, u_char *VAR_4,
    size_t VAR_5)
{
    u_char *VAR_6, VAR_7[VAR_1];
    ngx_uint_t VAR_8;
    ngx_syslog_peer_t *VAR_9;

    VAR_9 = VAR_2->wdata;

    if (VAR_9->busy) {
        return;
    }

    VAR_9->busy = 1;
    VAR_9->severity = VAR_3 - 1;

    VAR_6 = FUNC_1(VAR_9, VAR_7);
    VAR_8 = VAR_6 - VAR_7;

    VAR_5 -= VAR_0;

    if (VAR_5 > VAR_1 - VAR_8) {
        VAR_5 = VAR_1 - VAR_8;
    }

    VAR_6 = FUNC_0(VAR_6, VAR_5, "%s", VAR_4);

    (void) FUNC_2(VAR_9, VAR_7, VAR_6 - VAR_7);

    VAR_9->busy = 0;
}
