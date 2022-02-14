
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcp_info {int dummy; } ;
struct inet_diag_msg {int dummy; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static size_t FUNC_3(void)
{
 return FUNC_0(sizeof(struct inet_diag_msg)
        + FUNC_1(sizeof(u8))
        + FUNC_2(sizeof(struct tcp_info)));
}
