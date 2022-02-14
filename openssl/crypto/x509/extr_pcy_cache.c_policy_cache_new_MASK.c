
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int any_skip; int explicit_skip; int map_skip; int * data; int * anyPolicy; } ;
typedef TYPE_1__ X509_POLICY_CACHE ;
struct TYPE_11__ {int ex_flags; TYPE_1__* policy_cache; } ;
typedef TYPE_2__ X509 ;
struct TYPE_12__ {int * inhibitPolicyMapping; int * requireExplicitPolicy; } ;
typedef int POLICY_MAPPINGS ;
typedef TYPE_3__ POLICY_CONSTRAINTS ;
typedef int CERTIFICATEPOLICIES ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (TYPE_2__*,int ,int*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (int*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_8(X509 *VAR_7)
{
    X509_POLICY_CACHE *VAR_8;
    ASN1_INTEGER *VAR_9 = ((void*)0);
    POLICY_CONSTRAINTS *VAR_10 = ((void*)0);
    CERTIFICATEPOLICIES *VAR_11 = ((void*)0);
    POLICY_MAPPINGS *VAR_12 = ((void*)0);
    int VAR_13;

    if (VAR_7->policy_cache != ((void*)0))
        return 1;
    VAR_8 = FUNC_1(sizeof(*VAR_8));
    if (VAR_8 == ((void*)0)) {
        FUNC_3(VAR_6, VAR_0);
        return 0;
    }
    VAR_8->anyPolicy = ((void*)0);
    VAR_8->data = ((void*)0);
    VAR_8->any_skip = -1;
    VAR_8->explicit_skip = -1;
    VAR_8->map_skip = -1;

    VAR_7->policy_cache = VAR_8;





    VAR_10 = FUNC_4(VAR_7, VAR_4, &VAR_13, ((void*)0));

    if (!VAR_10) {
        if (VAR_13 != -1)
            goto bad_cache;
    } else {
        if (!VAR_10->requireExplicitPolicy
            && !VAR_10->inhibitPolicyMapping)
            goto bad_cache;
        if (!FUNC_6(&VAR_8->explicit_skip,
                                  VAR_10->requireExplicitPolicy))
            goto bad_cache;
        if (!FUNC_6(&VAR_8->map_skip,
                                  VAR_10->inhibitPolicyMapping))
            goto bad_cache;
    }



    VAR_11 = FUNC_4(VAR_7, VAR_2, &VAR_13, ((void*)0));




    if (!VAR_11) {

        if (VAR_13 != -1)
            goto bad_cache;
        return 1;
    }

    VAR_13 = FUNC_5(VAR_7, VAR_11, VAR_13);



    if (VAR_13 <= 0)
        return VAR_13;

    VAR_12 = FUNC_4(VAR_7, VAR_5, &VAR_13, ((void*)0));

    if (!VAR_12) {

        if (VAR_13 != -1)
            goto bad_cache;
    } else {
        VAR_13 = FUNC_7(VAR_7, VAR_12);
        if (VAR_13 <= 0)
            goto bad_cache;
    }

    VAR_9 = FUNC_4(VAR_7, VAR_3, &VAR_13, ((void*)0));

    if (!VAR_9) {
        if (VAR_13 != -1)
            goto bad_cache;
    } else if (!FUNC_6(&VAR_8->any_skip, VAR_9))
        goto bad_cache;
    goto just_cleanup;

 bad_cache:
    VAR_7->ex_flags |= VAR_1;

 just_cleanup:
    FUNC_2(VAR_10);
    FUNC_0(VAR_9);
    return 1;

}
