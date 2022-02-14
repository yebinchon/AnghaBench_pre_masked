
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct seg6_local_lwt {struct ipv6_sr_hdr* srh; } ;
struct nlattr {int dummy; } ;
struct ipv6_sr_hdr {int hdrlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ipv6_sr_hdr*,int) ;
 int FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct seg6_local_lwt *VAR_3)
{
 struct ipv6_sr_hdr *VAR_4;
 struct nlattr *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->srh;
 VAR_6 = (VAR_4->hdrlen + 1) << 3;

 VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_6);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(FUNC_1(VAR_5), VAR_4, VAR_6);

 return 0;
}
