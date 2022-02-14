
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OCTET_STRING ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (unsigned char*,size_t) ;
 int FUNC_4 (int **,int const*) ;
 int FUNC_5 (int **,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_6(ASN1_OCTET_STRING **VAR_1,
                                  const ASN1_OCTET_STRING *VAR_2, size_t VAR_3)
{
    unsigned char *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    if (VAR_2 == ((void*)0)) {
        if ((VAR_4 = FUNC_2(VAR_3)) == ((void*)0))
            goto err;
        if (FUNC_3(VAR_4, VAR_3) <= 0) {
            FUNC_0(0, VAR_0);
            goto err;
        }
        VAR_5 = FUNC_5(VAR_1, VAR_4, VAR_3);
    } else {
        VAR_5 = FUNC_4(VAR_1, VAR_2);
    }

 err:
    FUNC_1(VAR_4);
    return VAR_5;
}
