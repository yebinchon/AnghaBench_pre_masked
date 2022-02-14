
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 void* FUNC_1 (void const*,size_t,void const*,size_t) ;

__attribute__((used)) static inline void *FUNC_2(const void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3) {

        if (VAR_3 <= 0)
                return (void*) VAR_0;

        if (VAR_1 < VAR_3)
                return ((void*)0);

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
