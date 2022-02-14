
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int timeout; int hostname; int port; } ;
struct idmap_context {TYPE_1__ config; int * ldap; int groups; int users; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 struct idmap_context* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,void*) ;
 int FUNC_10 (struct idmap_context*) ;
 int VAR_5 ;

int FUNC_11(
    struct idmap_context **VAR_6)
{
    struct idmap_context *VAR_7;
    int VAR_8 = VAR_3;

    VAR_7 = FUNC_4(1, sizeof(struct idmap_context));
    if (VAR_7 == ((void*)0)) {
        VAR_8 = FUNC_0();
        goto out;
    }


    FUNC_3(&VAR_7->users, &VAR_5);
    FUNC_3(&VAR_7->groups, &VAR_4);


    VAR_8 = FUNC_5(&VAR_7->config);
    if (VAR_8) {
        FUNC_6("config_init() failed with %d\n", VAR_8);
        goto out_err_free;
    }


    VAR_7->ldap = FUNC_8(VAR_7->config.hostname, VAR_7->config.port);
    if (VAR_7->ldap == ((void*)0)) {
        VAR_8 = FUNC_1();
        FUNC_6("ldap_init(%s) failed with %d: %s\n",
            VAR_7->config.hostname, VAR_8, FUNC_7(VAR_8));
        VAR_8 = FUNC_2(VAR_8);
        goto out_err_free;
    }

    VAR_8 = FUNC_9(VAR_7->ldap, VAR_0,
        (void *)&VAR_7->config.version);
    if (VAR_8 != VAR_2) {
        FUNC_6("ldap_set_option(version=%d) failed with %d\n",
            VAR_7->config.version, VAR_8);
        VAR_8 = FUNC_2(VAR_8);
        goto out_err_free;
    }

    if (VAR_7->config.timeout) {
        VAR_8 = FUNC_9(VAR_7->ldap, VAR_1,
            (void *)&VAR_7->config.timeout);
        if (VAR_8 != VAR_2) {
            FUNC_6("ldap_set_option(timeout=%d) failed with %d\n",
                VAR_7->config.timeout, VAR_8);
            VAR_8 = FUNC_2(VAR_8);
            goto out_err_free;
        }
    }

    *VAR_6 = VAR_7;
out:
    return VAR_8;

out_err_free:
    FUNC_10(VAR_7);
    goto out;
}
