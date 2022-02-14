
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int FUNC_0 (struct in_addr const*) ;
 int FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;

unsigned char FUNC_3(const struct in_addr *VAR_0) {
        FUNC_0(VAR_0);

        return 32U - FUNC_2(FUNC_1(VAR_0->s_addr));
}
