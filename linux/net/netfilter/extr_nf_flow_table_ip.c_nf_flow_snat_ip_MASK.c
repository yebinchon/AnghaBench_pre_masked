
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iphdr {int check; void* daddr; void* saddr; } ;
struct flow_offload {TYPE_3__* tuplehash; } ;
typedef enum flow_offload_tuple_dir { ____Placeholder_flow_offload_tuple_dir } flow_offload_tuple_dir ;
typedef void* __be32 ;
struct TYPE_8__ {void* s_addr; } ;
struct TYPE_5__ {void* s_addr; } ;
struct TYPE_6__ {TYPE_1__ src_v4; TYPE_4__ dst_v4; } ;
struct TYPE_7__ {TYPE_2__ tuple; } ;




 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (struct sk_buff*,struct iphdr*,unsigned int,void*,void*) ;

__attribute__((used)) static int FUNC_2(const struct flow_offload *VAR_0, struct sk_buff *VAR_1,
      struct iphdr *VAR_2, unsigned int VAR_3,
      enum flow_offload_tuple_dir VAR_4)
{
 __be32 VAR_5, VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_5 = VAR_2->saddr;
  VAR_6 = VAR_0->tuplehash[128].tuple.dst_v4.s_addr;
  VAR_2->saddr = VAR_6;
  break;
 case 128:
  VAR_5 = VAR_2->daddr;
  VAR_6 = VAR_0->tuplehash[129].tuple.src_v4.s_addr;
  VAR_2->daddr = VAR_6;
  break;
 default:
  return -1;
 }
 FUNC_0(&VAR_2->check, VAR_5, VAR_6);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
}
