
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {int eflags; scalar_t__* stop; scalar_t__* start; } ;
struct sset {int flags; scalar_t__* lastseen; struct sset** outs; } ;
struct dfa {int nssused; struct sset* ssets; scalar_t__* lastpost; TYPE_1__* cnfa; struct colormap* cm; } ;
struct colormap {int dummy; } ;
typedef size_t color ;
typedef scalar_t__ chr ;
struct TYPE_2__ {size_t* bos; size_t* eos; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct colormap*,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sset* FUNC_3 (struct vars*,struct dfa*,scalar_t__*) ;
 struct sset* FUNC_4 (struct vars*,struct dfa*,struct sset*,size_t,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static chr *
FUNC_5(struct vars *VAR_4,
  struct dfa *VAR_5,
  chr *VAR_6,
  chr *VAR_7,
  int *VAR_8)
{
 chr *VAR_9;
 chr *VAR_10 = (VAR_7 == VAR_4->stop) ? VAR_7 : VAR_7 + 1;
 color VAR_11;
 struct sset *VAR_12;
 struct sset *VAR_13;
 chr *VAR_14;
 int VAR_15;
 struct colormap *VAR_16 = VAR_5->cm;


 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;


 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6);
 if (VAR_12 == ((void*)0))
  return ((void*)0);
 VAR_9 = VAR_6;


 FUNC_0(("+++ startup +++\n"));
 if (VAR_9 == VAR_4->start)
 {
  VAR_11 = VAR_5->cnfa->bos[(VAR_4->eflags & VAR_2) ? 0 : 1];
  FUNC_0(("color %ld\n", (long) VAR_11));
 }
 else
 {
  VAR_11 = FUNC_1(VAR_16, *(VAR_9 - 1));
  FUNC_0(("char %c, color %ld\n", (char) *(VAR_9 - 1), (long) VAR_11));
 }
 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_12, VAR_11, VAR_9, VAR_6);
 if (VAR_12 == ((void*)0))
  return ((void*)0);
 VAR_12->lastseen = VAR_9;
 {
  while (VAR_9 < VAR_10)
  {
   VAR_11 = FUNC_1(VAR_16, *VAR_9);
   VAR_13 = VAR_12->outs[VAR_11];
   if (VAR_13 == ((void*)0))
   {
    VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_12, VAR_11, VAR_9 + 1, VAR_6);
    if (VAR_13 == ((void*)0))
     break;
   }
   VAR_9++;
   VAR_13->lastseen = VAR_9;
   VAR_12 = VAR_13;
  }
 }

 if (FUNC_2())
  return ((void*)0);


 FUNC_0(("+++ shutdown at c%d +++\n", (int) (VAR_12 - VAR_5->ssets)));
 if (VAR_9 == VAR_4->stop && VAR_7 == VAR_4->stop)
 {
  if (VAR_8 != ((void*)0))
   *VAR_8 = 1;
  VAR_11 = VAR_5->cnfa->eos[(VAR_4->eflags & VAR_3) ? 0 : 1];
  FUNC_0(("color %ld\n", (long) VAR_11));
  VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_12, VAR_11, VAR_9, VAR_6);
  if (FUNC_2())
   return ((void*)0);

  if (VAR_13 != ((void*)0) && (VAR_13->flags & VAR_0))
   return VAR_9;
  else if (VAR_13 != ((void*)0))
   VAR_13->lastseen = VAR_9;
 }


 VAR_14 = VAR_5->lastpost;
 for (VAR_13 = VAR_5->ssets, VAR_15 = VAR_5->nssused; VAR_15 > 0; VAR_13++, VAR_15--)
  if ((VAR_13->flags & VAR_0) && VAR_14 != VAR_13->lastseen &&
   (VAR_14 == ((void*)0) || VAR_14 < VAR_13->lastseen))
   VAR_14 = VAR_13->lastseen;
 if (VAR_14 != ((void*)0))
  return VAR_14 - 1;

 return ((void*)0);
}
