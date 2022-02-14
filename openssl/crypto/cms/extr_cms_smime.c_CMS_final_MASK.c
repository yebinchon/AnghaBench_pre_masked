
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(CMS_ContentInfo *VAR_3, BIO *VAR_4, BIO *VAR_5, unsigned int VAR_6)
{
    BIO *VAR_7;
    int VAR_8 = 0;

    if ((VAR_7 = FUNC_2(VAR_3, VAR_5)) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        return 0;
    }

    FUNC_4(VAR_4, VAR_7, VAR_6);

    (void)FUNC_0(VAR_7);

    if (!FUNC_1(VAR_3, VAR_7)) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }

    VAR_8 = 1;

 err:
    FUNC_5(VAR_7, VAR_5);

    return VAR_8;

}
