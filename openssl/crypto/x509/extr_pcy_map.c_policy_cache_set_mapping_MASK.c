
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int expected_policy_set; int flags; int qualifier_set; } ;
typedef TYPE_2__ X509_POLICY_DATA ;
struct TYPE_15__ {int data; TYPE_1__* anyPolicy; } ;
typedef TYPE_3__ X509_POLICY_CACHE ;
struct TYPE_16__ {int ex_flags; TYPE_3__* policy_cache; } ;
typedef TYPE_4__ X509 ;
struct TYPE_17__ {int * subjectDomainPolicy; int * issuerDomainPolicy; } ;
struct TYPE_13__ {int flags; int qualifier_set; } ;
typedef int POLICY_MAPPINGS ;
typedef TYPE_5__ POLICY_MAPPING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 TYPE_5__* FUNC_7 (int *,int) ;
 int FUNC_8 (int ,TYPE_2__*) ;

int FUNC_9(X509 *VAR_7, POLICY_MAPPINGS *VAR_8)
{
    POLICY_MAPPING *VAR_9;
    X509_POLICY_DATA *VAR_10;
    X509_POLICY_CACHE *VAR_11 = VAR_7->policy_cache;
    int VAR_12;
    int VAR_13 = 0;
    if (FUNC_5(VAR_8) == 0) {
        VAR_13 = -1;
        goto bad_mapping;
    }
    for (VAR_12 = 0; VAR_12 < FUNC_5(VAR_8); VAR_12++) {
        VAR_9 = FUNC_7(VAR_8, VAR_12);

        if ((FUNC_0(VAR_9->subjectDomainPolicy) == VAR_1)
            || (FUNC_0(VAR_9->issuerDomainPolicy) == VAR_1)) {
            VAR_13 = -1;
            goto bad_mapping;
        }


        VAR_10 = FUNC_1(VAR_11, VAR_9->issuerDomainPolicy);

        if (VAR_10 == ((void*)0) && !VAR_11->anyPolicy)
            continue;


        if (VAR_10 == ((void*)0)) {
            VAR_10 = FUNC_3(((void*)0), VAR_9->issuerDomainPolicy,
                                   VAR_11->anyPolicy->flags
                                   & VAR_2);
            if (VAR_10 == ((void*)0))
                goto bad_mapping;
            VAR_10->qualifier_set = VAR_11->anyPolicy->qualifier_set;



            VAR_10->flags |= VAR_4;
            VAR_10->flags |= VAR_5;
            if (!FUNC_8(VAR_11->data, VAR_10)) {
                FUNC_2(VAR_10);
                goto bad_mapping;
            }
        } else
            VAR_10->flags |= VAR_3;
        if (!FUNC_4(VAR_10->expected_policy_set,
                                 VAR_9->subjectDomainPolicy))
            goto bad_mapping;
        VAR_9->subjectDomainPolicy = ((void*)0);

    }

    VAR_13 = 1;
 bad_mapping:
    if (VAR_13 == -1)
        VAR_7->ex_flags |= VAR_0;
    FUNC_6(VAR_8, VAR_6);
    return VAR_13;

}
