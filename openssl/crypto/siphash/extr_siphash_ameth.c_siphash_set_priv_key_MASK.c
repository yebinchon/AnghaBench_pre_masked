
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ptr; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_3(EVP_PKEY *VAR_1, const unsigned char *VAR_2,
                                size_t VAR_3)
{
    ASN1_OCTET_STRING *VAR_4;

    if (VAR_1->pkey.ptr != ((void*)0) || VAR_3 != VAR_0)
        return 0;

    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
        return 0;

    if (!FUNC_2(VAR_4, VAR_2, VAR_3)) {
        FUNC_0(VAR_4);
        return 0;
    }

    VAR_1->pkey.ptr = VAR_4;
    return 1;
}
