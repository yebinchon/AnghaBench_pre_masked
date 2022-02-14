
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_type {int list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 struct list_head* FUNC_1 (struct packet_type*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct packet_type *VAR_1)
{
 struct list_head *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_0);
 FUNC_0(&VAR_1->list, VAR_2);
 FUNC_3(&VAR_0);
}
