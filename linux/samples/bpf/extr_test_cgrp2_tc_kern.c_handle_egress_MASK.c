
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {scalar_t__ nexthdr; } ;
struct eth_hdr {scalar_t__ h_proto; } ;
struct __sk_buff {scalar_t__ data_end; scalar_t__ data; } ;
typedef int reject_msg ;
typedef int pass_msg ;
typedef int dont_care_msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct __sk_buff*,int *,int ) ;
 int FUNC_1 (char*,int,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;

int FUNC_3(struct __sk_buff *VAR_5)
{
 void *VAR_6 = (void *)(long)VAR_5->data;
 struct eth_hdr *VAR_7 = VAR_6;
 struct ipv6hdr *VAR_8 = VAR_6 + sizeof(*VAR_7);
 void *VAR_9 = (void *)(long)VAR_5->data_end;
 char VAR_10[] = "dont care %04x %d\n";
 char VAR_11[] = "pass\n";
 char VAR_12[] = "reject\n";


 if (VAR_6 + sizeof(*VAR_7) + sizeof(*VAR_8) > VAR_9)
  return VAR_2;

 if (VAR_7->h_proto != FUNC_2(VAR_0) ||
     VAR_8->nexthdr != VAR_1) {
  FUNC_1(VAR_10, sizeof(VAR_10),
     VAR_7->h_proto, VAR_8->nexthdr);
  return VAR_2;
 } else if (FUNC_0(VAR_5, &VAR_4, 0) != 1) {
  FUNC_1(VAR_11, sizeof(VAR_11));
  return VAR_2;
 } else {
  FUNC_1(VAR_12, sizeof(VAR_12));
  return VAR_3;
 }
}
