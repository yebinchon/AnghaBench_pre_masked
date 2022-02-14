
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vars {int * lblastcp; int * lblastcss; int stop; TYPE_1__* g; int re; } ;
struct subre {int subno; } ;
struct dfa {int dummy; } ;
struct cnfa {int ncolors; } ;
typedef int color ;
typedef int chr ;
struct TYPE_2__ {int nlacons; struct subre* lacons; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 struct dfa* FUNC_6 (struct vars*,int) ;
 int FUNC_7 (struct vars*,struct dfa*,int *,int *,int *) ;
 int * FUNC_8 (struct vars*,struct dfa*,int *,int *,int ,int **,int*) ;

__attribute__((used)) static int
FUNC_9(struct vars *VAR_1,
   struct cnfa *VAR_2,
   chr *VAR_3,
   color VAR_4)
{
 int VAR_5;
 struct subre *VAR_6;
 struct dfa *VAR_7;
 chr *VAR_8;
 int VAR_9;


 if (FUNC_4(VAR_1->re))
 {
  FUNC_0(VAR_0);
  return 0;
 }

 VAR_5 = VAR_4 - VAR_2->ncolors;
 FUNC_5(VAR_5 > 0 && VAR_5 < VAR_1->g->nlacons && VAR_1->g->lacons != ((void*)0));
 FUNC_1(("=== testing lacon %d\n", VAR_5));
 VAR_6 = &VAR_1->g->lacons[VAR_5];
 VAR_7 = FUNC_6(VAR_1, VAR_5);
 if (VAR_7 == ((void*)0))
  return 0;
 if (FUNC_2(VAR_6->subno))
 {

  VAR_8 = FUNC_8(VAR_1, VAR_7, VAR_3, VAR_3, VAR_1->stop,
        (chr **) ((void*)0), (int *) ((void*)0));
  VAR_9 = FUNC_3(VAR_6->subno) ? (VAR_8 != ((void*)0)) : (VAR_8 == ((void*)0));
 }
 else
 {
  VAR_9 = FUNC_7(VAR_1, VAR_7, VAR_3, &VAR_1->lblastcss[VAR_5], &VAR_1->lblastcp[VAR_5]);
  if (!FUNC_3(VAR_6->subno))
   VAR_9 = !VAR_9;
 }
 FUNC_1(("=== lacon %d satisfied %d\n", VAR_5, VAR_9));
 return VAR_9;
}
