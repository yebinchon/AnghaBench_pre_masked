
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nid; } ;
typedef TYPE_1__ ASN1_STRING_TABLE ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,size_t,int,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
    const ASN1_STRING_TABLE *VAR_1;
    int VAR_2 = -1;
    size_t VAR_3;

    for (VAR_1 = VAR_0, VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++, VAR_1++) {
        if (VAR_1->nid < VAR_2) {
            VAR_2 = 0;
            break;
        }
        VAR_2 = VAR_1->nid;
    }

    if (FUNC_3(VAR_2, 0)) {
        FUNC_2("asn1 tbl_standard: Table order OK");
        return 1;
    }

    FUNC_2("asn1 tbl_standard: out of order");
    for (VAR_1 = VAR_0, VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++, VAR_1++)
        FUNC_4("asn1 tbl_standard: Index %zu, NID %d, Name=%s",
                  VAR_3, VAR_1->nid, FUNC_0(VAR_1->nid));

    return 0;
}
