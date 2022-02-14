
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_STRING_TABLE ;


 int FUNC_0 (int,int,int,int ,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void)
{
    const ASN1_STRING_TABLE *VAR_1 = ((void*)0);
    int VAR_2 = 12345678, VAR_3 = 87654321, VAR_4 = 0, VAR_5 = 0;

    VAR_1 = FUNC_2(VAR_2);
    if (!FUNC_5(VAR_1)) {
        FUNC_3("asn1 string table: ASN1_STRING_TABLE_get non-exist nid");
        goto out;
    }

    VAR_5 = FUNC_0(VAR_2, -1, -1, VAR_0, 0);
    if (!FUNC_6(VAR_5)) {
        FUNC_3("asn1 string table: add NID(%d) failed", VAR_2);
        goto out;
    }

    VAR_5 = FUNC_0(VAR_3, -1, -1, VAR_0, 0);
    if (!FUNC_6(VAR_5)) {
        FUNC_3("asn1 string table: add NID(%d) failed", VAR_3);
        goto out;
    }

    VAR_1 = FUNC_2(VAR_2);
    if (!FUNC_4(VAR_1)) {
        FUNC_3("asn1 string table: get NID(%d) failed", VAR_2);
        goto out;
    }

    VAR_1 = FUNC_2(VAR_3);
    if (!FUNC_4(VAR_1)) {
        FUNC_3("asn1 string table: get NID(%d) failed", VAR_3);
        goto out;
    }

    FUNC_1();


    VAR_1 = FUNC_2(VAR_2);
    if (!FUNC_5(VAR_1)) {
        FUNC_3("asn1 string table: get NID(%d) failed", VAR_2);
        goto out;
    }

    VAR_1 = FUNC_2(VAR_3);
    if (!FUNC_5(VAR_1)) {
        FUNC_3("asn1 string table: get NID(%d) failed", VAR_3);
        goto out;
    }

    VAR_4 = 1;
 out:
    return VAR_4;
}
