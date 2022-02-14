
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfmuxl {int transmit_lock; int frml_list; int * dn_cache; } ;
struct cflayer {int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 struct cfmuxl* FUNC_2 (struct cflayer*) ;
 struct cflayer* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct cflayer *FUNC_7(struct cflayer *VAR_1, u8 VAR_2)
{
 struct cfmuxl *VAR_3 = FUNC_2(VAR_1);
 struct cflayer *VAR_4;
 int VAR_5 = VAR_2 % VAR_0;

 FUNC_5(&VAR_3->transmit_lock);
 FUNC_0(VAR_3->dn_cache[VAR_5], ((void*)0));
 VAR_4 = FUNC_3(&VAR_3->frml_list, VAR_2);
 if (VAR_4 == ((void*)0))
  goto out;

 FUNC_4(&VAR_4->node);
 FUNC_1(VAR_4 != ((void*)0));
out:
 FUNC_6(&VAR_3->transmit_lock);
 return VAR_4;
}
