
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnet_hdr ;
struct virtio_net_hdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct msghdr*,void*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct sk_buff const*,struct virtio_net_hdr*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct msghdr *VAR_1, const struct sk_buff *VAR_2,
      size_t *VAR_3)
{
 struct virtio_net_hdr VAR_4;

 if (*VAR_3 < sizeof(VAR_4))
  return -VAR_0;
 *VAR_3 -= sizeof(VAR_4);

 if (FUNC_2(VAR_2, &VAR_4, FUNC_1(), 1, 0))
  return -VAR_0;

 return FUNC_0(VAR_1, (void *)&VAR_4, sizeof(VAR_4));
}
