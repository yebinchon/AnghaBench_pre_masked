
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfmuxl {int transmit_lock; int frml_list; } ;
struct cflayer {int node; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cflayer *VAR_0, struct cflayer *VAR_1, u8 VAR_2)
{
 struct cfmuxl *VAR_3 = (struct cfmuxl *) VAR_0;

 FUNC_1(&VAR_3->transmit_lock);
 FUNC_0(&VAR_1->node, &VAR_3->frml_list);
 FUNC_2(&VAR_3->transmit_lock);
 return 0;
}
