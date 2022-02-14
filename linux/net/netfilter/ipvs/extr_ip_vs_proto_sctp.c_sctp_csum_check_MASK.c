
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct sctphdr {scalar_t__ checksum; } ;
struct ipv6hdr {int dummy; } ;
struct ip_vs_protocol {int dummy; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, struct sk_buff *VAR_2, struct ip_vs_protocol *VAR_3)
{
 unsigned int VAR_4;
 struct sctphdr *VAR_5;
 __le32 VAR_6, VAR_7;






  VAR_4 = FUNC_1(VAR_2);

 VAR_5 = (struct sctphdr *)(VAR_2->data + VAR_4);
 VAR_6 = VAR_5->checksum;
 VAR_7 = FUNC_2(VAR_2, VAR_4);

 if (VAR_7 != VAR_6) {

  FUNC_0(0, VAR_1, VAR_3, VAR_2, 0,
    "Failed checksum for");
  return 0;
 }
 return 1;
}
