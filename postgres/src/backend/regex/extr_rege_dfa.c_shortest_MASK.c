
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {int eflags; scalar_t__* stop; scalar_t__* start; } ;
struct sset {int flags; scalar_t__* lastseen; struct sset** outs; } ;
struct dfa {TYPE_1__* cnfa; struct sset* ssets; struct colormap* cm; } ;
struct colormap {int dummy; } ;
typedef size_t color ;
typedef scalar_t__ chr ;
struct TYPE_2__ {size_t* bos; size_t* eos; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct colormap*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 struct sset* FUNC_3 (struct vars*,struct dfa*,scalar_t__*) ;
 scalar_t__* FUNC_4 (struct vars*,struct dfa*) ;
 struct sset* FUNC_5 (struct vars*,struct dfa*,struct sset*,size_t,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static chr *
FUNC_6(struct vars *VAR_4,
   struct dfa *VAR_5,
   chr *VAR_6,
   chr *VAR_7,
   chr *VAR_8,
   chr **VAR_9,
   int *VAR_10)
{
 chr *VAR_11;
 chr *VAR_12 = (VAR_7 == VAR_4->stop) ? VAR_7 : VAR_7 + 1;
 chr *VAR_13 = (VAR_8 == VAR_4->stop) ? VAR_8 : VAR_8 + 1;
 color VAR_14;
 struct sset *VAR_15;
 struct sset *VAR_16;
 struct colormap *VAR_17 = VAR_5->cm;


 if (VAR_9 != ((void*)0))
  *VAR_9 = ((void*)0);
 if (VAR_10 != ((void*)0))
  *VAR_10 = 0;


 VAR_15 = FUNC_3(VAR_4, VAR_5, VAR_6);
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 VAR_11 = VAR_6;


 FUNC_0(("--- startup ---\n"));
 if (VAR_11 == VAR_4->start)
 {
  VAR_14 = VAR_5->cnfa->bos[(VAR_4->eflags & VAR_2) ? 0 : 1];
  FUNC_0(("color %ld\n", (long) VAR_14));
 }
 else
 {
  VAR_14 = FUNC_1(VAR_17, *(VAR_11 - 1));
  FUNC_0(("char %c, color %ld\n", (char) *(VAR_11 - 1), (long) VAR_14));
 }
 VAR_15 = FUNC_5(VAR_4, VAR_5, VAR_15, VAR_14, VAR_11, VAR_6);
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 VAR_15->lastseen = VAR_11;
 VAR_16 = VAR_15;
 {
  while (VAR_11 < VAR_13)
  {
   VAR_14 = FUNC_1(VAR_17, *VAR_11);
   VAR_16 = VAR_15->outs[VAR_14];
   if (VAR_16 == ((void*)0))
   {
    VAR_16 = FUNC_5(VAR_4, VAR_5, VAR_15, VAR_14, VAR_11 + 1, VAR_6);
    if (VAR_16 == ((void*)0))
     break;
   }
   VAR_11++;
   VAR_16->lastseen = VAR_11;
   VAR_15 = VAR_16;
   if ((VAR_16->flags & VAR_0) && VAR_11 >= VAR_12)
    break;
  }
 }

 if (VAR_16 == ((void*)0))
  return ((void*)0);

 if (VAR_9 != ((void*)0))
  *VAR_9 = FUNC_4(VAR_4, VAR_5);

 if ((VAR_16->flags & VAR_0) && VAR_11 > VAR_7)
 {
  FUNC_2(VAR_11 >= VAR_12);
  VAR_11--;
 }
 else if (VAR_11 == VAR_4->stop && VAR_8 == VAR_4->stop)
 {
  VAR_14 = VAR_5->cnfa->eos[(VAR_4->eflags & VAR_3) ? 0 : 1];
  FUNC_0(("color %ld\n", (long) VAR_14));
  VAR_16 = FUNC_5(VAR_4, VAR_5, VAR_15, VAR_14, VAR_11, VAR_6);

  if ((VAR_16 == ((void*)0) || !(VAR_16->flags & VAR_0)) && VAR_10 != ((void*)0))
   *VAR_10 = 1;
 }

 if (VAR_16 == ((void*)0) || !(VAR_16->flags & VAR_0))
  return ((void*)0);

 return VAR_11;
}
