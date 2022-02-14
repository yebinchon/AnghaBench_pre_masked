
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct flow_ports {void* source; void* dest; } ;
struct flow_offload {TYPE_2__* tuplehash; } ;
typedef enum flow_offload_tuple_dir { ____Placeholder_flow_offload_tuple_dir } flow_offload_tuple_dir ;
typedef void* __be16 ;
struct TYPE_3__ {void* dst_port; void* src_port; } ;
struct TYPE_4__ {TYPE_1__ tuple; } ;




 int FUNC_0 (struct sk_buff*,unsigned int,int ,void*,void*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;

int FUNC_4(const struct flow_offload *VAR_0,
        struct sk_buff *VAR_1, unsigned int VAR_2,
        u8 VAR_3, enum flow_offload_tuple_dir VAR_4)
{
 struct flow_ports *VAR_5;
 __be16 VAR_6, VAR_7;

 if (!FUNC_1(VAR_1, VAR_2 + sizeof(*VAR_5)) ||
     FUNC_3(VAR_1, VAR_2 + sizeof(*VAR_5)))
  return -1;

 VAR_5 = (void *)(FUNC_2(VAR_1) + VAR_2);

 switch (VAR_4) {
 case 129:
  VAR_6 = VAR_5->dest;
  VAR_7 = VAR_0->tuplehash[128].tuple.src_port;
  VAR_5->dest = VAR_7;
  break;
 case 128:
  VAR_6 = VAR_5->source;
  VAR_7 = VAR_0->tuplehash[129].tuple.dst_port;
  VAR_5->source = VAR_7;
  break;
 default:
  return -1;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7);
}
