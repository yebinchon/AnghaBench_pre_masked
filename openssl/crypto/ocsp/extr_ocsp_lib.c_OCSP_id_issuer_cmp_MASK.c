
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int algorithm; } ;
struct TYPE_6__ {int issuerKeyHash; int issuerNameHash; TYPE_1__ hashAlgorithm; } ;
typedef TYPE_2__ OCSP_CERTID ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const OCSP_CERTID *VAR_0, const OCSP_CERTID *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_1(VAR_0->hashAlgorithm.algorithm, VAR_1->hashAlgorithm.algorithm);
    if (VAR_2)
        return VAR_2;
    VAR_2 = FUNC_0(&VAR_0->issuerNameHash, &VAR_1->issuerNameHash);
    if (VAR_2)
        return VAR_2;
    return FUNC_0(&VAR_0->issuerKeyHash, &VAR_1->issuerKeyHash);
}
