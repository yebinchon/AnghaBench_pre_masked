
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (void const*,void const*,int ) ;

__attribute__((used)) static inline int FUNC_3(const void *VAR_0, size_t VAR_1, const void *VAR_2, size_t VAR_3) {
        return FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_1, VAR_3))
            ?: FUNC_0(VAR_1, VAR_3);
}
