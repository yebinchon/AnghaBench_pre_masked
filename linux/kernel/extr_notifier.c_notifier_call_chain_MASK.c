
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int (* notifier_call ) (struct notifier_block*,unsigned long,void*) ;struct notifier_block* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int (*) (struct notifier_block*,unsigned long,void*)) ;
 struct notifier_block* FUNC_2 (struct notifier_block*) ;
 int FUNC_3 (struct notifier_block*,unsigned long,void*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct notifier_block **VAR_2,
          unsigned long VAR_3, void *VAR_4,
          int VAR_5, int *VAR_6)
{
 int VAR_7 = VAR_0;
 struct notifier_block *VAR_8, *VAR_9;

 VAR_8 = FUNC_2(*VAR_2);

 while (VAR_8 && VAR_5) {
  VAR_9 = FUNC_2(VAR_8->next);
  VAR_7 = VAR_8->notifier_call(VAR_8, VAR_3, VAR_4);

  if (VAR_6)
   (*VAR_6)++;

  if (VAR_7 & VAR_1)
   break;
  VAR_8 = VAR_9;
  VAR_5--;
 }
 return VAR_7;
}
