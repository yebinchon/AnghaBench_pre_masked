
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ X509_POLICY_NODE ;
struct TYPE_5__ {int valid_policy; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const X509_POLICY_NODE *const *VAR_0,
                    const X509_POLICY_NODE *const *VAR_1)
{
    return FUNC_0((*VAR_0)->data->valid_policy, (*VAR_1)->data->valid_policy);
}
