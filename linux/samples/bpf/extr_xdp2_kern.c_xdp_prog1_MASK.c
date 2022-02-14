
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long* FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*,int,void*) ;
 scalar_t__ FUNC_3 (void*,int,void*) ;
 int VAR_7 ;
 int FUNC_4 (void*) ;

int FUNC_5(struct xdp_md *VAR_8)
{
 void *VAR_9 = (void *)(long)VAR_8->data_end;
 void *VAR_10 = (void *)(long)VAR_8->data;
 struct ethhdr *VAR_11 = VAR_10;
 int VAR_12 = VAR_5;
 long *VAR_13;
 u16 VAR_14;
 u64 VAR_15;
 u32 VAR_16;

 VAR_15 = sizeof(*VAR_11);
 if (VAR_10 + VAR_15 > VAR_9)
  return VAR_12;

 VAR_14 = VAR_11->h_proto;

 if (VAR_14 == FUNC_1(VAR_1) || VAR_14 == FUNC_1(VAR_0)) {
  struct vlan_hdr *VAR_17;

  VAR_17 = VAR_10 + VAR_15;
  VAR_15 += sizeof(struct vlan_hdr);
  if (VAR_10 + VAR_15 > VAR_9)
   return VAR_12;
  VAR_14 = VAR_17->h_vlan_encapsulated_proto;
 }
 if (VAR_14 == FUNC_1(VAR_1) || VAR_14 == FUNC_1(VAR_0)) {
  struct vlan_hdr *VAR_18;

  VAR_18 = VAR_10 + VAR_15;
  VAR_15 += sizeof(struct vlan_hdr);
  if (VAR_10 + VAR_15 > VAR_9)
   return VAR_12;
  VAR_14 = VAR_18->h_vlan_encapsulated_proto;
 }

 if (VAR_14 == FUNC_1(VAR_2))
  VAR_16 = FUNC_2(VAR_10, VAR_15, VAR_9);
 else if (VAR_14 == FUNC_1(VAR_3))
  VAR_16 = FUNC_3(VAR_10, VAR_15, VAR_9);
 else
  VAR_16 = 0;

 VAR_13 = FUNC_0(&VAR_7, &VAR_16);
 if (VAR_13)
  *VAR_13 += 1;

 if (VAR_16 == VAR_4) {
  FUNC_4(VAR_10);
  VAR_12 = VAR_6;
 }

 return VAR_12;
}
