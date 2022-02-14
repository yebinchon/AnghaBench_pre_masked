
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,long*) ;

__attribute__((used)) static int FUNC_6(CONF *VAR_4, const char *VAR_5, long *VAR_6)
{
    int VAR_7;
    BIO *VAR_8 = ((void*)0);




    VAR_8 = FUNC_1(VAR_5, "rb");

    if (VAR_8 == ((void*)0)) {
        if (FUNC_3(FUNC_4()) == VAR_0)
            FUNC_2(VAR_1, VAR_2);
        else
            FUNC_2(VAR_1, VAR_3);
        return 0;
    }

    VAR_7 = FUNC_5(VAR_4, VAR_8, VAR_6);
    FUNC_0(VAR_8);

    return VAR_7;
}
