
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_ops {int dummy; } ;
typedef int OrderedSet ;


 int VAR_0 ;
 int * FUNC_0 (struct hash_ops const*) ;

__attribute__((used)) static inline int FUNC_1(OrderedSet **VAR_1, const struct hash_ops *VAR_2) {
        if (*VAR_1)
                return 0;

        *VAR_1 = FUNC_0(VAR_2);
        if (!*VAR_1)
                return -VAR_0;

        return 0;
}
