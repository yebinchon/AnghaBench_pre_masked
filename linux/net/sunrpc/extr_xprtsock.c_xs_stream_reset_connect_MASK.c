
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ copied; scalar_t__ len; scalar_t__ offset; } ;
struct sock_xprt {TYPE_2__ xmit; TYPE_1__ recv; } ;



__attribute__((used)) static void
FUNC_0(struct sock_xprt *VAR_0)
{
 VAR_0->recv.offset = 0;
 VAR_0->recv.len = 0;
 VAR_0->recv.copied = 0;
 VAR_0->xmit.offset = 0;
}
