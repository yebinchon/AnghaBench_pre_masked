
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_19__ {int dst; int src; } ;
struct TYPE_18__ {int dst; int src; } ;
struct TYPE_20__ {TYPE_8__ v6addrs; TYPE_7__ v4addrs; } ;
struct TYPE_17__ {int addr_type; } ;
struct TYPE_16__ {scalar_t__ flow_label; } ;
struct TYPE_15__ {scalar_t__ keyid; } ;
struct TYPE_14__ {scalar_t__ ip_proto; } ;
struct TYPE_13__ {scalar_t__ ports; } ;
struct flow_keys {TYPE_9__ addrs; TYPE_6__ control; TYPE_5__ tags; TYPE_4__ keyid; TYPE_3__ basic; TYPE_2__ ports; } ;
struct cake_tin_data {size_t* tags; TYPE_10__* flows; TYPE_1__* hosts; int way_collisions; int way_misses; int way_hits; int way_directs; } ;
struct TYPE_12__ {size_t srchost_tag; size_t dsthost_tag; int dsthost_bulk_flow_count; int srchost_bulk_flow_count; } ;
struct TYPE_11__ {scalar_t__ set; size_t srchost; size_t dsthost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct flow_keys*,struct sk_buff const*) ;
 size_t FUNC_3 (struct flow_keys*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct sk_buff const*,struct flow_keys*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static u32 FUNC_8(struct cake_tin_data *VAR_10, const struct sk_buff *VAR_11,
       int VAR_12, u16 VAR_13, u16 VAR_14)
{
 u32 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 u16 VAR_18, VAR_19, VAR_20;
 struct flow_keys VAR_21, VAR_22;

 if (FUNC_7(VAR_12 == VAR_4))
  return 0;


 if ((VAR_13 || !(VAR_12 & VAR_1)) &&
     (VAR_14 || !(VAR_12 & VAR_2)))
  goto skip_hash;

 FUNC_6(VAR_11, &VAR_21,
       VAR_9);

 if (VAR_12 & VAR_3)
  FUNC_2(&VAR_21, VAR_11);





 VAR_22 = VAR_21;
 VAR_22.ports.ports = 0;
 VAR_22.basic.ip_proto = 0;
 VAR_22.keyid.keyid = 0;
 VAR_22.tags.flow_label = 0;

 switch (VAR_22.control.addr_type) {
 case 129:
  VAR_22.addrs.v4addrs.src = 0;
  VAR_17 = FUNC_3(&VAR_22);
  VAR_22.addrs.v4addrs.src = VAR_21.addrs.v4addrs.src;
  VAR_22.addrs.v4addrs.dst = 0;
  VAR_16 = FUNC_3(&VAR_22);
  break;

 case 128:
  FUNC_5(&VAR_22.addrs.v6addrs.src, 0,
         sizeof(VAR_22.addrs.v6addrs.src));
  VAR_17 = FUNC_3(&VAR_22);
  VAR_22.addrs.v6addrs.src = VAR_21.addrs.v6addrs.src;
  FUNC_5(&VAR_22.addrs.v6addrs.dst, 0,
         sizeof(VAR_22.addrs.v6addrs.dst));
  VAR_16 = FUNC_3(&VAR_22);
  break;

 default:
  VAR_17 = 0;
  VAR_16 = 0;
 }




 if (VAR_12 & VAR_1)
  VAR_15 = FUNC_3(&VAR_21);

skip_hash:
 if (VAR_13)
  VAR_15 = VAR_13 - 1;
 if (VAR_14) {
  VAR_17 = VAR_14 - 1;
  VAR_16 = VAR_14 - 1;
 }

 if (!(VAR_12 & VAR_1)) {
  if (VAR_12 & VAR_5)
   VAR_15 ^= VAR_16;

  if (VAR_12 & VAR_0)
   VAR_15 ^= VAR_17;
 }

 VAR_18 = VAR_15 % VAR_6;



 if (FUNC_4(VAR_10->tags[VAR_18] == VAR_15 &&
     VAR_10->flows[VAR_18].set)) {
  VAR_10->way_directs++;
 } else {
  u32 VAR_23 = VAR_18 % VAR_8;
  u32 VAR_24 = VAR_18 - VAR_23;
  bool VAR_25 = 0;
  bool VAR_26 = 0;
  u32 VAR_27, VAR_28;




  for (VAR_27 = 0, VAR_28 = VAR_23; VAR_27 < VAR_8;
       VAR_27++, VAR_28 = (VAR_28 + 1) % VAR_8) {
   if (VAR_10->tags[VAR_24 + VAR_28] == VAR_15) {
    if (VAR_27)
     VAR_10->way_hits++;

    if (!VAR_10->flows[VAR_24 + VAR_28].set) {

     VAR_25 = FUNC_1(VAR_12);
     VAR_26 = FUNC_0(VAR_12);
    }

    goto found;
   }
  }




  for (VAR_27 = 0; VAR_27 < VAR_8;
    VAR_27++, VAR_28 = (VAR_28 + 1) % VAR_8) {
   if (!VAR_10->flows[VAR_24 + VAR_28].set) {
    VAR_10->way_misses++;
    VAR_25 = FUNC_1(VAR_12);
    VAR_26 = FUNC_0(VAR_12);
    goto found;
   }
  }




  VAR_10->way_collisions++;
  if (VAR_10->flows[VAR_24 + VAR_28].set == VAR_7) {
   VAR_10->hosts[VAR_10->flows[VAR_18].srchost].srchost_bulk_flow_count--;
   VAR_10->hosts[VAR_10->flows[VAR_18].dsthost].dsthost_bulk_flow_count--;
  }
  VAR_25 = FUNC_1(VAR_12);
  VAR_26 = FUNC_0(VAR_12);
found:

  VAR_18 = VAR_24 + VAR_28;
  VAR_10->tags[VAR_18] = VAR_15;

  if (VAR_25) {
   VAR_19 = VAR_16 % VAR_6;
   VAR_23 = VAR_19 % VAR_8;
   VAR_24 = VAR_19 - VAR_23;
   for (VAR_27 = 0, VAR_28 = VAR_23; VAR_27 < VAR_8;
    VAR_27++, VAR_28 = (VAR_28 + 1) % VAR_8) {
    if (VAR_10->hosts[VAR_24 + VAR_28].srchost_tag ==
        VAR_16)
     goto found_src;
   }
   for (VAR_27 = 0; VAR_27 < VAR_8;
    VAR_27++, VAR_28 = (VAR_28 + 1) % VAR_8) {
    if (!VAR_10->hosts[VAR_24 + VAR_28].srchost_bulk_flow_count)
     break;
   }
   VAR_10->hosts[VAR_24 + VAR_28].srchost_tag = VAR_16;
found_src:
   VAR_19 = VAR_24 + VAR_28;
   if (VAR_10->flows[VAR_18].set == VAR_7)
    VAR_10->hosts[VAR_19].srchost_bulk_flow_count++;
   VAR_10->flows[VAR_18].srchost = VAR_19;
  }

  if (VAR_26) {
   VAR_20 = VAR_17 % VAR_6;
   VAR_23 = VAR_20 % VAR_8;
   VAR_24 = VAR_20 - VAR_23;
   for (VAR_27 = 0, VAR_28 = VAR_23; VAR_27 < VAR_8;
        VAR_27++, VAR_28 = (VAR_28 + 1) % VAR_8) {
    if (VAR_10->hosts[VAR_24 + VAR_28].dsthost_tag ==
        VAR_17)
     goto found_dst;
   }
   for (VAR_27 = 0; VAR_27 < VAR_8;
        VAR_27++, VAR_28 = (VAR_28 + 1) % VAR_8) {
    if (!VAR_10->hosts[VAR_24 + VAR_28].dsthost_bulk_flow_count)
     break;
   }
   VAR_10->hosts[VAR_24 + VAR_28].dsthost_tag = VAR_17;
found_dst:
   VAR_20 = VAR_24 + VAR_28;
   if (VAR_10->flows[VAR_18].set == VAR_7)
    VAR_10->hosts[VAR_20].dsthost_bulk_flow_count++;
   VAR_10->flows[VAR_18].dsthost = VAR_20;
  }
 }

 return VAR_18;
}
