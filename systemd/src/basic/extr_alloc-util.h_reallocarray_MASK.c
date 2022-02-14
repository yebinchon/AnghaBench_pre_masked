
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (size_t,size_t) ;

__attribute__((used)) static inline void *FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2) {
        if (FUNC_1(VAR_2, VAR_1))
                return ((void*)0);

        return FUNC_0(VAR_0, VAR_2 * VAR_1 ?: 1);
}
