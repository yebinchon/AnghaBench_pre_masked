
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_hdr {int dummy; } ;
struct msghdr {int msg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct virtio_net_hdr*,size_t) ;
 int FUNC_1 (struct virtio_net_hdr*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct msghdr *VAR_2, size_t *VAR_3,
     struct virtio_net_hdr *VAR_4)
{
 if (*VAR_3 < sizeof(*VAR_4))
  return -VAR_1;
 *VAR_3 -= sizeof(*VAR_4);

 if (!FUNC_1(VAR_4, sizeof(*VAR_4), &VAR_2->msg_iter))
  return -VAR_0;

 return FUNC_0(VAR_4, *VAR_3);
}
