
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__ error_code; scalar_t__* data; } ;
struct pep_sock {void* rx_fc; void* tx_fc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__* FUNC_0 (struct sk_buff*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 void* FUNC_3 (scalar_t__ const*,int ) ;
 struct pnpipehdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct pep_sock *VAR_5 = FUNC_1(VAR_3);
 struct pnpipehdr *VAR_6;
 u8 VAR_7;

 if (!FUNC_5(VAR_4, sizeof(*VAR_6) + 4))
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6->error_code != VAR_2)
  return -VAR_0;


 VAR_7 = VAR_6->data[3];
 while (VAR_7 > 0) {
  u8 VAR_8, VAR_9[6], VAR_10 = sizeof(VAR_9);
  const u8 *VAR_11 = FUNC_0(VAR_4, &VAR_8, &VAR_10, VAR_9);

  if (VAR_11 == ((void*)0))
   return -VAR_1;

  switch (VAR_8) {
  case 128:
   if (VAR_10 < 2 || VAR_10 < VAR_11[0])
    break;
   VAR_5->tx_fc = FUNC_3(VAR_11 + 2, VAR_10 - 2);
   break;

  case 129:
   if (VAR_10 < 2 || VAR_10 < VAR_11[0])
    break;
   VAR_5->rx_fc = FUNC_3(VAR_11 + 2, VAR_10 - 2);
   break;

  }
  VAR_7--;
 }

 return FUNC_2(VAR_3);
}
