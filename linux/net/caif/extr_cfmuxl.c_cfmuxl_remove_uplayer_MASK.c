
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfmuxl {int receive_lock; int * up_cache; int srvl_list; } ;
struct cflayer {int node; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 struct cfmuxl* FUNC_1 (struct cflayer*) ;
 struct cflayer* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct cflayer *FUNC_7(struct cflayer *VAR_1, u8 VAR_2)
{
 struct cflayer *VAR_3;
 struct cfmuxl *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_2 % VAR_0;

 if (VAR_2 == 0) {
  FUNC_4("Trying to remove control layer\n");
  return ((void*)0);
 }

 FUNC_5(&VAR_4->receive_lock);
 VAR_3 = FUNC_2(&VAR_4->srvl_list, VAR_2);
 if (VAR_3 == ((void*)0))
  goto out;

 FUNC_0(VAR_4->up_cache[VAR_5], ((void*)0));
 FUNC_3(&VAR_3->node);
out:
 FUNC_6(&VAR_4->receive_lock);
 return VAR_3;
}
