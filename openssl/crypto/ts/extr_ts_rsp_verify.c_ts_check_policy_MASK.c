
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * policy_id; } ;
typedef TYPE_1__ TS_TST_INFO ;
typedef int ASN1_OBJECT ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const ASN1_OBJECT *VAR_2,
                           const TS_TST_INFO *VAR_3)
{
    const ASN1_OBJECT *VAR_4 = VAR_3->policy_id;

    if (FUNC_0(VAR_2, VAR_4) != 0) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    return 1;
}
