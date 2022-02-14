
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {int re; } ;
struct TYPE_2__ {size_t co; struct sset* ss; } ;
struct sset {unsigned int hash; TYPE_1__ ins; TYPE_1__* inchain; struct sset** outs; int flags; scalar_t__* states; } ;
struct dfa {int wordsper; int nstates; int nssused; struct sset* ssets; scalar_t__* work; struct cnfa* cnfa; } ;
struct cnfa {size_t post; int* stflags; int flags; size_t ncolors; struct carc** states; } ;
struct carc {size_t co; size_t to; } ;
typedef size_t color ;
typedef int chr ;


 int FUNC_0 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (scalar_t__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (unsigned int,scalar_t__*,struct sset*,int) ;
 scalar_t__ FUNC_6 (scalar_t__*,int) ;
 scalar_t__ FUNC_7 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int) ;
 struct sset* FUNC_9 (struct vars*,struct dfa*,int *,int *) ;
 int FUNC_10 (struct vars*,struct cnfa*,int *,size_t) ;

__attribute__((used)) static struct sset *
FUNC_11(struct vars *VAR_6,
  struct dfa *VAR_7,
  struct sset *VAR_8,
  color VAR_9,
  chr *VAR_10,
  chr *VAR_11)
{
 struct cnfa *VAR_12 = VAR_7->cnfa;
 int VAR_13;
 unsigned VAR_14;
 struct carc *VAR_15;
 struct sset *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;


 if (VAR_8->outs[VAR_9] != ((void*)0))
 {
  FUNC_3(("hit\n"));
  return VAR_8->outs[VAR_9];
 }
 FUNC_3(("miss\n"));





 if (FUNC_1(VAR_6->re))
 {
  FUNC_2(VAR_5);
  return ((void*)0);
 }






 for (VAR_13 = 0; VAR_13 < VAR_7->wordsper; VAR_13++)
  VAR_7->work[VAR_13] = 0;
 VAR_17 = 0;
 VAR_18 = 1;
 VAR_19 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_7->nstates; VAR_13++)
  if (FUNC_6(VAR_8->states, VAR_13))
   for (VAR_15 = VAR_12->states[VAR_13]; VAR_15->co != VAR_1; VAR_15++)
    if (VAR_15->co == VAR_9)
    {
     FUNC_0(VAR_7->work, VAR_15->to);
     VAR_19 = 1;
     if (VAR_15->to == VAR_12->post)
      VAR_17 = 1;
     if (!(VAR_12->stflags[VAR_15->to] & VAR_0))
      VAR_18 = 0;
     FUNC_3(("%d -> %d\n", VAR_13, VAR_15->to));
    }
 if (!VAR_19)
  return ((void*)0);
 VAR_20 = (VAR_12->flags & VAR_2);
 VAR_21 = 0;

 while (VAR_20)
 {
  VAR_20 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_7->nstates; VAR_13++)
   if (FUNC_6(VAR_7->work, VAR_13))
    for (VAR_15 = VAR_12->states[VAR_13]; VAR_15->co != VAR_1; VAR_15++)
    {
     if (VAR_15->co < VAR_12->ncolors)
      continue;
     if (FUNC_6(VAR_7->work, VAR_15->to))
      continue;
     VAR_21 = 1;
     if (!FUNC_10(VAR_6, VAR_12, VAR_10, VAR_15->co))
     {
      if (FUNC_7())
       return ((void*)0);
      continue;
     }
     if (FUNC_7())
      return ((void*)0);
     FUNC_0(VAR_7->work, VAR_15->to);
     VAR_20 = 1;
     if (VAR_15->to == VAR_12->post)
      VAR_17 = 1;
     if (!(VAR_12->stflags[VAR_15->to] & VAR_0))
      VAR_18 = 0;
     FUNC_3(("%d :> %d\n", VAR_13, VAR_15->to));
    }
 }
 VAR_14 = FUNC_4(VAR_7->work, VAR_7->wordsper);


 for (VAR_16 = VAR_7->ssets, VAR_13 = VAR_7->nssused; VAR_13 > 0; VAR_16++, VAR_13--)
  if (FUNC_5(VAR_14, VAR_7->work, VAR_16, VAR_7->wordsper))
  {
   FUNC_3(("cached c%d\n", (int) (VAR_16 - VAR_7->ssets)));
   break;
  }
 if (VAR_13 == 0)
 {
  VAR_16 = FUNC_9(VAR_6, VAR_7, VAR_10, VAR_11);
  if (VAR_16 == ((void*)0))
   return ((void*)0);
  FUNC_8(VAR_16 != VAR_8);
  for (VAR_13 = 0; VAR_13 < VAR_7->wordsper; VAR_13++)
   VAR_16->states[VAR_13] = VAR_7->work[VAR_13];
  VAR_16->hash = VAR_14;
  VAR_16->flags = (VAR_17) ? VAR_4 : 0;
  if (VAR_18)
   VAR_16->flags |= VAR_3;

 }
 if (!VAR_21)
 {
  FUNC_3(("c%d[%d]->c%d\n",
    (int) (VAR_8 - VAR_7->ssets), VAR_9, (int) (VAR_16 - VAR_7->ssets)));
  VAR_8->outs[VAR_9] = VAR_16;
  VAR_8->inchain[VAR_9] = VAR_16->ins;
  VAR_16->ins.ss = VAR_8;
  VAR_16->ins.co = VAR_9;
 }
 return VAR_16;
}
