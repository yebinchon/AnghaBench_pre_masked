
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,size_t) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (char const*,size_t) ;

__attribute__((used)) static __attribute__((noinline)) const char *FUNC_4(const char *VAR_1, size_t VAR_2)
{
    if (FUNC_0(VAR_2 > VAR_0)) {
        FUNC_1("Variable name exceeds %d bytes", VAR_0);
        return ((void*)0);
    }

    return FUNC_2(FUNC_3(VAR_1, VAR_2));
}
