
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int dummy; } ;
struct bdaddr_list {int list; int bdaddr_type; int bdaddr; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct list_head*,int *,int ) ;
 struct bdaddr_list* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;

int FUNC_5(struct list_head *VAR_5, bdaddr_t *VAR_6, u8 VAR_7)
{
 struct bdaddr_list *VAR_8;

 if (!FUNC_0(VAR_6, VAR_0))
  return -VAR_1;

 if (FUNC_2(VAR_5, VAR_6, VAR_7))
  return -VAR_2;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 FUNC_1(&VAR_8->bdaddr, VAR_6);
 VAR_8->bdaddr_type = VAR_7;

 FUNC_4(&VAR_8->list, VAR_5);

 return 0;
}
