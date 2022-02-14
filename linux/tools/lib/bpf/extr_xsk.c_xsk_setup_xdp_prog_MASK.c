
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xdp_flags; } ;
struct xsk_socket {int prog_fd; TYPE_1__ config; int ifindex; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (int ,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xsk_socket*) ;
 int FUNC_4 (struct xsk_socket*) ;
 int FUNC_5 (struct xsk_socket*) ;
 int FUNC_6 (struct xsk_socket*) ;
 int FUNC_7 (struct xsk_socket*) ;

__attribute__((used)) static int FUNC_8(struct xsk_socket *VAR_0)
{
 __u32 VAR_1 = 0;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->ifindex, &VAR_1,
      VAR_0->config.xdp_flags);
 if (VAR_2)
  return VAR_2;

 if (!VAR_1) {
  VAR_2 = FUNC_3(VAR_0);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_5(VAR_0);
  if (VAR_2) {
   FUNC_4(VAR_0);
   return VAR_2;
  }
 } else {
  VAR_0->prog_fd = FUNC_1(VAR_1);
  VAR_2 = FUNC_6(VAR_0);
  if (VAR_2) {
   FUNC_2(VAR_0->prog_fd);
   return VAR_2;
  }
 }

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2) {
  FUNC_4(VAR_0);
  FUNC_2(VAR_0->prog_fd);
  return VAR_2;
 }

 return 0;
}
