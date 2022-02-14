
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef void list_head ;
typedef int loff_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2,
    struct list_head *VAR_3)
{
 struct list_head *VAR_4 = VAR_1;

 ++*VAR_2;
 VAR_4 = FUNC_1(FUNC_0(VAR_4));

 return (VAR_4 == VAR_3) ? ((void*)0) : VAR_4;
}
