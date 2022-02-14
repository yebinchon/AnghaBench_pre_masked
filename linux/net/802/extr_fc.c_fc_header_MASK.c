
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {void const* dev_addr; int addr_len; } ;
struct fcllc {int* protid; int ethertype; int llc; int ssap; int dsap; } ;
struct fch_hdr {int daddr; int saddr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ,void const*,int ) ;
 struct fch_hdr* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, struct net_device *VAR_5,
       unsigned short VAR_6,
       const void *VAR_7, const void *VAR_8, unsigned int VAR_9)
{
 struct fch_hdr *VAR_10;
 int VAR_11;





 if (VAR_6 == VAR_1 || VAR_6 == VAR_0)
 {
  struct fcllc *VAR_12;

  VAR_11 = sizeof(struct fch_hdr) + sizeof(struct fcllc);
  VAR_10 = FUNC_2(VAR_4, VAR_11);
  VAR_12 = (struct fcllc *)(VAR_10+1);
  VAR_12->dsap = VAR_12->ssap = VAR_2;
  VAR_12->llc = VAR_3;
  VAR_12->protid[0] = VAR_12->protid[1] = VAR_12->protid[2] = 0x00;
  VAR_12->ethertype = FUNC_0(VAR_6);
 }
 else
 {
  VAR_11 = sizeof(struct fch_hdr);
  VAR_10 = FUNC_2(VAR_4, VAR_11);
 }

 if(VAR_8)
  FUNC_1(VAR_10->saddr,VAR_8,VAR_5->addr_len);
 else
  FUNC_1(VAR_10->saddr,VAR_5->dev_addr,VAR_5->addr_len);

 if(VAR_7)
 {
  FUNC_1(VAR_10->daddr,VAR_7,VAR_5->addr_len);
  return VAR_11;
 }
 return -VAR_11;
}
