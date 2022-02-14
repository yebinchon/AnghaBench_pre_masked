
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vars {int err; scalar_t__ nmatch; TYPE_2__* pmatch; TYPE_1__* g; int * stop; int * search_start; } ;
struct dfa {int dummy; } ;
struct colormap {int dummy; } ;
struct cnfa {int dummy; } ;
typedef int chr ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {void* rm_eo; void* rm_so; } ;
struct TYPE_4__ {TYPE_3__* tree; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct vars*,TYPE_3__*,int *,int *) ;
 int * FUNC_7 (struct vars*,struct dfa*,int *,int *,int*) ;
 int * FUNC_8 (struct vars*,struct dfa*,int *,int *,int *,int **,int*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct vars *VAR_3,
    struct cnfa *VAR_4,
    struct colormap *VAR_5,
    struct dfa *VAR_6,
    struct dfa *VAR_7,
    chr **VAR_8)
{
 chr *VAR_9;
 chr *VAR_10;
 chr *VAR_11;
 chr *VAR_12;
 chr *VAR_13;
 chr *VAR_14;
 chr *VAR_15;
 int VAR_16;
 int VAR_17 = VAR_3->g->tree->flags & VAR_2;
 int VAR_18;

 FUNC_5(VAR_6 != ((void*)0) && VAR_7 != ((void*)0));
 VAR_11 = ((void*)0);
 VAR_13 = VAR_3->search_start;
 do
 {

  FUNC_3(("\ncsearch at %ld\n", FUNC_2(VAR_13)));
  VAR_13 = FUNC_8(VAR_3, VAR_7, VAR_13, VAR_13, VAR_3->stop, &VAR_11, (int *) ((void*)0));
  if (FUNC_1())
  {
   *VAR_8 = VAR_11;
   return VAR_3->err;
  }
  if (VAR_13 == ((void*)0))
   break;
  FUNC_5(VAR_11 != ((void*)0));
  VAR_12 = VAR_11;
  VAR_11 = ((void*)0);

  FUNC_3(("cbetween %ld and %ld\n", FUNC_2(VAR_12), FUNC_2(VAR_13)));
  for (VAR_9 = VAR_12; VAR_9 <= VAR_13; VAR_9++)
  {
   FUNC_3(("\ncfind trying at %ld\n", FUNC_2(VAR_9)));
   VAR_14 = VAR_9;
   VAR_15 = VAR_3->stop;
   for (;;)
   {

    if (VAR_17)
     VAR_10 = FUNC_8(VAR_3, VAR_6, VAR_9, VAR_14,
           VAR_15, (chr **) ((void*)0), &VAR_18);
    else
     VAR_10 = FUNC_7(VAR_3, VAR_6, VAR_9, VAR_15,
          &VAR_18);
    if (FUNC_1())
    {
     *VAR_8 = VAR_11;
     return VAR_3->err;
    }
    if (VAR_18 && VAR_11 == ((void*)0))
     VAR_11 = VAR_9;
    if (VAR_10 == ((void*)0))
     break;
    FUNC_3(("tentative end %ld\n", FUNC_2(VAR_10)));

    FUNC_9(VAR_3->pmatch, VAR_3->nmatch);
    VAR_16 = FUNC_6(VAR_3, VAR_3->g->tree, VAR_9, VAR_10);
    if (VAR_16 == VAR_1)
    {
     if (VAR_3->nmatch > 0)
     {
      VAR_3->pmatch[0].rm_so = FUNC_4(VAR_9);
      VAR_3->pmatch[0].rm_eo = FUNC_4(VAR_10);
     }
     *VAR_8 = VAR_11;
     return VAR_1;
    }
    if (VAR_16 != VAR_0)
    {
     FUNC_0(VAR_16);
     *VAR_8 = VAR_11;
     return VAR_16;
    }

    if (VAR_17)
    {
     if (VAR_10 == VAR_15)
      break;
     VAR_14 = VAR_10 + 1;
    }
    else
    {
     if (VAR_10 == VAR_9)
      break;
     VAR_15 = VAR_10 - 1;
    }
   }
  }






  VAR_13++;
 } while (VAR_13 < VAR_3->stop);

 *VAR_8 = VAR_11;
 return VAR_0;
}
