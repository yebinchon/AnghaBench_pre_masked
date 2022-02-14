
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void**,size_t,size_t) ;

__attribute__((used)) static inline void *
FUNC_3(size_t VAR_0, size_t VAR_1)
{
    void *VAR_2;

    FUNC_1((VAR_1 & (VAR_1 - 1)) == 0);

    VAR_0 = (VAR_0 + VAR_1 - 1) & ~(VAR_1 - 1);
    if (FUNC_0(FUNC_2(&VAR_2, VAR_1, VAR_0)))
        return ((void*)0);

    return VAR_2;
}
