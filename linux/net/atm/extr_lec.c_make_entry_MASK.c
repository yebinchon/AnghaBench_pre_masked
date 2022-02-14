
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lec_priv {int dummy; } ;
struct lec_arp_table {int usage; int tx_wait; struct lec_priv* priv; int last_used; int timer; int next; int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int VAR_1 ;
 struct lec_arp_table* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static struct lec_arp_table *FUNC_7(struct lec_priv *VAR_3,
     const unsigned char *VAR_4)
{
 struct lec_arp_table *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct lec_arp_table), VAR_0);
 if (!VAR_5) {
  FUNC_3("LEC: Arp entry kmalloc failed\n");
  return ((void*)0);
 }
 FUNC_1(VAR_5->mac_addr, VAR_4);
 FUNC_0(&VAR_5->next);
 FUNC_6(&VAR_5->timer, VAR_2, 0);
 VAR_5->last_used = VAR_1;
 VAR_5->priv = VAR_3;
 FUNC_5(&VAR_5->tx_wait);
 FUNC_4(&VAR_5->usage, 1);
 return VAR_5;
}
