
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {int dummy; } ;
struct sset {int flags; int * lastseen; scalar_t__* states; int hash; } ;
struct dfa {int nssused; int wordsper; int * lastnopr; int * lastpost; struct sset* ssets; TYPE_1__* cnfa; } ;
typedef int chr ;
struct TYPE_2__ {int post; int pre; } ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct sset* FUNC_3 (struct vars*,struct dfa*,int *,int *) ;

__attribute__((used)) static struct sset *
FUNC_4(struct vars *VAR_3,
     struct dfa *VAR_4,
     chr *VAR_5)
{
 struct sset *VAR_6;
 int VAR_7;


 if (VAR_4->nssused > 0 && (VAR_4->ssets[0].flags & VAR_2))
  VAR_6 = &VAR_4->ssets[0];
 else
 {
  VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_5);
  if (VAR_6 == ((void*)0))
   return ((void*)0);
  for (VAR_7 = 0; VAR_7 < VAR_4->wordsper; VAR_7++)
   VAR_6->states[VAR_7] = 0;
  FUNC_0(VAR_6->states, VAR_4->cnfa->pre);
  VAR_6->hash = FUNC_1(VAR_6->states, VAR_4->wordsper);
  FUNC_2(VAR_4->cnfa->pre != VAR_4->cnfa->post);
  VAR_6->flags = VAR_2 | VAR_0 | VAR_1;

 }

 for (VAR_7 = 0; VAR_7 < VAR_4->nssused; VAR_7++)
  VAR_4->ssets[VAR_7].lastseen = ((void*)0);
 VAR_6->lastseen = VAR_5;
 VAR_4->lastpost = ((void*)0);
 VAR_4->lastnopr = ((void*)0);
 return VAR_6;
}
