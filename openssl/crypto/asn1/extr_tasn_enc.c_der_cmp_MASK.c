
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int data; } ;
typedef TYPE_1__ DER_ENC ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    const DER_ENC *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    int VAR_4, VAR_5;
    VAR_4 = (VAR_2->length < VAR_3->length) ? VAR_2->length : VAR_3->length;
    VAR_5 = FUNC_0(VAR_2->data, VAR_3->data, VAR_4);
    if (VAR_5)
        return VAR_5;
    return VAR_2->length - VAR_3->length;
}
