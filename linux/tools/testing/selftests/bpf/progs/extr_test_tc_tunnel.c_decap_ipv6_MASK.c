
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int nexthdr; } ;
struct __sk_buff {int dummy; } ;
typedef int iph_outer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct __sk_buff*,int ,struct ipv6hdr*,int) ;
 int FUNC_1 (struct __sk_buff*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct __sk_buff *VAR_2)
{
 struct ipv6hdr VAR_3;

 if (FUNC_0(VAR_2, VAR_0, &VAR_3,
          sizeof(VAR_3)) < 0)
  return VAR_1;

 return FUNC_1(VAR_2, VAR_0, sizeof(VAR_3),
         VAR_3.nexthdr);
}
