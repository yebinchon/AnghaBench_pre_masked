
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int event_set_owned; int link_socket_owned; int buffers_owned; int es_owned; int * comp_context; int * event_set; int * tls_multi; int gc; } ;
struct TYPE_6__ {int proto; } ;
struct TYPE_8__ {TYPE_2__ ce; } ;
struct TYPE_5__ {int tuntap_owned; int status_output_owned; int ifconfig_pool_persist_owned; } ;
struct context {int first_time; int plugins_owned; TYPE_3__ c2; TYPE_4__ options; TYPE_1__ c1; int gc; int * c0; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct context*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct context *VAR_1,
                    const struct context *VAR_2)
{

    *VAR_1 = *VAR_2;
    VAR_1->mode = VAR_0;

    VAR_1->first_time = 0;
    VAR_1->c0 = ((void*)0);

    FUNC_2(&VAR_1->options);
    FUNC_1(&VAR_1->gc);
    FUNC_1(&VAR_1->c2.gc);


    VAR_1->plugins_owned = 0;

    VAR_1->c2.tls_multi = ((void*)0);


    VAR_1->c1.tuntap_owned = 0;
    VAR_1->c1.status_output_owned = 0;





    VAR_1->c2.event_set_owned = 0;
    VAR_1->c2.link_socket_owned = 0;
    VAR_1->c2.buffers_owned = 0;
    VAR_1->c2.es_owned = 0;

    VAR_1->c2.event_set = ((void*)0);
    if (FUNC_3(VAR_2->options.ce.proto))
    {
        FUNC_0(VAR_1, 0);
    }




}
