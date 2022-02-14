
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,size_t) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void *
FUNC_4(void *VAR_1, size_t VAR_2)
{
    void *VAR_3;

    VAR_3 = FUNC_2(VAR_1, VAR_2);
    if (VAR_3 != ((void*)0)) {
        if (FUNC_3() > VAR_0) {
            FUNC_0();
            FUNC_1(VAR_3);
            return (((void*)0));
        }
    }
    return (VAR_3);
}
