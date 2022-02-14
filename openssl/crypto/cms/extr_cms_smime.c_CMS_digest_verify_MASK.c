
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(CMS_ContentInfo *VAR_3, BIO *VAR_4, BIO *VAR_5,
                      unsigned int VAR_6)
{
    BIO *VAR_7;
    int VAR_8;
    if (FUNC_3(FUNC_1(VAR_3)) != VAR_2) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }

    if (!VAR_4 && !FUNC_4(VAR_3))
        return 0;

    VAR_7 = FUNC_0(VAR_3, VAR_4);
    if (!VAR_7)
        return 0;
    VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_6);
    if (VAR_8)
        VAR_8 = FUNC_5(VAR_3, VAR_7, 1);
    FUNC_7(VAR_7, VAR_4);
    return VAR_8;
}
