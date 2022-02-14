
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (char const*,char const*) ;
 scalar_t__ VAR_3 ;

void FUNC_4()
{
    const char VAR_4[] = "nfsddbg.log";
    const char VAR_5[] = "nfsderr.log";
    const char VAR_6[] = "w";
    if (VAR_3 > 0) {
        VAR_1 = FUNC_3(VAR_4, VAR_6);
        if (VAR_1 == ((void*)0)) {
            FUNC_1(VAR_0, FUNC_0(), 0);
            FUNC_2 (FUNC_0());
        }
    }
    VAR_2 = FUNC_3(VAR_5, VAR_6);
    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_0, FUNC_0(), 0);
        FUNC_2 (FUNC_0());
    }
}
