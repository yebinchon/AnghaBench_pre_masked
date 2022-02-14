
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tls_session {struct key_state* key; int session_id; } ;
struct TYPE_5__ {int gremlin; int single_session; } ;
struct link_socket_actual {int dummy; } ;
struct tls_multi {int n_soft_errors; int n_hard_errors; TYPE_3__** key_scan; TYPE_2__ opt; struct tls_session* session; struct link_socket_actual to_link_addr; } ;
struct link_socket_info {TYPE_1__* lsa; } ;
struct key_state {scalar_t__ state; int remote_addr; int session_id_remote; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int interval_t ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_4__ {int actual; } ;


 scalar_t__ FUNC_0 (struct tls_multi*,struct key_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__**) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int FUNC_3 (int ,char*,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct gc_arena*) ;
 struct gc_arena FUNC_5 () ;
 scalar_t__ FUNC_6 (struct tls_session*,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct tls_multi*,int,size_t,int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,struct gc_arena*) ;
 int FUNC_13 (struct tls_multi*,struct tls_session*) ;
 int FUNC_14 (int *,struct gc_arena*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct tls_multi*,int ) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (struct tls_multi*,struct tls_session*,struct buffer*,struct link_socket_actual**,struct link_socket_info*,int *) ;
 int FUNC_19 (struct tls_session*,int) ;
 int FUNC_20 () ;

int
FUNC_21(struct tls_multi *VAR_18,
                  struct buffer *VAR_19,
                  struct link_socket_actual **VAR_20,
                  struct link_socket_info *VAR_21,
                  interval_t *VAR_22)
{
    struct gc_arena VAR_23 = FUNC_5();
    int VAR_24;
    int VAR_25 = VAR_9;
    bool VAR_26 = 0;
    int VAR_27;

    FUNC_11(VAR_4);

    FUNC_17();






    for (VAR_24 = 0; VAR_24 < VAR_16; ++VAR_24)
    {
        struct tls_session *VAR_28 = &VAR_18->session[VAR_24];
        struct key_state *VAR_29 = &VAR_28->key[VAR_3];
        struct key_state *VAR_30 = &VAR_28->key[VAR_2];


        if (VAR_24 == VAR_14 && VAR_29->state == VAR_7
            && FUNC_7(&VAR_21->lsa->actual))
        {
            VAR_29->remote_addr = VAR_21->lsa->actual;
        }

        FUNC_3(VAR_0,
             "TLS: tls_multi_process: i=%d state=%s, mysid=%s, stored-sid=%s, stored-ip=%s",
             VAR_24,
             FUNC_15(VAR_29->state),
             FUNC_14(&VAR_28->session_id, &VAR_23),
             FUNC_14(&VAR_29->session_id_remote, &VAR_23),
             FUNC_12(&VAR_29->remote_addr, &VAR_23));

        if (VAR_29->state >= VAR_7 && FUNC_7(&VAR_29->remote_addr))
        {
            struct link_socket_actual *VAR_31 = ((void*)0);

            FUNC_20();

            if (FUNC_18(VAR_18, VAR_28, VAR_19, &VAR_31,
                            VAR_21, VAR_22))
            {
                VAR_25 = VAR_8;
            }






            if (VAR_31)
            {
                VAR_18->to_link_addr = *VAR_31;
                *VAR_20 = &VAR_18->to_link_addr;
            }







            if (VAR_29->state == VAR_6)
            {
                ++VAR_18->n_soft_errors;

                if (VAR_24 == VAR_14)
                {
                    VAR_26 = 1;
                }

                if (VAR_24 == VAR_14
                    && VAR_30->state >= VAR_5
                    && !VAR_18->opt.single_session)
                {
                    FUNC_8(VAR_18, VAR_15, VAR_14, 1);
                }
                else
                {
                    FUNC_13(VAR_18, VAR_28);
                }
            }
        }
    }

    FUNC_20();

    VAR_27 = FUNC_16(VAR_18, VAR_13);




    if (FUNC_6(&VAR_18->session[VAR_15], VAR_22))
    {
        FUNC_19(&VAR_18->session[VAR_15], 1);
        FUNC_9(VAR_1, "TLS: tls_multi_process: killed expiring key");
    }
    if (FUNC_0(VAR_18, &VAR_18->session[VAR_17].key[VAR_3]))
    {
        FUNC_8(VAR_18, VAR_14, VAR_17, 1);
        FUNC_9(VAR_1, "TLS: tls_multi_process: untrusted session promoted to %strusted",
            VAR_27 == VAR_12 ? "" : "semi-");
    }





    if (VAR_26)
    {
        for (VAR_24 = 0; VAR_24 < (int) FUNC_2(VAR_18->key_scan); ++VAR_24)
        {
            if (VAR_18->key_scan[VAR_24]->state >= VAR_5)
            {
                goto nohard;
            }
        }
        ++VAR_18->n_hard_errors;
    }
nohard:
    FUNC_10();
    FUNC_4(&VAR_23);

    return (VAR_27 == VAR_11) ? VAR_10 : VAR_25;
}
