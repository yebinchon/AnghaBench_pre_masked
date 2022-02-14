
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xdp_sock {int rx_dropped; int rx; } ;
struct xdp_buff {scalar_t__ handle; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct xdp_sock *VAR_0, struct xdp_buff *VAR_1, u32 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->rx, (u64)VAR_1->handle, VAR_2);

 if (VAR_3)
  VAR_0->rx_dropped++;

 return VAR_3;
}
