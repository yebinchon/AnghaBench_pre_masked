
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef int CONF ;
typedef TYPE_1__ BUF_MEM ;
typedef int ASN1_TYPE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (char const*) ;
 int VAR_0 ;
 int FUNC_7 (int *,unsigned char**) ;

__attribute__((used)) static int FUNC_8(char *VAR_1, const char *VAR_2, BUF_MEM *VAR_3)
{
    CONF *VAR_4 = ((void*)0);
    int VAR_5;
    unsigned char *VAR_6;
    ASN1_TYPE *VAR_7 = ((void*)0);

    if (VAR_2 != ((void*)0)) {
        if ((VAR_4 = FUNC_6(VAR_2)) == ((void*)0))
            goto err;
        if (VAR_1 == ((void*)0))
            VAR_1 = FUNC_5(VAR_4, "default", "asn1");
        if (VAR_1 == ((void*)0)) {
            FUNC_2(VAR_0, "Can't find 'asn1' in '%s'\n", VAR_2);
            goto err;
        }
    }

    VAR_7 = FUNC_1(VAR_1, VAR_4);
    FUNC_4(VAR_4);
    VAR_4 = ((void*)0);

    if (VAR_7 == ((void*)0))
        return -1;

    VAR_5 = FUNC_7(VAR_7, ((void*)0));

    if (VAR_5 <= 0)
        goto err;

    if (!FUNC_3(VAR_3, VAR_5))
        goto err;

    VAR_6 = (unsigned char *)VAR_3->data;

    FUNC_7(VAR_7, &VAR_6);

    FUNC_0(VAR_7);
    return VAR_5;

 err:
    FUNC_4(VAR_4);
    FUNC_0(VAR_7);
    return -1;
}
