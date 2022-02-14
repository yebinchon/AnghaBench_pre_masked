
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (void*,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, size_t VAR_1)
{
    if (FUNC_1(VAR_0, VAR_1)) {
        FUNC_2("fuzzer: freeing low address buffer");
        FUNC_0();
    }
}
