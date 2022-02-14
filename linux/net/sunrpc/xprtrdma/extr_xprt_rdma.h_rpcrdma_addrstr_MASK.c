
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** address_strings; } ;
struct rpcrdma_xprt {TYPE_1__ rx_xprt; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline const char *
FUNC_0(const struct rpcrdma_xprt *VAR_1)
{
 return VAR_1->rx_xprt.address_strings[VAR_0];
}
