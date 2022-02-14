
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_lookup {int dummy; } ;
struct idmap_config {int * attributes; int base; } ;
struct idmap_context {int ldap; struct idmap_config config; } ;
typedef int PCHAR ;
typedef int LDAPMessage ;


 scalar_t__ FUNC_0 (unsigned int const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int,int,...) ;
 int FUNC_3 (struct idmap_config*,struct idmap_lookup const*,char*,int) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,char*,int *,int ,int *,int **) ;

__attribute__((used)) static int FUNC_9(
    struct idmap_context *VAR_4,
    const struct idmap_lookup *VAR_5,
    const unsigned VAR_6,
    const unsigned VAR_7,
    PCHAR *VAR_8[],
    const int VAR_9)
{
    char VAR_10[VAR_0];
    struct idmap_config *VAR_11 = &VAR_4->config;
    LDAPMessage *VAR_12 = ((void*)0), *VAR_13;
    int VAR_14, VAR_15;


    VAR_15 = FUNC_3(VAR_11, VAR_5, VAR_10, VAR_0);
    if (VAR_15)
        goto out;


    VAR_15 = FUNC_8(VAR_4->ldap, VAR_11->base,
        VAR_3, VAR_10, ((void*)0), 0, ((void*)0), &VAR_12);
    if (VAR_15) {
        FUNC_2("ldap search for '%s' failed with %d: %s\n",
            VAR_10, VAR_15, FUNC_4(VAR_15));
        VAR_15 = FUNC_1(VAR_15);
        goto out;
    }

    VAR_13 = FUNC_5(VAR_4->ldap, VAR_12);
    if (VAR_13 == ((void*)0)) {
        VAR_15 = VAR_1;
        FUNC_2("ldap search for '%s' failed with %d: %s\n",
            VAR_10, VAR_15, FUNC_4(VAR_15));
        VAR_15 = FUNC_1(VAR_15);
        goto out;
    }


    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
        if (FUNC_0(VAR_6, VAR_14)) {
            VAR_8[VAR_14] = FUNC_6(VAR_4->ldap,
                VAR_13, VAR_11->attributes[VAR_14]);


            if (VAR_8[VAR_14] == ((void*)0) && !FUNC_0(VAR_7, VAR_14)) {
                VAR_15 = VAR_2;
                FUNC_2("ldap entry for '%s' missing required "
                    "attribute '%s', returning %d: %s\n",
                    VAR_10, VAR_11->attributes[VAR_14],
                    VAR_15, FUNC_4(VAR_15));
                VAR_15 = FUNC_1(VAR_15);
                goto out;
            }
        }
    }
out:
    if (VAR_12) FUNC_7(VAR_12);
    return VAR_15;
}
