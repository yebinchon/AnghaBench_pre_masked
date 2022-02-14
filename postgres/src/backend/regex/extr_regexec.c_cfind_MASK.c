
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vars {int err; int * stop; TYPE_3__* details; TYPE_1__* g; int dfa2; int dfa1; } ;
struct dfa {int dummy; } ;
struct colormap {int dummy; } ;
struct cnfa {int dummy; } ;
typedef int chr ;
struct TYPE_5__ {void* rm_eo; void* rm_so; } ;
struct TYPE_6__ {TYPE_2__ rm_extend; } ;
struct TYPE_4__ {int cflags; struct cnfa search; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 void* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vars*,struct cnfa*,struct colormap*,struct dfa*,struct dfa*,int **) ;
 int FUNC_5 (struct dfa*) ;
 struct dfa* FUNC_6 (struct vars*,struct cnfa*,struct colormap*,int *) ;

__attribute__((used)) static int
FUNC_7(struct vars *VAR_1,
   struct cnfa *VAR_2,
   struct colormap *VAR_3)
{
 struct dfa *VAR_4;
 struct dfa *VAR_5;
 chr *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_6(VAR_1, &VAR_1->g->search, VAR_3, &VAR_1->dfa1);
 FUNC_1();
 VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_3, &VAR_1->dfa2);
 if (FUNC_0())
 {
  FUNC_3(VAR_5 == ((void*)0));
  FUNC_5(VAR_4);
  return VAR_1->err;
 }

 VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5, VAR_4, &VAR_6);

 FUNC_5(VAR_5);
 FUNC_5(VAR_4);
 FUNC_1();
 if (VAR_1->g->cflags & VAR_0)
 {
  FUNC_3(VAR_1->details != ((void*)0));
  if (VAR_6 != ((void*)0))
   VAR_1->details->rm_extend.rm_so = FUNC_2(VAR_6);
  else
   VAR_1->details->rm_extend.rm_so = FUNC_2(VAR_1->stop);
  VAR_1->details->rm_extend.rm_eo = FUNC_2(VAR_1->stop);
 }
 return VAR_7;
}
