
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_attachment_info {int flags; scalar_t__ prog; } ;
struct netdev_bpf {int flags; int extack; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

bool FUNC_1(struct xdp_attachment_info *VAR_1,
        struct netdev_bpf *VAR_2)
{
 if (VAR_1->prog && (VAR_2->flags ^ VAR_1->flags) & VAR_0) {
  FUNC_0(VAR_2->extack,
          "program loaded with different flags");
  return 0;
 }
 return 1;
}
