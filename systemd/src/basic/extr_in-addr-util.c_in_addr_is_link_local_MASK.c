
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union in_addr_union {int in6; int in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (union in_addr_union const*) ;
 int FUNC_2 (int *) ;

int FUNC_3(int VAR_3, const union in_addr_union *VAR_4) {
        FUNC_1(VAR_4);

        if (VAR_3 == VAR_0)
                return FUNC_2(&VAR_4->in);

        if (VAR_3 == VAR_1)
                return FUNC_0(&VAR_4->in6);

        return -VAR_2;
}
