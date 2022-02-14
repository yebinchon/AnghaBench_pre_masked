
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int * const) ;
 int * FUNC_3 (char const*,char*) ;
 size_t FUNC_4 (void*,int,size_t,int * const) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(void* VAR_0, const char* VAR_1, size_t VAR_2)
{
    FILE* const VAR_3 = FUNC_3(VAR_1, "rb");
    if (FUNC_5(VAR_1)) {
        FUNC_0("Ignoring %s directory \n", VAR_1);
        FUNC_1(2);
    }
    if (VAR_3==((void*)0)) {
        FUNC_0("Impossible to open %s \n", VAR_1);
        FUNC_1(3);
    }
    { size_t const VAR_4 = FUNC_4(VAR_0, 1, VAR_2, VAR_3);
        if (VAR_4 != VAR_2) {
            FUNC_0("Error reading %s \n", VAR_1);
            FUNC_1(5);
    } }
    FUNC_2(VAR_3);
}
