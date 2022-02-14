
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parameter; int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const X509_ALGOR *VAR_0, const X509_ALGOR *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_1(VAR_0->algorithm, VAR_1->algorithm);
    if (VAR_2)
        return VAR_2;
    if (!VAR_0->parameter && !VAR_1->parameter)
        return 0;
    return FUNC_0(VAR_0->parameter, VAR_1->parameter);
}
