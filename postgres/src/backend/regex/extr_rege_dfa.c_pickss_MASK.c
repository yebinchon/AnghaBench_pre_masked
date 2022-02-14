
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vars {int dummy; } ;
struct TYPE_3__ {int co; int * ss; } ;
struct sset {int flags; int * lastseen; TYPE_2__* inchain; int ** outs; TYPE_1__ ins; int * states; } ;
struct dfa {int nssused; int nssets; int wordsper; int ncolors; struct sset* ssets; struct sset* search; TYPE_2__* incarea; int ** outsarea; int * statesarea; } ;
typedef int chr ;
struct TYPE_4__ {int * ss; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct sset *
FUNC_2(struct vars *VAR_3,
    struct dfa *VAR_4,
    chr *VAR_5,
    chr *VAR_6)
{
 int VAR_7;
 struct sset *VAR_8;
 struct sset *VAR_9;
 chr *VAR_10;


 if (VAR_4->nssused < VAR_4->nssets)
 {
  VAR_7 = VAR_4->nssused;
  VAR_4->nssused++;
  VAR_8 = &VAR_4->ssets[VAR_7];
  FUNC_1(("new c%d\n", VAR_7));

  VAR_8->states = &VAR_4->statesarea[VAR_7 * VAR_4->wordsper];
  VAR_8->flags = 0;
  VAR_8->ins.ss = ((void*)0);
  VAR_8->ins.co = VAR_2;
  VAR_8->outs = &VAR_4->outsarea[VAR_7 * VAR_4->ncolors];
  VAR_8->inchain = &VAR_4->incarea[VAR_7 * VAR_4->ncolors];
  for (VAR_7 = 0; VAR_7 < VAR_4->ncolors; VAR_7++)
  {
   VAR_8->outs[VAR_7] = ((void*)0);
   VAR_8->inchain[VAR_7].ss = ((void*)0);
  }
  return VAR_8;
 }


 if (VAR_5 - VAR_6 > VAR_4->nssets * 2 / 3)
  VAR_10 = VAR_5 - VAR_4->nssets * 2 / 3;
 else
  VAR_10 = VAR_6;
 for (VAR_8 = VAR_4->search, VAR_9 = &VAR_4->ssets[VAR_4->nssets]; VAR_8 < VAR_9; VAR_8++)
  if ((VAR_8->lastseen == ((void*)0) || VAR_8->lastseen < VAR_10) &&
   !(VAR_8->flags & VAR_0))
  {
   VAR_4->search = VAR_8 + 1;
   FUNC_1(("replacing c%d\n", (int) (VAR_8 - VAR_4->ssets)));
   return VAR_8;
  }
 for (VAR_8 = VAR_4->ssets, VAR_9 = VAR_4->search; VAR_8 < VAR_9; VAR_8++)
  if ((VAR_8->lastseen == ((void*)0) || VAR_8->lastseen < VAR_10) &&
   !(VAR_8->flags & VAR_0))
  {
   VAR_4->search = VAR_8 + 1;
   FUNC_1(("replacing c%d\n", (int) (VAR_8 - VAR_4->ssets)));
   return VAR_8;
  }


 FUNC_1(("cannot find victim to replace!\n"));
 FUNC_0(VAR_1);
 return ((void*)0);
}
