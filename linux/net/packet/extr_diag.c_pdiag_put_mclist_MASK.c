
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct packet_sock {struct packet_mclist* mclist; } ;
struct packet_mclist {int addr; int count; int alen; int type; int ifindex; struct packet_mclist* next; } ;
struct packet_diag_mclist {int pdmc_addr; int pdmc_count; int pdmc_alen; int pdmc_type; int pdmc_index; } ;
struct nlattr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 struct packet_diag_mclist* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(const struct packet_sock *VAR_2, struct sk_buff *VAR_3)
{
 struct nlattr *VAR_4;
 struct packet_mclist *VAR_5;

 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6();
 for (VAR_5 = VAR_2->mclist; VAR_5; VAR_5 = VAR_5->next) {
  struct packet_diag_mclist *VAR_6;

  VAR_6 = FUNC_5(VAR_3, sizeof(*VAR_6));
  if (!VAR_6) {
   FUNC_7();
   FUNC_2(VAR_3, VAR_4);
   return -VAR_0;
  }

  VAR_6->pdmc_index = VAR_5->ifindex;
  VAR_6->pdmc_type = VAR_5->type;
  VAR_6->pdmc_alen = VAR_5->alen;
  VAR_6->pdmc_count = VAR_5->count;
  FUNC_0(sizeof(VAR_6->pdmc_addr) != sizeof(VAR_5->addr));
  FUNC_1(VAR_6->pdmc_addr, VAR_5->addr, sizeof(VAR_5->addr));
 }

 FUNC_7();
 FUNC_3(VAR_3, VAR_4);

 return 0;
}
