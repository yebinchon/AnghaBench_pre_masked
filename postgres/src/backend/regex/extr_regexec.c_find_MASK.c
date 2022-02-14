
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vars {int nmatch; int err; TYPE_3__* g; TYPE_4__* pmatch; int * stop; TYPE_2__* details; int dfa1; int * search_start; int * start; } ;
struct dfa {int dummy; } ;
struct colormap {int dummy; } ;
struct cnfa {int dummy; } ;
typedef int chr ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {void* rm_eo; void* rm_so; } ;
struct TYPE_8__ {int cflags; TYPE_5__* tree; struct cnfa search; } ;
struct TYPE_6__ {void* rm_eo; void* rm_so; } ;
struct TYPE_7__ {TYPE_1__ rm_extend; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 void* FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vars*,TYPE_5__*,int *,int *) ;
 int FUNC_7 (struct dfa*) ;
 int * FUNC_8 (struct vars*,struct dfa*,int *,int *,int*) ;
 struct dfa* FUNC_9 (struct vars*,struct cnfa*,struct colormap*,int *) ;
 int * FUNC_10 (struct vars*,struct dfa*,int *,int *,int *,int **,int*) ;
 int FUNC_11 (TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_12(struct vars *VAR_4,
  struct cnfa *VAR_5,
  struct colormap *VAR_6)
{
 struct dfa *VAR_7;
 struct dfa *VAR_8;
 chr *VAR_9;
 chr *VAR_10 = ((void*)0);
 chr *VAR_11;
 chr *VAR_12;
 chr *VAR_13;
 int VAR_14;
 int VAR_15 = (VAR_4->g->tree->flags & VAR_3) ? 1 : 0;


 VAR_7 = FUNC_9(VAR_4, &VAR_4->g->search, VAR_6, &VAR_4->dfa1);
 FUNC_5(!(FUNC_0() && VAR_7 != ((void*)0)));
 FUNC_3();
 FUNC_2(("\nsearch at %ld\n", FUNC_1(VAR_4->start)));
 VAR_11 = ((void*)0);
 VAR_13 = FUNC_10(VAR_4, VAR_7, VAR_4->search_start, VAR_4->search_start, VAR_4->stop,
      &VAR_11, (int *) ((void*)0));
 FUNC_7(VAR_7);
 FUNC_3();
 if (VAR_4->g->cflags & VAR_0)
 {
  FUNC_5(VAR_4->details != ((void*)0));
  if (VAR_11 != ((void*)0))
   VAR_4->details->rm_extend.rm_so = FUNC_4(VAR_11);
  else
   VAR_4->details->rm_extend.rm_so = FUNC_4(VAR_4->stop);
  VAR_4->details->rm_extend.rm_eo = FUNC_4(VAR_4->stop);
 }
 if (VAR_13 == ((void*)0))
  return VAR_1;
 if (VAR_4->nmatch == 0)
  return VAR_2;


 FUNC_5(VAR_11 != ((void*)0));
 VAR_12 = VAR_11;
 VAR_11 = ((void*)0);
 FUNC_2(("between %ld and %ld\n", FUNC_1(VAR_12), FUNC_1(VAR_13)));
 VAR_8 = FUNC_9(VAR_4, VAR_5, VAR_6, &VAR_4->dfa1);
 FUNC_5(!(FUNC_0() && VAR_8 != ((void*)0)));
 FUNC_3();
 for (VAR_9 = VAR_12; VAR_9 <= VAR_13; VAR_9++)
 {
  FUNC_2(("\nfind trying at %ld\n", FUNC_1(VAR_9)));
  if (VAR_15)
   VAR_10 = FUNC_10(VAR_4, VAR_8, VAR_9, VAR_9, VAR_4->stop,
         (chr **) ((void*)0), &VAR_14);
  else
   VAR_10 = FUNC_8(VAR_4, VAR_8, VAR_9, VAR_4->stop, &VAR_14);
  if (FUNC_0())
  {
   FUNC_7(VAR_8);
   return VAR_4->err;
  }
  if (VAR_14 && VAR_11 == ((void*)0))
   VAR_11 = VAR_9;
  if (VAR_10 != ((void*)0))
   break;
 }
 FUNC_5(VAR_10 != ((void*)0));
 FUNC_7(VAR_8);


 FUNC_5(VAR_4->nmatch > 0);
 VAR_4->pmatch[0].rm_so = FUNC_4(VAR_9);
 VAR_4->pmatch[0].rm_eo = FUNC_4(VAR_10);
 if (VAR_4->g->cflags & VAR_0)
 {
  if (VAR_11 != ((void*)0))
   VAR_4->details->rm_extend.rm_so = FUNC_4(VAR_11);
  else
   VAR_4->details->rm_extend.rm_so = FUNC_4(VAR_4->stop);
  VAR_4->details->rm_extend.rm_eo = FUNC_4(VAR_4->stop);
 }
 if (VAR_4->nmatch == 1)
  return VAR_2;


 FUNC_11(VAR_4->pmatch, VAR_4->nmatch);
 return FUNC_6(VAR_4, VAR_4->g->tree, VAR_9, VAR_10);
}
