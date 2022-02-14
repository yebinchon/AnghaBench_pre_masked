
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_info {int id; } ;
struct cfmuxl {int transmit_lock; int * dn_cache; int frml_list; } ;
struct cflayer {scalar_t__ id; } ;


 int VAR_0 ;
 struct cflayer* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,struct cflayer*) ;
 struct cflayer* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct cflayer *FUNC_5(struct cfmuxl *VAR_1, struct dev_info *VAR_2)
{
 struct cflayer *VAR_3;
 int VAR_4 = VAR_2->id % VAR_0;
 VAR_3 = FUNC_2(VAR_1->dn_cache[VAR_4]);
 if (VAR_3 == ((void*)0) || VAR_3->id != VAR_2->id) {
  FUNC_3(&VAR_1->transmit_lock);
  VAR_3 = FUNC_0(&VAR_1->frml_list, VAR_2->id);
  FUNC_1(VAR_1->dn_cache[VAR_4], VAR_3);
  FUNC_4(&VAR_1->transmit_lock);
 }
 return VAR_3;
}
