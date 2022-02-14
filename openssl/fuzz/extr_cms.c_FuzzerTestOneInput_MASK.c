
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

int FUNC_10(const uint8_t *VAR_0, size_t VAR_1)
{
    CMS_ContentInfo *VAR_2;
    BIO *VAR_3;

    if (VAR_1 == 0)
        return 0;

    VAR_3 = FUNC_1(FUNC_2());
    FUNC_7((size_t)FUNC_4(VAR_3, VAR_0, VAR_1) == VAR_1);
    VAR_2 = FUNC_8(VAR_3, ((void*)0));
    if (VAR_2 != ((void*)0)) {
        BIO *VAR_4 = FUNC_1(FUNC_3());

        FUNC_9(VAR_4, VAR_2);
        FUNC_0(VAR_4);
        FUNC_5(VAR_2);
    }

    FUNC_0(VAR_3);
    FUNC_6();

    return 0;
}
