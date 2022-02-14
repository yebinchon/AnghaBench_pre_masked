
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ X509_POLICY_NODE ;
struct TYPE_6__ {scalar_t__ qualifier_set; int valid_policy; } ;
typedef TYPE_2__ X509_POLICY_DATA ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (int *,scalar_t__,int) ;

void FUNC_5(BIO *VAR_0, X509_POLICY_NODE *VAR_1, int VAR_2)
{
    const X509_POLICY_DATA *VAR_3 = VAR_1->data;

    FUNC_0(VAR_0, "%*sPolicy: ", VAR_2, "");

    FUNC_2(VAR_0, VAR_3->valid_policy);
    FUNC_1(VAR_0, "\n");
    FUNC_0(VAR_0, "%*s%s\n", VAR_2 + 2, "",
               FUNC_3(VAR_3) ? "Critical" : "Non Critical");
    if (VAR_3->qualifier_set) {
        FUNC_4(VAR_0, VAR_3->qualifier_set, VAR_2 + 2);
        FUNC_1(VAR_0, "\n");
    }
    else
        FUNC_0(VAR_0, "%*sNo Qualifiers\n", VAR_2 + 2, "");
}
