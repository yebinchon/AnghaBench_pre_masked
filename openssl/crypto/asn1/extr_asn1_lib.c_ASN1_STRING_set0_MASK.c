
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; void* data; } ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (void*) ;

void FUNC_1(ASN1_STRING *VAR_0, void *VAR_1, int VAR_2)
{
    FUNC_0(VAR_0->data);
    VAR_0->data = VAR_1;
    VAR_0->length = VAR_2;
}
