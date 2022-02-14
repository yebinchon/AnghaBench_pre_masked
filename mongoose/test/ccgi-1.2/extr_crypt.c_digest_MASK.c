
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void const*,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const void *VAR_1, int VAR_2, const char *VAR_3,
    const unsigned char *VAR_4, unsigned char *VAR_5)
{
    EVP_MD_CTX VAR_6;
    unsigned int VAR_7;

    FUNC_1(&VAR_6, FUNC_3());
    FUNC_2(&VAR_6, VAR_4, VAR_0);
    FUNC_2(&VAR_6, VAR_3, FUNC_4(VAR_3));
    FUNC_2(&VAR_6, VAR_1, VAR_2);
    FUNC_0(&VAR_6, VAR_5, &VAR_7);
}
