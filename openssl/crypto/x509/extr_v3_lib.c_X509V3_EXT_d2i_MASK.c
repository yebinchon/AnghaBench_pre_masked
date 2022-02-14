
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_3__ {void* (* d2i ) (int *,unsigned char const**,int) ;scalar_t__ it; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;
typedef int ASN1_STRING ;


 int FUNC_0 (scalar_t__) ;
 unsigned char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,unsigned char const**,int,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 void* FUNC_6 (int *,unsigned char const**,int) ;

void *FUNC_7(X509_EXTENSION *VAR_0)
{
    const X509V3_EXT_METHOD *VAR_1;
    const unsigned char *VAR_2;
    ASN1_STRING *VAR_3;
    int VAR_4;

    if ((VAR_1 = FUNC_4(VAR_0)) == ((void*)0))
        return ((void*)0);
    VAR_3 = FUNC_5(VAR_0);
    VAR_2 = FUNC_1(VAR_3);
    VAR_4 = FUNC_2(VAR_3);
    if (VAR_1->it)
        return FUNC_3(((void*)0), &VAR_2, VAR_4, FUNC_0(VAR_1->it));
    return VAR_1->d2i(((void*)0), &VAR_2, VAR_4);
}
