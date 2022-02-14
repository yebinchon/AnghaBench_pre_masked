
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *,int *,int,int const*) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_2, ASN1_VALUE *VAR_3, BIO *VAR_4, int VAR_5,
                          const ASN1_ITEM *VAR_6)
{
    BIO *VAR_7;
    int VAR_8;
    VAR_7 = FUNC_4(FUNC_1());
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }



    VAR_2 = FUNC_6(VAR_7, VAR_2);
    VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    (void)FUNC_2(VAR_2);
    FUNC_5(VAR_2);
    FUNC_3(VAR_7);
    return VAR_8;
}
