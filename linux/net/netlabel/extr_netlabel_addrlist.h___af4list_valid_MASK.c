
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_af4list {int valid; } ;
struct list_head {struct list_head* next; } ;


 struct netlbl_af4list* FUNC_0 (struct list_head*) ;

__attribute__((used)) static inline struct netlbl_af4list *FUNC_1(struct list_head *VAR_0,
           struct list_head *VAR_1)
{
 struct list_head *VAR_2 = VAR_0;
 struct netlbl_af4list *VAR_3 = FUNC_0(VAR_0);
 while (VAR_2 != VAR_1 && !VAR_3->valid) {
  VAR_2 = VAR_2->next;
  VAR_3 = FUNC_0(VAR_2);
 }
 return VAR_3;
}
