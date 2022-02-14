
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; TYPE_1__* dev; int inner_protocol; scalar_t__ encapsulation; } ;
struct mpls_shim_hdr {int label_stack_entry; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 struct mpls_shim_hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct mpls_shim_hdr*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct sk_buff *VAR_3, __be32 VAR_4, __be16 VAR_5,
    int VAR_6)
{
 struct mpls_shim_hdr *VAR_7;
 int VAR_8;

 if (FUNC_13(!FUNC_1(VAR_5)))
  return -VAR_1;


 if (VAR_3->encapsulation)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_3, VAR_2);
 if (FUNC_13(VAR_8))
  return VAR_8;

 if (!VAR_3->inner_protocol) {
  FUNC_10(VAR_3, VAR_6);
  FUNC_11(VAR_3, VAR_3->protocol);
 }

 FUNC_8(VAR_3, VAR_2);
 FUNC_2(FUNC_5(VAR_3) - VAR_2, FUNC_5(VAR_3),
  VAR_6);
 FUNC_9(VAR_3);
 FUNC_12(VAR_3, VAR_6);

 VAR_7 = FUNC_3(VAR_3);
 VAR_7->label_stack_entry = VAR_4;
 FUNC_7(VAR_3, VAR_7, VAR_2);

 if (VAR_3->dev && VAR_3->dev->type == VAR_0)
  FUNC_6(VAR_3, FUNC_0(VAR_3), VAR_5);
 VAR_3->protocol = VAR_5;

 return 0;
}
