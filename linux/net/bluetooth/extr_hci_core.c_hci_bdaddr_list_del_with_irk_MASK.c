
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct list_head {int dummy; } ;
struct bdaddr_list_with_irk {int list; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct list_head*) ;
 struct bdaddr_list_with_irk* FUNC_2 (struct list_head*,int *,int ) ;
 int FUNC_3 (struct bdaddr_list_with_irk*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct list_head *VAR_2, bdaddr_t *VAR_3,
       u8 VAR_4)
{
 struct bdaddr_list_with_irk *VAR_5;

 if (!FUNC_0(VAR_3, VAR_0)) {
  FUNC_1(VAR_2);
  return 0;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_1;

 FUNC_4(&VAR_5->list);
 FUNC_3(VAR_5);

 return 0;
}
