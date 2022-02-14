
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct map_groups* mg; } ;
struct maps {int lock; } ;
struct map_groups {struct maps maps; } ;
struct map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct map* FUNC_1 (struct map*) ;
 struct map* FUNC_2 (struct map*) ;
 int FUNC_3 (struct map*) ;
 int FUNC_4 (struct map_groups*,struct map*) ;
 struct map* FUNC_5 (struct maps*) ;
 int FUNC_6 (struct map_groups*,struct map*,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct thread *VAR_1, struct map_groups *VAR_2)
{
 struct map_groups *VAR_3 = VAR_1->mg;
 int VAR_4 = -VAR_0;
 struct map *VAR_5;
 struct maps *VAR_6 = &VAR_2->maps;

 FUNC_0(&VAR_6->lock);

 for (VAR_5 = FUNC_5(VAR_6); VAR_5; VAR_5 = FUNC_2(VAR_5)) {
  struct map *VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 == ((void*)0))
   goto out_unlock;

  VAR_4 = FUNC_6(VAR_3, VAR_7, ((void*)0));
  if (VAR_4)
   goto out_unlock;

  FUNC_4(VAR_3, VAR_7);
  FUNC_3(VAR_7);
 }

 VAR_4 = 0;
out_unlock:
 FUNC_7(&VAR_6->lock);
 return VAR_4;
}
