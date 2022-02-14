
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ tail; TYPE_1__* dev; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nf_dn_rtmsg {int nfdn_ifindex; } ;
typedef scalar_t__ sk_buff_data_t ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (struct nf_dn_rtmsg*) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_4 (size_t,int ) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,size_t,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned char*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sk_buff *VAR_2, int *VAR_3)
{
 struct sk_buff *VAR_4 = ((void*)0);
 size_t VAR_5;
 sk_buff_data_t VAR_6;
 struct nlmsghdr *VAR_7;
 unsigned char *VAR_8;
 struct nf_dn_rtmsg *VAR_9;

 VAR_5 = FUNC_1(VAR_2->len) +
        FUNC_1(sizeof(struct nf_dn_rtmsg));
 VAR_4 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_4) {
  *VAR_3 = -VAR_0;
  return ((void*)0);
 }
 VAR_6 = VAR_4->tail;
 VAR_7 = FUNC_5(VAR_4, 0, 0, 0, VAR_5, 0);
 if (!VAR_7) {
  FUNC_2(VAR_4);
  *VAR_3 = -VAR_0;
  return ((void*)0);
 }
 VAR_9 = (struct nf_dn_rtmsg *)FUNC_3(VAR_7);
 VAR_9->nfdn_ifindex = VAR_2->dev->ifindex;
 VAR_8 = FUNC_0(VAR_9);
 FUNC_6(VAR_2, VAR_8, VAR_2->len);
 VAR_7->nlmsg_len = VAR_4->tail - VAR_6;
 return VAR_4;
}
