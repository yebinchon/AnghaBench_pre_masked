
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {struct dfa** ladfas; TYPE_1__* g; } ;
struct subre {int cnfa; } ;
struct dfa {int dummy; } ;
struct TYPE_2__ {int nlacons; int cmap; struct subre* lacons; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 struct dfa* FUNC_2 (struct vars*,int *,int *,int ) ;

__attribute__((used)) static struct dfa *
FUNC_3(struct vars *VAR_1,
   int VAR_2)
{
 FUNC_1(VAR_2 > 0 && VAR_2 < VAR_1->g->nlacons && VAR_1->g->lacons != ((void*)0));

 if (VAR_1->ladfas[VAR_2] == ((void*)0))
 {
  struct subre *VAR_3 = &VAR_1->g->lacons[VAR_2];

  VAR_1->ladfas[VAR_2] = FUNC_2(VAR_1, &VAR_3->cnfa, &VAR_1->g->cmap, VAR_0);
  if (FUNC_0())
   return ((void*)0);
 }
 return VAR_1->ladfas[VAR_2];
}
