
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {struct dfa** subdfas; TYPE_1__* g; } ;
struct subre {size_t id; int cnfa; } ;
struct dfa {int dummy; } ;
struct TYPE_2__ {int cmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct dfa* FUNC_1 (struct vars*,int *,int *,int ) ;

__attribute__((used)) static struct dfa *
FUNC_2(struct vars *VAR_1,
    struct subre *VAR_2)
{
 if (VAR_1->subdfas[VAR_2->id] == ((void*)0))
 {
  VAR_1->subdfas[VAR_2->id] = FUNC_1(VAR_1, &VAR_2->cnfa, &VAR_1->g->cmap, VAR_0);
  if (FUNC_0())
   return ((void*)0);
 }
 return VAR_1->subdfas[VAR_2->id];
}
