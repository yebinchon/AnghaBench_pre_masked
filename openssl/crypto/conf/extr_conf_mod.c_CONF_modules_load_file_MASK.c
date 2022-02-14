
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 () ;
 int FUNC_1 (int *,char const*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

int FUNC_9(const char *VAR_3, const char *VAR_4,
                           unsigned long VAR_5)
{
    char *VAR_6 = ((void*)0);
    CONF *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    VAR_7 = FUNC_7(((void*)0));
    if (VAR_7 == ((void*)0))
        goto err;

    if (VAR_3 == ((void*)0)) {
        VAR_6 = FUNC_0();
        if (!VAR_6)
            goto err;
    } else
        VAR_6 = (char *)VAR_3;

    if (FUNC_6(VAR_7, VAR_6, ((void*)0)) <= 0) {
        if ((VAR_5 & VAR_0) &&
            (FUNC_2(FUNC_4()) == VAR_2)) {
            FUNC_3();
            VAR_8 = 1;
        }
        goto err;
    }

    VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);

 err:
    if (VAR_3 == ((void*)0))
        FUNC_8(VAR_6);
    FUNC_5(VAR_7);

    if (VAR_5 & VAR_1)
        return 1;

    return VAR_8;
}
