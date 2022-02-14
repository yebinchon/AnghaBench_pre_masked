
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ethhdr {int h_proto; int h_dest; int h_source; } ;
struct TYPE_2__ {int h_proto; int h_source; int h_dest; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 struct ethhdr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_1,
     struct sk_buff *VAR_2)
{
 struct ethhdr *VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_0);
 FUNC_4(VAR_2);
 FUNC_1(VAR_3->h_source, FUNC_0(VAR_1)->h_dest);
 FUNC_1(VAR_3->h_dest, FUNC_0(VAR_1)->h_source);
 VAR_3->h_proto = FUNC_0(VAR_1)->h_proto;
 FUNC_2(VAR_2, VAR_0);
}
