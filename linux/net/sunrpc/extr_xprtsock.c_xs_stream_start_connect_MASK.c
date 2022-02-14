
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connect_start; int connect_count; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;
struct sock_xprt {TYPE_2__ xprt; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct sock_xprt *VAR_1)
{
 VAR_1->xprt.stat.connect_count++;
 VAR_1->xprt.stat.connect_start = VAR_0;
}
