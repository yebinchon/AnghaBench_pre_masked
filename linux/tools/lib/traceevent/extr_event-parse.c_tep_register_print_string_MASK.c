
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int printk_count; struct printk_list* printklist; } ;
struct printk_list {unsigned long long addr; char* printk; struct printk_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct printk_list*) ;
 struct printk_list* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct tep_handle *VAR_2, const char *VAR_3,
         unsigned long long VAR_4)
{
 struct printk_list *VAR_5 = FUNC_1(sizeof(*VAR_5));
 char *VAR_6;

 if (!VAR_5)
  return -1;

 VAR_5->next = VAR_2->printklist;
 VAR_5->addr = VAR_4;


 if (VAR_3[0] == '"')
  VAR_3++;
 VAR_5->printk = FUNC_3(VAR_3);
 if (!VAR_5->printk)
  goto out_free;

 VAR_6 = VAR_5->printk + FUNC_4(VAR_5->printk) - 1;
 if (*VAR_6 == '"')
  *VAR_6 = 0;

 VAR_6 -= 2;
 if (FUNC_2(VAR_6, "\\n") == 0)
  *VAR_6 = 0;

 VAR_2->printklist = VAR_5;
 VAR_2->printk_count++;

 return 0;

out_free:
 FUNC_0(VAR_5);
 VAR_1 = VAR_0;
 return -1;
}
