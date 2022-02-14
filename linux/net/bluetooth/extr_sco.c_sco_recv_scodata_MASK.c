
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct sco_conn {int dummy; } ;
struct hci_conn {struct sco_conn* sco_data; } ;


 int FUNC_0 (char*,struct sco_conn*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sco_conn*,struct sk_buff*) ;

void FUNC_3(struct hci_conn *VAR_0, struct sk_buff *VAR_1)
{
 struct sco_conn *VAR_2 = VAR_0->sco_data;

 if (!VAR_2)
  goto drop;

 FUNC_0("conn %p len %d", VAR_2, VAR_1->len);

 if (VAR_1->len) {
  FUNC_2(VAR_2, VAR_1);
  return;
 }

drop:
 FUNC_1(VAR_1);
}
