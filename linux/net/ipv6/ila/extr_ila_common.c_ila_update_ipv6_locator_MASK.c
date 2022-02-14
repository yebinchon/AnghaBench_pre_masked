
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; } ;
struct ila_params {int csum_mode; int locator; } ;
struct ila_addr {int loc; int ident; } ;






 int FUNC_0 (int ) ;
 struct ila_addr* FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,struct ila_params*) ;
 int FUNC_3 (struct ila_addr*,struct ila_params*) ;
 int FUNC_4 (struct ila_addr*,struct ila_params*) ;
 int FUNC_5 (int ) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;

void FUNC_7(struct sk_buff *VAR_0, struct ila_params *VAR_1,
        bool VAR_2)
{
 struct ipv6hdr *VAR_3 = FUNC_6(VAR_0);
 struct ila_addr *VAR_4 = FUNC_1(&VAR_3->daddr);

 switch (VAR_1->csum_mode) {
 case 131:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 130:
  if (VAR_2) {
   if (FUNC_0(FUNC_5(VAR_4->ident))) {



    break;
   }
  } else if (!FUNC_5(VAR_4->ident)) {



   break;
  }
  FUNC_3(VAR_4, VAR_1);
  break;
 case 129:
  FUNC_4(VAR_4, VAR_1);
  break;
 case 128:
  break;
 }


 VAR_4->loc = VAR_1->locator;
}
