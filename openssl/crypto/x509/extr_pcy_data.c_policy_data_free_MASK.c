
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int expected_policy_set; int qualifier_set; int valid_policy; } ;
typedef TYPE_1__ X509_POLICY_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int (*) (int )) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(X509_POLICY_DATA *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return;
    FUNC_0(VAR_2->valid_policy);

    if (!(VAR_2->flags & VAR_1))
        FUNC_3(VAR_2->qualifier_set, VAR_0);
    FUNC_2(VAR_2->expected_policy_set, FUNC_0);
    FUNC_1(VAR_2);
}
