
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,char*,char const*,char const*) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int * FUNC_8 (char const*,char const*) ;
 int * FUNC_9 (char const*,char) ;

BIO *FUNC_10(const char *VAR_10, const char *VAR_11)
{
    BIO *VAR_12;
    FILE *VAR_13 = FUNC_8(VAR_10, VAR_11);
    int VAR_14 = VAR_0;

    if (FUNC_9(VAR_11, 'b') == ((void*)0))
        VAR_14 |= VAR_2;

    if (VAR_13 == ((void*)0)) {
        FUNC_5(VAR_7, FUNC_7(),
                       "calling fopen(%s, %s)",
                       VAR_10, VAR_11);
        if (VAR_9 == VAR_5



            )
            FUNC_4(VAR_3, VAR_4);
        else
            FUNC_4(VAR_3, VAR_8);
        return ((void*)0);
    }
    if ((VAR_12 = FUNC_1(FUNC_2())) == ((void*)0)) {
        FUNC_6(VAR_13);
        return ((void*)0);
    }


    FUNC_0(VAR_12, VAR_1);
    FUNC_3(VAR_12, VAR_13, VAR_14);
    return VAR_12;
}
