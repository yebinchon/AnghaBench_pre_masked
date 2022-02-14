
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_srh_t {int hdrlen; int type; int segments_left; int first_segment; scalar_t__ tag; scalar_t__ flags; scalar_t__ nexthdr; } ;
struct ip6_addr_t {void* hi; void* lo; } ;
struct __sk_buff {int dummy; } ;
typedef int srh_buf ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long long) ;
 int FUNC_1 (struct __sk_buff*,int ,void*,int) ;

int FUNC_2(struct __sk_buff *VAR_2)
{
 unsigned long long VAR_3 = 0xfd00000000000000;
 struct ip6_addr_t *VAR_4;
 struct ip6_srh_t *VAR_5;
 char VAR_6[72];
 int VAR_7;

 VAR_5 = (struct ip6_srh_t *)VAR_6;
 VAR_5->nexthdr = 0;
 VAR_5->hdrlen = 8;
 VAR_5->type = 4;
 VAR_5->segments_left = 3;
 VAR_5->first_segment = 3;
 VAR_5->flags = 0;
 VAR_5->tag = 0;

 VAR_4 = (struct ip6_addr_t *)((char *)VAR_5 + sizeof(*VAR_5));

#pragma clang loop unroll(full)
 for (unsigned long long VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_4->lo = FUNC_0(4 - VAR_8);
  VAR_4->hi = FUNC_0(VAR_3);
  VAR_4 = (struct ip6_addr_t *)((char *)VAR_4 + sizeof(*VAR_4));
 }

 VAR_7 = FUNC_1(VAR_2, 0, (void *)VAR_5, sizeof(VAR_6));
 if (VAR_7)
  return VAR_0;

 return VAR_1;
}
