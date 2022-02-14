
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vars {int dummy; } ;
struct guts {int search; int nlacons; int * lacons; int * tree; int cmap; scalar_t__ magic; } ;
struct TYPE_3__ {scalar_t__ re_magic; int * re_fns; int * re_guts; } ;
typedef TYPE_1__ regex_t ;


 int FUNC_0 (struct guts*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct vars*,int *) ;

__attribute__((used)) static void
FUNC_6(regex_t *VAR_1)
{
 struct guts *VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->re_magic != VAR_0)
  return;

 VAR_1->re_magic = 0;
 VAR_2 = (struct guts *) VAR_1->re_guts;
 VAR_1->re_guts = ((void*)0);
 VAR_1->re_fns = ((void*)0);
 if (VAR_2 != ((void*)0))
 {
  VAR_2->magic = 0;
  FUNC_2(&VAR_2->cmap);
  if (VAR_2->tree != ((void*)0))
   FUNC_5((struct vars *) ((void*)0), VAR_2->tree);
  if (VAR_2->lacons != ((void*)0))
   FUNC_4(VAR_2->lacons, VAR_2->nlacons);
  if (!FUNC_1(VAR_2->search))
   FUNC_3(&VAR_2->search);
  FUNC_0(VAR_2);
 }
}
