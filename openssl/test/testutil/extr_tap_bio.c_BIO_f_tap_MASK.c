
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const BIO_METHOD ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (int,char*) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (int const*,int ) ;
 int FUNC_8 (int const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

const BIO_METHOD *FUNC_9(void)
{
    static BIO_METHOD *VAR_10 = ((void*)0);

    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_0(VAR_1 | VAR_0, "tap");
        if (VAR_10 != ((void*)0)) {
            FUNC_8(VAR_10, VAR_9);
            FUNC_7(VAR_10, VAR_8);
            FUNC_6(VAR_10, VAR_7);
            FUNC_5(VAR_10, VAR_5);
            FUNC_3(VAR_10, VAR_3);
            FUNC_2(VAR_10, VAR_6);
            FUNC_4(VAR_10, VAR_4);
            FUNC_1(VAR_10, VAR_2);
        }
    }
    return VAR_10;
}
