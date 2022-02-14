
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ X509_POLICY_NODE ;
struct TYPE_5__ {int flags; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(X509_POLICY_NODE *VAR_1)
{
    if (VAR_1->data && (VAR_1->data->flags & VAR_0))
        FUNC_0(VAR_1);
}
