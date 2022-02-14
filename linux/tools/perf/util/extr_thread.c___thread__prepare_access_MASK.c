
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* mg; } ;
struct maps {int lock; } ;
struct map {int dummy; } ;
struct TYPE_2__ {struct maps maps; } ;


 int FUNC_0 (int *) ;
 struct map* FUNC_1 (struct map*) ;
 struct map* FUNC_2 (struct maps*) ;
 int FUNC_3 (TYPE_1__*,struct map*,int*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct thread *VAR_0)
{
 bool VAR_1 = 0;
 int VAR_2 = 0;
 struct maps *VAR_3 = &VAR_0->mg->maps;
 struct map *VAR_4;

 FUNC_0(&VAR_3->lock);

 for (VAR_4 = FUNC_2(VAR_3); VAR_4; VAR_4 = FUNC_1(VAR_4)) {
  VAR_2 = FUNC_3(VAR_0->mg, VAR_4, &VAR_1);
  if (VAR_2 || VAR_1)
   break;
 }

 FUNC_4(&VAR_3->lock);

 return VAR_2;
}
