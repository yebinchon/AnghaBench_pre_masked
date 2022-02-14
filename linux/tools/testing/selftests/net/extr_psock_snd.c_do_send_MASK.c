
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_hdr {int dummy; } ;
struct sockaddr_ll {int sll_ifindex; int sll_protocol; int member_0; } ;
typedef int laddr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int,int ,void*,int) ;
 int VAR_7 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(int VAR_8, char *VAR_9, int VAR_10)
{
 int VAR_11;

 if (!VAR_5) {
  VAR_9 += sizeof(struct virtio_net_hdr);
  VAR_10 -= sizeof(struct virtio_net_hdr);
 }
 if (VAR_4) {
  VAR_9 += VAR_0;
  VAR_10 -= VAR_0;
 }

 if (VAR_3) {
  VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_10);
 } else {
  struct sockaddr_ll VAR_12 = {0};

  VAR_12.sll_protocol = FUNC_2(VAR_1);
  VAR_12.sll_ifindex = FUNC_3(VAR_2);
  if (!VAR_12.sll_ifindex)
   FUNC_0(1, VAR_6, "if_nametoindex");

  VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_10, 0, (void *)&VAR_12, sizeof(VAR_12));
 }

 if (VAR_11 == -1)
  FUNC_0(1, VAR_6, "write");
 if (VAR_11 != VAR_10)
  FUNC_0(1, 0, "write: %u %u", VAR_11, VAR_10);

 FUNC_1(VAR_7, "tx: %u\n", VAR_11);
}
