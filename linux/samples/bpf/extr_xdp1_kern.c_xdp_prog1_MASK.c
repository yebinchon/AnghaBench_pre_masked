
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
 int VAR_4 ;
 long* FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*,int,void*) ;
 scalar_t__ FUNC_3 (void*,int,void*) ;
 int VAR_5 ;

int FUNC_4(struct xdp_md *VAR_6)
{
 void *VAR_7 = (void *)(long)VAR_6->data_end;
 void *VAR_8 = (void *)(long)VAR_6->data;
 struct ethhdr *VAR_9 = VAR_8;
 int VAR_10 = VAR_4;
 long *VAR_11;
 u16 VAR_12;
 u64 VAR_13;
 u32 VAR_14;

 VAR_13 = sizeof(*VAR_9);
 if (VAR_8 + VAR_13 > VAR_7)
  return VAR_10;

 VAR_12 = VAR_9->h_proto;

 if (VAR_12 == FUNC_1(VAR_1) || VAR_12 == FUNC_1(VAR_0)) {
  struct vlan_hdr *VAR_15;

  VAR_15 = VAR_8 + VAR_13;
  VAR_13 += sizeof(struct vlan_hdr);
  if (VAR_8 + VAR_13 > VAR_7)
   return VAR_10;
  VAR_12 = VAR_15->h_vlan_encapsulated_proto;
 }
 if (VAR_12 == FUNC_1(VAR_1) || VAR_12 == FUNC_1(VAR_0)) {
  struct vlan_hdr *VAR_16;

  VAR_16 = VAR_8 + VAR_13;
  VAR_13 += sizeof(struct vlan_hdr);
  if (VAR_8 + VAR_13 > VAR_7)
   return VAR_10;
  VAR_12 = VAR_16->h_vlan_encapsulated_proto;
 }

 if (VAR_12 == FUNC_1(VAR_2))
  VAR_14 = FUNC_2(VAR_8, VAR_13, VAR_7);
 else if (VAR_12 == FUNC_1(VAR_3))
  VAR_14 = FUNC_3(VAR_8, VAR_13, VAR_7);
 else
  VAR_14 = 0;

 VAR_11 = FUNC_0(&VAR_5, &VAR_14);
 if (VAR_11)
  *VAR_11 += 1;

 return VAR_10;
}
