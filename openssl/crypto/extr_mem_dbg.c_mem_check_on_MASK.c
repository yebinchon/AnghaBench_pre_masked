
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CRYPTO_THREAD_ID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(void)
{
    int VAR_7 = 0;
    CRYPTO_THREAD_ID VAR_8;

    if (VAR_6 & VAR_1) {
        if (!FUNC_4(&VAR_4, VAR_3))
            return 0;

        VAR_8 = FUNC_1();
        FUNC_2(VAR_5);

        VAR_7 = (VAR_6 & VAR_0)
            || !FUNC_0(VAR_2, VAR_8);

        FUNC_3(VAR_5);
    }
    return VAR_7;
}
