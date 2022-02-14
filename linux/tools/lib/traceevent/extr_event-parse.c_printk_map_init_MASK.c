
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int printk_count; struct printk_list* printklist; struct printk_map* printk_map; } ;
struct printk_map {int addr; int printk; } ;
struct printk_list {struct printk_list* next; int addr; int printk; } ;


 int FUNC_0 (struct printk_list*) ;
 struct printk_map* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct printk_map*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct tep_handle *VAR_1)
{
 struct printk_list *VAR_2;
 struct printk_list *VAR_3;
 struct printk_map *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4) * (VAR_1->printk_count + 1));
 if (!VAR_4)
  return -1;

 VAR_2 = VAR_1->printklist;

 VAR_5 = 0;
 while (VAR_2) {
  VAR_4[VAR_5].printk = VAR_2->printk;
  VAR_4[VAR_5].addr = VAR_2->addr;
  VAR_5++;
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_3);
 }

 FUNC_2(VAR_4, VAR_1->printk_count, sizeof(*VAR_4), VAR_0);

 VAR_1->printk_map = VAR_4;
 VAR_1->printklist = ((void*)0);

 return 0;
}
