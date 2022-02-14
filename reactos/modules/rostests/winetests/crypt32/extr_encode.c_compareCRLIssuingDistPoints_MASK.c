
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cbData; } ;
struct TYPE_6__ {scalar_t__ fOnlyContainsUserCerts; scalar_t__ fOnlyContainsCACerts; scalar_t__ fIndirectCRL; TYPE_1__ OnlySomeReasonFlags; int DistPointName; } ;
typedef TYPE_2__ CRL_ISSUING_DIST_POINT ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(const CRL_ISSUING_DIST_POINT *VAR_0,
 const CRL_ISSUING_DIST_POINT *VAR_1)
{
    FUNC_0(&VAR_0->DistPointName, &VAR_1->DistPointName);
    FUNC_1(VAR_1->fOnlyContainsUserCerts == VAR_0->fOnlyContainsUserCerts,
     "Unexpected fOnlyContainsUserCerts\n");
    FUNC_1(VAR_1->fOnlyContainsCACerts == VAR_0->fOnlyContainsCACerts,
     "Unexpected fOnlyContainsCACerts\n");
    FUNC_1(VAR_1->OnlySomeReasonFlags.cbData == VAR_0->OnlySomeReasonFlags.cbData,
     "Unexpected reason flags\n");
    FUNC_1(VAR_1->fIndirectCRL == VAR_0->fIndirectCRL,
     "Unexpected fIndirectCRL\n");
}
