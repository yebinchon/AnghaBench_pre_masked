
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_RC4_KEY ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static const EVP_CIPHER *FUNC_7(void)
{
    if (VAR_2 == ((void*)0)) {
        EVP_CIPHER *VAR_5;

        if ((VAR_5 = FUNC_1(VAR_1, 1, 5 )) == ((void*)0)
            || !FUNC_6(VAR_5, 0)
            || !FUNC_3(VAR_5, VAR_0)
            || !FUNC_5(VAR_5, VAR_4)
            || !FUNC_2(VAR_5, VAR_3)
            || !FUNC_4(VAR_5, sizeof(TEST_RC4_KEY))) {
            FUNC_0(VAR_5);
            VAR_5 = ((void*)0);
        }
        VAR_2 = VAR_5;
    }
    return VAR_2;
}
