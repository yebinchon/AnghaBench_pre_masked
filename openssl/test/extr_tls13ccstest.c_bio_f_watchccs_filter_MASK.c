
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO_METHOD ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (int const*,int ) ;
 int const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static const BIO_METHOD *FUNC_8(void)
{
    if (VAR_1 == ((void*)0)) {
        VAR_1 = FUNC_0(VAR_0,
                                       "Watch CCS filter");
        if ( VAR_1 == ((void*)0)
            || !FUNC_7(VAR_1, VAR_8)
            || !FUNC_6(VAR_1, VAR_7)
            || !FUNC_5(VAR_1, VAR_6)
            || !FUNC_4(VAR_1, VAR_4)
            || !FUNC_2(VAR_1, VAR_2)
            || !FUNC_1(VAR_1, VAR_5)
            || !FUNC_3(VAR_1, VAR_3))
            return ((void*)0);
    }
    return VAR_1;
}
