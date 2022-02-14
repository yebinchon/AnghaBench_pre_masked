
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int issuer; int serialNumber; } ;
typedef TYPE_1__ X509_CINF ;
struct TYPE_6__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const X509 *VAR_0, const X509 *VAR_1)
{
    int VAR_2;
    const X509_CINF *VAR_3, *VAR_4;

    VAR_3 = &VAR_0->cert_info;
    VAR_4 = &VAR_1->cert_info;
    VAR_2 = FUNC_0(&VAR_3->serialNumber, &VAR_4->serialNumber);
    if (VAR_2)
        return VAR_2;
    return FUNC_1(VAR_3->issuer, VAR_4->issuer);
}
