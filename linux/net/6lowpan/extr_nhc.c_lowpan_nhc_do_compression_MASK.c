
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ transport_header; scalar_t__ network_header; } ;
struct lowpan_nhc {int (* compress ) (struct sk_buff*,int **) ;int nexthdrlen; } ;
struct ipv6hdr {size_t nexthdr; } ;


 int VAR_0 ;
 struct lowpan_nhc** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int **) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sk_buff *VAR_3, const struct ipv6hdr *VAR_4,
         u8 **VAR_5)
{
 int VAR_6;
 struct lowpan_nhc *VAR_7;

 FUNC_2(&VAR_2);

 VAR_7 = VAR_1[VAR_4->nexthdr];
 if (FUNC_5(!VAR_7 || !VAR_7->compress)) {
  VAR_6 = -VAR_0;
  goto out;
 }




 if (VAR_3->transport_header == VAR_3->network_header)
  FUNC_1(VAR_3, sizeof(struct ipv6hdr));

 VAR_6 = VAR_7->compress(VAR_3, VAR_5);
 if (VAR_6 < 0)
  goto out;


 FUNC_0(VAR_3, VAR_7->nexthdrlen);

out:
 FUNC_3(&VAR_2);

 return VAR_6;
}
