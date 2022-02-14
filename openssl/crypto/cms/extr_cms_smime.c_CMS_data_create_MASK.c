
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int *,unsigned int) ;
 int * FUNC_2 () ;

CMS_ContentInfo *FUNC_3(BIO *VAR_1, unsigned int VAR_2)
{
    CMS_ContentInfo *VAR_3;
    VAR_3 = FUNC_2();
    if (!VAR_3)
        return ((void*)0);

    if ((VAR_2 & VAR_0) || FUNC_1(VAR_3, VAR_1, ((void*)0), VAR_2))
        return VAR_3;

    FUNC_0(VAR_3);

    return ((void*)0);
}
