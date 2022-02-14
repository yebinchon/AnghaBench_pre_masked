
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int,int ,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

int FUNC_6(X509 *VAR_0, const char *VAR_1, const char *VAR_2,
                   int VAR_3)
{
    if (VAR_1 == ((void*)0) || FUNC_5(VAR_1, "today") == 0) {
        if (FUNC_3(FUNC_2(VAR_0), 0) == ((void*)0))
            return 0;
    } else {
        if (!FUNC_0(FUNC_2(VAR_0), VAR_1))
            return 0;
    }
    if (VAR_2 == ((void*)0)) {
        if (FUNC_4(FUNC_1(VAR_0), VAR_3, 0, ((void*)0))
            == ((void*)0))
            return 0;
    } else if (!FUNC_0(FUNC_1(VAR_0), VAR_2)) {
        return 0;
    }
    return 1;
}
