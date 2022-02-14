
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {int eflags; scalar_t__* start; scalar_t__* stop; } ;
struct sset {int flags; struct sset** outs; scalar_t__* lastseen; } ;
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
 struct sset* FUNC_4 (struct vars*,struct dfa*,struct sset*,size_t,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_5(struct vars *VAR_4,
     struct dfa *VAR_5,
     chr *VAR_6,
     struct sset **VAR_7,
     chr **VAR_8)
{
 chr *VAR_9 = *VAR_8;
 color VAR_10;
 struct sset *VAR_11 = *VAR_7;
 struct sset *VAR_12;
 struct colormap *VAR_13 = VAR_5->cm;


 if (VAR_9 == ((void*)0) || VAR_9 > VAR_6)
 {
  VAR_9 = VAR_4->start;
  VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_9);
  if (VAR_11 == ((void*)0))
   return 0;

  FUNC_0((">>> startup >>>\n"));
  VAR_10 = VAR_5->cnfa->bos[(VAR_4->eflags & VAR_2) ? 0 : 1];
  FUNC_0(("color %ld\n", (long) VAR_10));

  VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_10, VAR_9, VAR_4->start);
  if (VAR_11 == ((void*)0))
   return 0;
  VAR_11->lastseen = VAR_9;
 }
 else if (VAR_11 == ((void*)0))
 {

  return 0;
 }
 VAR_12 = VAR_11;
 {
  while (VAR_9 < VAR_6)
  {
   VAR_10 = FUNC_1(VAR_13, *VAR_9);
   VAR_12 = VAR_11->outs[VAR_10];
   if (VAR_12 == ((void*)0))
   {
    VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_10, VAR_9 + 1, VAR_4->start);
    if (VAR_12 == ((void*)0))
     break;
   }
   VAR_9++;
   VAR_12->lastseen = VAR_9;
   VAR_11 = VAR_12;
  }
 }

 *VAR_7 = VAR_12;
 *VAR_8 = VAR_9;

 if (VAR_12 == ((void*)0))
  return 0;


 if (VAR_9 < VAR_4->stop)
 {
  FUNC_0((">>> at c%d >>>\n", (int) (VAR_11 - VAR_5->ssets)));
  VAR_10 = FUNC_1(VAR_13, *VAR_9);
  FUNC_0(("char %c, color %ld\n", (char) *VAR_9, (long) VAR_10));
  VAR_12 = VAR_11->outs[VAR_10];
  if (VAR_12 == ((void*)0))
   VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_10, VAR_9 + 1, VAR_4->start);
 }
 else
 {
  FUNC_2(VAR_9 == VAR_4->stop);
  VAR_10 = VAR_5->cnfa->eos[(VAR_4->eflags & VAR_3) ? 0 : 1];
  FUNC_0(("color %ld\n", (long) VAR_10));
  VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_10, VAR_9, VAR_4->start);
 }

 if (VAR_12 == ((void*)0) || !(VAR_12->flags & VAR_0))
  return 0;

 return 1;
}
