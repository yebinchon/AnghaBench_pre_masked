
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ipv6_sr_hdr {int hdrlen; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int*,int ,int *,int *) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct ipv6_sr_hdr*,int) ;

__attribute__((used)) static struct ipv6_sr_hdr *FUNC_3(struct sk_buff *VAR_1)
{
 struct ipv6_sr_hdr *VAR_2;
 int VAR_3, VAR_4 = 0;

 if (FUNC_0(VAR_1, &VAR_4, VAR_0, ((void*)0), ((void*)0)) < 0)
  return ((void*)0);

 if (!FUNC_1(VAR_1, VAR_4 + sizeof(*VAR_2)))
  return ((void*)0);

 VAR_2 = (struct ipv6_sr_hdr *)(VAR_1->data + VAR_4);

 VAR_3 = (VAR_2->hdrlen + 1) << 3;

 if (!FUNC_1(VAR_1, VAR_4 + VAR_3))
  return ((void*)0);

 if (!FUNC_2(VAR_2, VAR_3))
  return ((void*)0);

 return VAR_2;
}
