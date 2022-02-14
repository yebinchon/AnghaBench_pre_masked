
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __compar_fn_t ;


 int FUNC_0 (void const*) ;
 void* FUNC_1 (void const*,void const*,size_t,size_t,int ) ;

__attribute__((used)) static inline void* FUNC_2(const void *VAR_0, const void *VAR_1,
                                 size_t VAR_2, size_t VAR_3, __compar_fn_t VAR_4) {
        if (VAR_2 <= 0)
                return ((void*)0);

        FUNC_0(VAR_1);
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
