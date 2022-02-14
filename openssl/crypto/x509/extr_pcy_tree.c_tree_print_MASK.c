
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int nlevel; TYPE_4__* levels; } ;
typedef TYPE_2__ X509_POLICY_TREE ;
struct TYPE_13__ {TYPE_1__* data; } ;
typedef TYPE_3__ X509_POLICY_NODE ;
struct TYPE_14__ {TYPE_3__* anyPolicy; int nodes; int flags; } ;
typedef TYPE_4__ X509_POLICY_LEVEL ;
struct TYPE_11__ {long flags; } ;
typedef int BIO ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (int *,TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(BIO *VAR_0,
                       char *VAR_1, X509_POLICY_TREE *VAR_2,
                       X509_POLICY_LEVEL *VAR_3)
{
    X509_POLICY_LEVEL *VAR_4;

    if (!VAR_3)
        VAR_3 = VAR_2->levels + VAR_2->nlevel;
    else
        VAR_3++;

    FUNC_0(VAR_0, "Level print after %s\n", VAR_1);
    FUNC_0(VAR_0, "Printing Up to Level %ld\n",
               (long)(VAR_3 - VAR_2->levels));
    for (VAR_4 = VAR_2->levels; VAR_4 != VAR_3; VAR_4++) {
        int VAR_5;

        FUNC_0(VAR_0, "Level %ld, flags = %x\n",
                   (long)(VAR_4 - VAR_2->levels), VAR_4->flags);
        for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_4->nodes); VAR_5++) {
            X509_POLICY_NODE *VAR_6 =
                FUNC_4(VAR_4->nodes, VAR_5);

            FUNC_1(VAR_0, VAR_6, 2);
            FUNC_2(VAR_0, VAR_4, VAR_6, 2);
            FUNC_0(VAR_0, "  Flags: %x\n", VAR_6->data->flags);
        }
        if (VAR_4->anyPolicy)
            FUNC_1(VAR_0, VAR_4->anyPolicy, 2);
    }
}
