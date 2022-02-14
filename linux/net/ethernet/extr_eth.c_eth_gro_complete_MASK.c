
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ encapsulation; scalar_t__ data; } ;
struct TYPE_2__ {int (* gro_complete ) (struct sk_buff*,int) ;} ;
struct packet_offload {TYPE_1__ callbacks; } ;
struct ethhdr {int h_proto; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct packet_offload* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

int FUNC_5(struct sk_buff *VAR_1, int VAR_2)
{
 struct ethhdr *VAR_3 = (struct ethhdr *)(VAR_1->data + VAR_2);
 __be16 VAR_4 = VAR_3->h_proto;
 struct packet_offload *VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_1->encapsulation)
  FUNC_3(VAR_1, VAR_2);

 FUNC_1();
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 != ((void*)0))
  VAR_6 = VAR_5->callbacks.gro_complete(VAR_1, VAR_2 +
          sizeof(struct ethhdr));

 FUNC_2();
 return VAR_6;
}
