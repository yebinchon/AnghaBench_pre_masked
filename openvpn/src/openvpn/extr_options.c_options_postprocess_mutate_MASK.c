
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_list {int len; struct remote_entry** array; } ;
struct remote_entry {struct connection_entry* remote; } ;
struct connection_entry {int len; int * array; } ;
struct options {int ncp_enabled; scalar_t__ mode; scalar_t__ http_proxy_override; scalar_t__ pull; int * dh_file; scalar_t__ tls_server; struct connection_entry* connection_list; struct connection_entry ce; struct remote_list* remote_list; } ;


 int FUNC_0 (struct connection_entry*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct connection_entry* FUNC_1 (struct options*,int ) ;
 int FUNC_2 (struct connection_entry*,struct remote_entry const*) ;
 int FUNC_3 (struct options*) ;
 int FUNC_4 (struct options*) ;
 int FUNC_5 (struct options*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct options*) ;
 int FUNC_9 (struct options*,int ) ;
 int FUNC_10 (struct options*) ;
 int FUNC_11 (struct options*) ;
 scalar_t__ FUNC_12 (int *,char*) ;

__attribute__((used)) static void
FUNC_13(struct options *VAR_3)
{
    int VAR_4;




    FUNC_3(VAR_3);
    FUNC_4(VAR_3);
    FUNC_5(VAR_3);

    FUNC_10(VAR_3);

    if (VAR_3->remote_list && !VAR_3->connection_list)
    {



        const struct remote_list *VAR_5 = VAR_3->remote_list;
        for (VAR_4 = 0; VAR_4 < VAR_5->len; ++VAR_4)
        {
            const struct remote_entry *VAR_6 = VAR_5->array[VAR_4];
            struct connection_entry VAR_7 = VAR_3->ce;
            struct connection_entry *VAR_8;

            FUNC_0(VAR_6->remote);
            FUNC_2(&VAR_7, VAR_6);
            VAR_8 = FUNC_1(VAR_3, VAR_1);
            FUNC_0(VAR_8);
            *VAR_8 = VAR_7;
        }
    }
    else if (!VAR_3->remote_list && !VAR_3->connection_list)
    {
        struct connection_entry *VAR_9;
        VAR_9 = FUNC_1(VAR_3, VAR_1);
        FUNC_0(VAR_9);
        *VAR_9 = VAR_3->ce;
    }

    FUNC_0(VAR_3->connection_list);
    for (VAR_4 = 0; VAR_4 < VAR_3->connection_list->len; ++VAR_4)
    {
        FUNC_9(VAR_3, VAR_3->connection_list->array[VAR_4]);
    }

    if (VAR_3->tls_server)
    {

        FUNC_7(VAR_3->dh_file, "DH file (--dh)");
        if (FUNC_12(VAR_3->dh_file, "none"))
        {
            VAR_3->dh_file = ((void*)0);
        }
    }
    else if (VAR_3->dh_file)
    {

        FUNC_6(VAR_2, "WARNING: Ignoring option 'dh' in tls-client mode, please only "
            "include this in your server configuration");
        VAR_3->dh_file = ((void*)0);
    }


    if (VAR_3->ncp_enabled
        && !(VAR_3->pull || VAR_3->mode == VAR_0) )
    {
        FUNC_6( VAR_2, "disabling NCP mode (--ncp-disable) because not "
             "in P2MP client or server mode" );
        VAR_3->ncp_enabled = 0;
    }
}
