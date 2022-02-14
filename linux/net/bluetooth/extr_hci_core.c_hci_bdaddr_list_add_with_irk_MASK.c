
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int dummy; } ;
struct bdaddr_list_with_irk {int list; int local_irk; int peer_irk; int bdaddr_type; int bdaddr; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct list_head*,int *,int ) ;
 struct bdaddr_list_with_irk* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int ,int *,int) ;

int FUNC_6(struct list_head *VAR_5, bdaddr_t *VAR_6,
     u8 VAR_7, u8 *VAR_8, u8 *VAR_9)
{
 struct bdaddr_list_with_irk *VAR_10;

 if (!FUNC_0(VAR_6, VAR_0))
  return -VAR_1;

 if (FUNC_2(VAR_5, VAR_6, VAR_7))
  return -VAR_2;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 FUNC_1(&VAR_10->bdaddr, VAR_6);
 VAR_10->bdaddr_type = VAR_7;

 if (VAR_8)
  FUNC_5(VAR_10->peer_irk, VAR_8, 16);

 if (VAR_9)
  FUNC_5(VAR_10->local_irk, VAR_9, 16);

 FUNC_4(&VAR_10->list, VAR_5);

 return 0;
}
