
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_buff {unsigned long data; unsigned long data_meta; } ;


 scalar_t__ FUNC_0 (struct xdp_buff const*) ;

__attribute__((used)) static unsigned long FUNC_1(const struct xdp_buff *VAR_0)
{
 return FUNC_0(VAR_0) ? 0 :
        VAR_0->data - VAR_0->data_meta;
}
