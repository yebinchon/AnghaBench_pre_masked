
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
union in_addr_union {int in6; TYPE_1__ in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union in_addr_union const*) ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_3, const union in_addr_union *VAR_4) {
        FUNC_2(VAR_4);

        if (VAR_3 == VAR_0)
                return FUNC_1(FUNC_3(VAR_4->in.s_addr));

        if (VAR_3 == VAR_1)
                return FUNC_0(&VAR_4->in6);

        return -VAR_2;
}
