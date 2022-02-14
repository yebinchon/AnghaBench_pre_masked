
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ ASN1_OBJECT ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(const ASN1_OBJECT *const *VAR_1, const unsigned int *VAR_2)
{
    int VAR_3;
    const ASN1_OBJECT *VAR_4 = *VAR_1;
    const ASN1_OBJECT *VAR_5 = &VAR_0[*VAR_2];

    VAR_3 = (VAR_4->length - VAR_5->length);
    if (VAR_3)
        return VAR_3;
    if (VAR_4->length == 0)
        return 0;
    return FUNC_0(VAR_4->data, VAR_5->data, VAR_4->length);
}
