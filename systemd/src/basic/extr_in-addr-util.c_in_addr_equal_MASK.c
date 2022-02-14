
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* s6_addr32; } ;
union in_addr_union {TYPE_1__ in6; int in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union in_addr_union const*) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(int VAR_3, const union in_addr_union *VAR_4, const union in_addr_union *VAR_5) {
        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        if (VAR_3 == VAR_0)
                return FUNC_1(&VAR_4->in, &VAR_5->in);

        if (VAR_3 == VAR_1)
                return
                        VAR_4->in6.s6_addr32[0] == VAR_5->in6.s6_addr32[0] &&
                        VAR_4->in6.s6_addr32[1] == VAR_5->in6.s6_addr32[1] &&
                        VAR_4->in6.s6_addr32[2] == VAR_5->in6.s6_addr32[2] &&
                        VAR_4->in6.s6_addr32[3] == VAR_5->in6.s6_addr32[3];

        return -VAR_2;
}
