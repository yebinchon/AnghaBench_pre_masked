
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct nf_bridge_info {int * physoutdev; int physindev; int neigh_header; scalar_t__ bridged_dnat; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct nf_bridge_info* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int,int ,int) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2)
{
 struct nf_bridge_info *VAR_3 = FUNC_3(VAR_2);

 FUNC_5(VAR_2, VAR_1);
 VAR_3->bridged_dnat = 0;

 FUNC_0(sizeof(VAR_3->neigh_header) != (VAR_1 - VAR_0));

 FUNC_4(VAR_2, -(VAR_1 - VAR_0),
           VAR_3->neigh_header,
           VAR_1 - VAR_0);
 VAR_2->dev = VAR_3->physindev;

 VAR_3->physoutdev = ((void*)0);
 FUNC_1(FUNC_2(VAR_2->dev), ((void*)0), VAR_2);
}
