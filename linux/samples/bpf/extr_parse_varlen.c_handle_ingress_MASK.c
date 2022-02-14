
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vlan_hdr {int h_vlan_encapsulated_proto; } ;
struct ethhdr {int h_proto; } ;
struct __sk_buff {scalar_t__ data_end; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,void*) ;
 int FUNC_2 (void*,int,void*) ;

int FUNC_3(struct __sk_buff *VAR_4)
{
 void *VAR_5 = (void *)(long)VAR_4->data;
 struct ethhdr *VAR_6 = VAR_5;
 void *VAR_7 = (void *)(long)VAR_4->data_end;
 uint64_t VAR_8, VAR_9;

 VAR_9 = sizeof(*VAR_6);
 if (VAR_5 + VAR_9 > VAR_7)
  return 0;

 VAR_8 = VAR_6->h_proto;

 if (VAR_8 == VAR_1 || VAR_8 == VAR_0) {
  struct vlan_hdr *VAR_10;

  VAR_10 = VAR_5 + VAR_9;
  VAR_9 += sizeof(struct vlan_hdr);
  if (VAR_5 + VAR_9 > VAR_7)
   return 0;
  VAR_8 = VAR_10->h_vlan_encapsulated_proto;
 }
 if (VAR_8 == VAR_1 || VAR_8 == VAR_0) {
  struct vlan_hdr *VAR_11;

  VAR_11 = VAR_5 + VAR_9;
  VAR_9 += sizeof(struct vlan_hdr);
  if (VAR_5 + VAR_9 > VAR_7)
   return 0;
  VAR_8 = VAR_11->h_vlan_encapsulated_proto;
 }
 if (VAR_8 == FUNC_0(VAR_2))
  return FUNC_1(VAR_5, VAR_9, VAR_7);
 else if (VAR_8 == FUNC_0(VAR_3))
  return FUNC_2(VAR_5, VAR_9, VAR_7);
 return 0;
}
