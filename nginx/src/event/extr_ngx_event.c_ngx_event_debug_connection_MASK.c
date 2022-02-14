
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_30__ {int s_addr; } ;
struct sockaddr_in {TYPE_6__ sin_addr; } ;
struct TYPE_31__ {int mask; int addr; } ;
struct TYPE_26__ {int s6_addr; } ;
struct TYPE_27__ {TYPE_2__ mask; int addr; } ;
struct TYPE_32__ {TYPE_7__ in; TYPE_3__ in6; } ;
struct TYPE_22__ {int data; } ;
struct TYPE_33__ {int family; int naddrs; TYPE_8__ u; TYPE_5__* addrs; TYPE_10__ host; int err; } ;
typedef TYPE_9__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef TYPE_10__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {int debug_connection; } ;
typedef TYPE_11__ ngx_event_conf_t ;
struct TYPE_24__ {int pool; TYPE_1__* args; } ;
typedef TYPE_12__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef TYPE_9__ ngx_cidr_t ;
struct TYPE_29__ {TYPE_4__* sockaddr; } ;
struct TYPE_28__ {int sa_family; } ;
struct TYPE_25__ {TYPE_10__* elts; } ;



 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_9__* FUNC_0 (int *) ;
 TYPE_9__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,TYPE_12__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,TYPE_9__*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (TYPE_9__*,int) ;
 scalar_t__ FUNC_6 (TYPE_10__*,TYPE_9__*) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_8, ngx_command_t *VAR_9, void *VAR_10)
{
    FUNC_2(VAR_6, VAR_8, 0,
                       "\"debug_connection\" is ignored, you need to rebuild "
                       "nginx using --with-debug option to enable it");



    return VAR_2;
}
