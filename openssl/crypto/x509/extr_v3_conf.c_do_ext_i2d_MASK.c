
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_EXTENSION ;
struct TYPE_7__ {int (* i2d ) (void*,unsigned char**) ;scalar_t__ it; } ;
typedef TYPE_1__ X509V3_EXT_METHOD ;
struct TYPE_8__ {unsigned char* data; int length; } ;
typedef TYPE_2__ ASN1_OCTET_STRING ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (void*,unsigned char**,int ) ;
 int VAR_0 ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int,int,TYPE_2__*) ;
 int FUNC_8 (void*,unsigned char**) ;
 int FUNC_9 (void*,unsigned char**) ;

__attribute__((used)) static X509_EXTENSION *FUNC_10(const X509V3_EXT_METHOD *VAR_2,
                                  int VAR_3, int VAR_4, void *VAR_5)
{
    unsigned char *VAR_6 = ((void*)0);
    int VAR_7;
    ASN1_OCTET_STRING *VAR_8 = ((void*)0);
    X509_EXTENSION *VAR_9;

    if (VAR_2->it) {
        VAR_6 = ((void*)0);
        VAR_7 =
            FUNC_3(VAR_5, &VAR_6, FUNC_0(VAR_2->it));
        if (VAR_7 < 0)
            goto merr;
    } else {
        unsigned char *VAR_10;

        VAR_7 = VAR_2->i2d(VAR_5, ((void*)0));
        if ((VAR_6 = FUNC_5(VAR_7)) == ((void*)0))
            goto merr;
        VAR_10 = VAR_6;
        VAR_2->i2d(VAR_5, &VAR_10);
    }
    if ((VAR_8 = FUNC_2()) == ((void*)0))
        goto merr;
    VAR_8->data = VAR_6;
    VAR_6 = ((void*)0);
    VAR_8->length = VAR_7;

    VAR_9 = FUNC_7(((void*)0), VAR_3, VAR_4, VAR_8);
    if (!VAR_9)
        goto merr;
    FUNC_1(VAR_8);

    return VAR_9;

 merr:
    FUNC_6(VAR_1, VAR_0);
    FUNC_4(VAR_6);
    FUNC_1(VAR_8);
    return ((void*)0);

}
