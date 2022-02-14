
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static BIO *FUNC_11(const char *VAR_3)
{





    BIO *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

    VAR_5 = FUNC_4(FUNC_1());
    if (VAR_5 == ((void*)0))
        goto err;
    VAR_4 = FUNC_4(FUNC_6());
    if (VAR_4 == ((void*)0)
        || FUNC_9(VAR_4, VAR_0) < 0
        || FUNC_8(VAR_4, VAR_3) < 0) {
        FUNC_10(VAR_1, "Error setting up accept BIO");
        goto err;
    }

    FUNC_7(VAR_4, VAR_5);
    VAR_5 = ((void*)0);
    if (FUNC_0(VAR_4) <= 0) {
        FUNC_10(VAR_1, "Error starting accept");
        goto err;
    }

    return VAR_4;

 err:
    FUNC_3(VAR_4);
    FUNC_2(VAR_5);
    return ((void*)0);

}
