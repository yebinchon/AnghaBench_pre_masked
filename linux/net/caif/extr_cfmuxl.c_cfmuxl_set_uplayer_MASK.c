
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfmuxl {int receive_lock; int srvl_list; } ;
struct cflayer {int node; } ;


 struct cfmuxl* FUNC_0 (struct cflayer*) ;
 struct cflayer* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct cflayer *VAR_0, struct cflayer *VAR_1, u8 VAR_2)
{
 struct cfmuxl *VAR_3 = FUNC_0(VAR_0);
 struct cflayer *VAR_4;

 FUNC_4(&VAR_3->receive_lock);


 VAR_4 = FUNC_1(&VAR_3->srvl_list, VAR_2);
 if (VAR_4 != ((void*)0))
  FUNC_3(&VAR_4->node);

 FUNC_2(&VAR_1->node, &VAR_3->srvl_list);
 FUNC_5(&VAR_3->receive_lock);

 return 0;
}
