
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int udp_lookup_t ;
struct udphdr {scalar_t__ check; int dest; int source; int len; } ;
struct sock {int dummy; } ;
struct sk_buff {int encapsulation; scalar_t__ remcsum_offload; scalar_t__ data; scalar_t__ len; } ;
typedef int __be16 ;
struct TYPE_4__ {int gso_type; } ;
struct TYPE_3__ {int (* gro_complete ) (struct sock*,struct sk_buff*,int) ;scalar_t__ gro_enabled; } ;


 int VAR_0 ;
 struct sock* FUNC_0 (int ,int ,int ,struct sk_buff*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;

int FUNC_8(struct sk_buff *VAR_6, int VAR_7,
       udp_lookup_t VAR_8)
{
 __be16 VAR_9 = FUNC_1(VAR_6->len - VAR_7);
 struct udphdr *VAR_10 = (struct udphdr *)(VAR_6->data + VAR_7);
 int VAR_11 = -VAR_0;
 struct sock *VAR_12;

 VAR_10->len = VAR_9;

 FUNC_2();
 VAR_12 = FUNC_0(VAR_8, VAR_5,
    VAR_4, VAR_6, VAR_10->source, VAR_10->dest);
 if (VAR_12 && FUNC_7(VAR_12)->gro_enabled) {
  VAR_11 = FUNC_6(VAR_6);
 } else if (VAR_12 && FUNC_7(VAR_12)->gro_complete) {
  FUNC_4(VAR_6)->gso_type = VAR_10->check ? VAR_3
     : VAR_2;




  VAR_6->encapsulation = 1;
  VAR_11 = FUNC_7(VAR_12)->gro_complete(VAR_12, VAR_6,
    VAR_7 + sizeof(struct udphdr));
 }
 FUNC_3();

 if (VAR_6->remcsum_offload)
  FUNC_4(VAR_6)->gso_type |= VAR_1;

 return VAR_11;
}
