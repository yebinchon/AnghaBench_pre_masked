
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkey_id; int pkey_flags; int * pem_str; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static int FUNC_6(void)
{
    const EVP_PKEY_ASN1_METHOD **VAR_2;
    int VAR_3 = -1;
    size_t VAR_4;
    int VAR_5 = 1;

    for (VAR_2 = VAR_1, VAR_4 = 0; VAR_4 < FUNC_1(VAR_1);
         VAR_4++, VAR_2++) {
        if ((*VAR_2)->pkey_id < VAR_3) {
            VAR_3 = 0;
            break;
        }
        VAR_3 = (*VAR_2)->pkey_id;
        if (!FUNC_5(((*VAR_2)->pem_str == ((void*)0) && ((*VAR_2)->pkey_flags & VAR_0) != 0)
                       || ((*VAR_2)->pem_str != ((void*)0) && ((*VAR_2)->pkey_flags & VAR_0) == 0))) {
            FUNC_4("asn1 standard methods: Index %zu, pkey ID %d, Name=%s",
                      VAR_4, (*VAR_2)->pkey_id, FUNC_0((*VAR_2)->pkey_id));
            VAR_5 = 0;
        }
    }

    if (FUNC_3(VAR_3, 0)) {
        FUNC_2("asn1 standard methods: Table order OK");
        return VAR_5;
    }

    FUNC_4("asn1 standard methods: out of order");
    for (VAR_2 = VAR_1, VAR_4 = 0; VAR_4 < FUNC_1(VAR_1);
         VAR_4++, VAR_2++)
        FUNC_4("asn1 standard methods: Index %zu, pkey ID %d, Name=%s",
                  VAR_4, (*VAR_2)->pkey_id, FUNC_0((*VAR_2)->pkey_id));

    return 0;
}
