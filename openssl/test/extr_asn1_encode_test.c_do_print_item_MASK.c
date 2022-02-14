
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encode_expectations_elem_size; int asn1_type; } ;
typedef TYPE_1__ TEST_PACKAGE ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int const*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(const TEST_PACKAGE *VAR_2)
{

    const ASN1_ITEM *VAR_3 = FUNC_0(VAR_2->asn1_type);
    ASN1_VALUE *VAR_4;
    int VAR_5;

    FUNC_2(VAR_2->encode_expectations_elem_size <= 256);
    if ((VAR_4 = FUNC_4(256)) == ((void*)0))
        return 0;

    (void)FUNC_5((unsigned char*)VAR_4,
                     (int)VAR_2->encode_expectations_elem_size);
    VAR_5 = FUNC_1(VAR_1, VAR_4, 0, VAR_3, ((void*)0));
    FUNC_3(VAR_4);

    return VAR_5;
}
