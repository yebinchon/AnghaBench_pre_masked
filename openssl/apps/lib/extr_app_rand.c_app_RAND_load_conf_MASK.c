
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *,char const*,char*) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 int VAR_0 ;
 int * VAR_1 ;

void FUNC_6(CONF *VAR_2, const char *VAR_3)
{
    const char *VAR_4 = FUNC_3(VAR_2, VAR_3, "RANDFILE");

    if (VAR_4 == ((void*)0)) {
        FUNC_1();
        return;
    }
    if (FUNC_5(VAR_4, -1) < 0) {
        FUNC_0(VAR_0, "Can't load %s into RNG\n", VAR_4);
        FUNC_2(VAR_0);
    }
    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_4(VAR_4);
}
