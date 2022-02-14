
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tci; int tpid; } ;
struct TYPE_6__ {int type; TYPE_2__ cvlan; int dst; int src; } ;
struct TYPE_4__ {scalar_t__ flags; } ;
struct sw_flow_key {TYPE_3__ eth; TYPE_1__ tp; } ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct ethhdr {int h_dest; int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct sw_flow_key*) ;
 struct ethhdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,struct sw_flow_key*) ;
 scalar_t__ FUNC_8 (struct sw_flow_key*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,struct sw_flow_key*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_5, struct sw_flow_key *VAR_6)
{
 struct ethhdr *VAR_7;


 VAR_6->tp.flags = 0;

 FUNC_12(VAR_5);


 FUNC_2(VAR_6);
 if (FUNC_8(VAR_6) == VAR_3) {
  if (FUNC_15(FUNC_4(VAR_5->protocol)))
   return -VAR_0;

  FUNC_14(VAR_5);
  VAR_6->eth.type = VAR_5->protocol;
 } else {
  VAR_7 = FUNC_3(VAR_5);
  FUNC_5(VAR_6->eth.src, VAR_7->h_source);
  FUNC_5(VAR_6->eth.dst, VAR_7->h_dest);

  FUNC_0(VAR_5, 2 * VAR_2);




  if (FUNC_15(FUNC_10(VAR_5, VAR_6)))
   return -VAR_1;

  VAR_6->eth.type = FUNC_9(VAR_5);
  if (FUNC_15(VAR_6->eth.type == FUNC_6(0)))
   return -VAR_1;





  if (VAR_6->eth.cvlan.tci & FUNC_6(VAR_4))
   VAR_5->protocol = VAR_6->eth.cvlan.tpid;
  else
   VAR_5->protocol = VAR_6->eth.type;

  FUNC_14(VAR_5);
  FUNC_1(VAR_5, VAR_5->data - FUNC_11(VAR_5));
 }

 FUNC_13(VAR_5);


 return FUNC_7(VAR_5, VAR_6);
}
