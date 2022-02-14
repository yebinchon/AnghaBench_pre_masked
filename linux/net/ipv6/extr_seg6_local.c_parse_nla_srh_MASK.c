
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_local_lwt {int headroom; int srh; } ;
struct nlattr {int dummy; } ;
struct ipv6_sr_hdr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ipv6_sr_hdr*,int,int ) ;
 struct ipv6_sr_hdr* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct ipv6_sr_hdr*,int) ;

__attribute__((used)) static int FUNC_4(struct nlattr **VAR_4, struct seg6_local_lwt *VAR_5)
{
 struct ipv6_sr_hdr *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4[VAR_3]);
 VAR_7 = FUNC_2(VAR_4[VAR_3]);


 if (VAR_7 < sizeof(*VAR_6) + sizeof(struct in6_addr))
  return -VAR_0;

 if (!FUNC_3(VAR_6, VAR_7))
  return -VAR_0;

 VAR_5->srh = FUNC_0(VAR_6, VAR_7, VAR_2);
 if (!VAR_5->srh)
  return -VAR_1;

 VAR_5->headroom += VAR_7;

 return 0;
}
