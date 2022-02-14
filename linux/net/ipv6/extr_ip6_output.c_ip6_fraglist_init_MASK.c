
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {unsigned int len; scalar_t__ data_len; } ;
struct ipv6hdr {int dummy; } ;
struct ip6_fraglist_iter {unsigned int hlen; int tmp_hdr; void* nexthdr; void* frag_id; scalar_t__ offset; int frag; } ;
struct frag_hdr {void* identification; void* frag_off; scalar_t__ reserved; void* nexthdr; } ;
typedef void* __be32 ;
struct TYPE_4__ {void* payload_len; } ;
struct TYPE_3__ {int frag_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 struct frag_hdr* FUNC_1 (struct sk_buff*,unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;

int FUNC_12(struct sk_buff *VAR_4, unsigned int VAR_5, u8 *VAR_6,
        u8 VAR_7, __be32 VAR_8,
        struct ip6_fraglist_iter *VAR_9)
{
 unsigned int VAR_10;
 struct frag_hdr *VAR_11;


 *VAR_6 = VAR_3;
 VAR_9->tmp_hdr = FUNC_4(FUNC_8(VAR_4), VAR_5, VAR_1);
 if (!VAR_9->tmp_hdr)
  return -VAR_0;

 VAR_9->frag = FUNC_11(VAR_4)->frag_list;
 FUNC_6(VAR_4);

 VAR_9->offset = 0;
 VAR_9->hlen = VAR_5;
 VAR_9->frag_id = VAR_8;
 VAR_9->nexthdr = VAR_7;

 FUNC_0(VAR_4, VAR_5);
 VAR_11 = FUNC_1(VAR_4, sizeof(struct frag_hdr));
 FUNC_1(VAR_4, VAR_5);
 FUNC_10(VAR_4);
 FUNC_5(FUNC_8(VAR_4), VAR_9->tmp_hdr, VAR_5);

 VAR_11->nexthdr = VAR_7;
 VAR_11->reserved = 0;
 VAR_11->frag_off = FUNC_2(VAR_2);
 VAR_11->identification = VAR_8;

 VAR_10 = FUNC_9(VAR_4);
 VAR_4->data_len = VAR_10 - FUNC_7(VAR_4);
 VAR_4->len = VAR_10;
 FUNC_3(VAR_4)->payload_len = FUNC_2(VAR_10 - sizeof(struct ipv6hdr));

 return 0;
}
