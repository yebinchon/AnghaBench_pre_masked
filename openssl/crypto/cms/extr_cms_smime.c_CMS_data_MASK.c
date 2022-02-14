
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,unsigned int) ;

int FUNC_6(CMS_ContentInfo *VAR_3, BIO *VAR_4, unsigned int VAR_5)
{
    BIO *VAR_6;
    int VAR_7;
    if (FUNC_4(FUNC_2(VAR_3)) != VAR_2) {
        FUNC_3(VAR_0, VAR_1);
        return 0;
    }
    VAR_6 = FUNC_1(VAR_3, ((void*)0));
    if (!VAR_6)
        return 0;
    VAR_7 = FUNC_5(VAR_4, VAR_6, VAR_5);
    FUNC_0(VAR_6);
    return VAR_7;
}
