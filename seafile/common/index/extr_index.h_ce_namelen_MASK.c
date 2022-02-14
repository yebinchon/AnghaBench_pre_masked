
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {size_t ce_flags; scalar_t__ name; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline size_t FUNC_1(const struct cache_entry *VAR_1)
{
    size_t VAR_2 = VAR_1->ce_flags & VAR_0;
    if (VAR_2 < VAR_0)
        return VAR_2;
    return FUNC_0(VAR_1->name + VAR_0) + VAR_0;
}
