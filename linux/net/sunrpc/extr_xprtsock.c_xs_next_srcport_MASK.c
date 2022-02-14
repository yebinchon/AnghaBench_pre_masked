
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resvport; } ;
struct sock_xprt {scalar_t__ srcport; TYPE_1__ xprt; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;

__attribute__((used)) static unsigned short FUNC_0(struct sock_xprt *VAR_2, unsigned short VAR_3)
{
 if (VAR_2->srcport != 0)
  VAR_2->srcport = 0;
 if (!VAR_2->xprt.resvport)
  return 0;
 if (VAR_3 <= VAR_1 || VAR_3 > VAR_0)
  return VAR_0;
 return --VAR_3;
}
