
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;
typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 unsigned int VAR_0 ;
 int FUNC_2 (int *,int const*,unsigned char const*,size_t) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int *,int *,unsigned int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;

CMS_ContentInfo *FUNC_6(BIO *VAR_5, const EVP_CIPHER *VAR_6,
                                           const unsigned char *VAR_7,
                                           size_t VAR_8, unsigned int VAR_9)
{
    CMS_ContentInfo *VAR_10;
    if (!VAR_6) {
        FUNC_5(VAR_1, VAR_3);
        return ((void*)0);
    }
    VAR_10 = FUNC_1();
    if (VAR_10 == ((void*)0))
        return ((void*)0);
    if (!FUNC_2(VAR_10, VAR_6, VAR_7, VAR_8))
        return ((void*)0);

    if (!(VAR_9 & VAR_0))
        FUNC_4(VAR_10, 0);

    if ((VAR_9 & (VAR_4 | VAR_2))
        || FUNC_3(VAR_10, VAR_5, ((void*)0), VAR_9))
        return VAR_10;

    FUNC_0(VAR_10);
    return ((void*)0);
}
