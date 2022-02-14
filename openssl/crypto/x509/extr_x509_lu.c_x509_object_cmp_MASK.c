
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int crl; int x509; } ;
struct TYPE_6__ {int type; TYPE_1__ data; } ;
typedef TYPE_2__ X509_OBJECT ;


 int FUNC_0 (int ,int ) ;



 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const X509_OBJECT *const *VAR_0,
                           const X509_OBJECT *const *VAR_1)
{
    int VAR_2;

    VAR_2 = ((*VAR_0)->type - (*VAR_1)->type);
    if (VAR_2)
        return VAR_2;
    switch ((*VAR_0)->type) {
    case 128:
        VAR_2 = FUNC_1((*VAR_0)->data.x509, (*VAR_1)->data.x509);
        break;
    case 130:
        VAR_2 = FUNC_0((*VAR_0)->data.crl, (*VAR_1)->data.crl);
        break;
    case 129:

        return 0;
    }
    return VAR_2;
}
