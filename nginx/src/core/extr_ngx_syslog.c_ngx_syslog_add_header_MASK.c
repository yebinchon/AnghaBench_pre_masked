
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_4__ {int facility; int tag; scalar_t__ nohostname; scalar_t__ severity; } ;
typedef TYPE_1__ ngx_syslog_peer_t ;
struct TYPE_5__ {int hostname; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int * FUNC_0 (int *,char*,scalar_t__,int *,int *,...) ;

u_char *
FUNC_1(ngx_syslog_peer_t *VAR_2, u_char *VAR_3)
{
    ngx_uint_t VAR_4;

    VAR_4 = VAR_2->facility * 8 + VAR_2->severity;

    if (VAR_2->nohostname) {
        return FUNC_0(VAR_3, "<%ui>%V %V: ", VAR_4, &VAR_0,
                           &VAR_2->tag);
    }

    return FUNC_0(VAR_3, "<%ui>%V %V %V: ", VAR_4, &VAR_0,
                       &VAR_1->hostname, &VAR_2->tag);
}
