
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_attachment_info {int flags; scalar_t__ prog; } ;
struct netdev_bpf {int flags; scalar_t__ prog; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct xdp_attachment_info *VAR_0,
     struct netdev_bpf *VAR_1)
{
 if (VAR_0->prog)
  FUNC_0(VAR_0->prog);
 VAR_0->prog = VAR_1->prog;
 VAR_0->flags = VAR_1->flags;
}
