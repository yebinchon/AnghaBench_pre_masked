
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef void list_head ;
typedef int loff_t ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, loff_t *VAR_1,
    struct list_head *VAR_2)
{
 struct list_head *VAR_3;
 int VAR_4 = *VAR_1;

 FUNC_2();
 for (VAR_3 = FUNC_1(FUNC_0(VAR_2));
  VAR_3 != VAR_2;
  VAR_3 = FUNC_1(FUNC_0(VAR_3))) {
  if (VAR_4-- == 0)
   return VAR_3;
 }

 return ((void*)0);
}
