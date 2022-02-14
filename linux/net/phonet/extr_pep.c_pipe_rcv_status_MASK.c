
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_write_space ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__ pep_type; int* data; } ;
struct pep_sock {int tx_credits; int tx_fc; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,unsigned int) ;
 struct pep_sock* FUNC_3 (struct sock*) ;
 struct pnpipehdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct pep_sock *VAR_6 = FUNC_3(VAR_4);
 struct pnpipehdr *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_5(VAR_5, sizeof(*VAR_7) + 4))
  return -VAR_0;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7->pep_type != VAR_3) {
  FUNC_2("Phonet unknown PEP type: %u\n",
        (unsigned int)VAR_7->pep_type);
  return -VAR_1;
 }

 switch (VAR_7->data[0]) {
 case 129:
  switch (VAR_6->tx_fc) {
  case 131:
   switch (VAR_7->data[3]) {
   case 133:
    FUNC_1(&VAR_6->tx_credits, 0);
    break;
   case 132:
    FUNC_1(&VAR_6->tx_credits, VAR_8 = 1);
    break;
   }
   break;
  case 130:
   if (VAR_7->data[3] == 132)
    FUNC_1(&VAR_6->tx_credits, VAR_8 = 1);
   break;
  }
  break;

 case 128:
  if (VAR_6->tx_fc != VAR_2)
   break;
  FUNC_0(VAR_8 = VAR_7->data[3], &VAR_6->tx_credits);
  break;

 default:
  FUNC_2("Phonet unknown PEP indication: %u\n",
        (unsigned int)VAR_7->data[0]);
  return -VAR_1;
 }
 if (VAR_8)
  VAR_4->sk_write_space(VAR_4);
 return 0;
}
