
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static const EVP_MD *FUNC_9(void)
{
    if (VAR_5 == ((void*)0)) {
        EVP_MD *VAR_9;

        if ((VAR_9 = FUNC_1(VAR_1, VAR_2)) == ((void*)0)
            || !FUNC_7(VAR_9, VAR_4)
            || !FUNC_6(VAR_9, VAR_3)
            || !FUNC_2(VAR_9,
                                             sizeof(EVP_MD *) + sizeof(SHA_CTX))
            || !FUNC_4(VAR_9, VAR_0)
            || !FUNC_5(VAR_9, VAR_7)
            || !FUNC_8(VAR_9, VAR_8)
            || !FUNC_3(VAR_9, VAR_6)) {
            FUNC_0(VAR_9);
            VAR_9 = ((void*)0);
        }
        VAR_5 = VAR_9;
    }
    return VAR_5;
}
