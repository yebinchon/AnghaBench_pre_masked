
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wspace {int dummy; } ;
struct rs_control {int codec; } ;
struct etab {int symsize; int nroots; int ntrials; int prim; int fcs; int genpoly; } ;
struct TYPE_3__ {int mult; int shift; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct wspace* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct rs_control*,struct wspace*,int,int ) ;
 int FUNC_3 (struct rs_control*,struct wspace*,int,int ) ;
 int FUNC_4 (struct rs_control*) ;
 int FUNC_5 (struct wspace*) ;
 struct rs_control* FUNC_6 (int,int ,int ,int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (char*,int,int,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_8(struct etab *VAR_5)
{
 int VAR_6 = (1 << VAR_5->symsize) - 1;
 int VAR_7 = VAR_6 - VAR_5->nroots;
 struct rs_control *VAR_8;
 int VAR_9 = -VAR_0;
 int VAR_10 = VAR_7 - 1;
 int VAR_11 = -1;
 struct wspace *VAR_12;
 int VAR_13;

 VAR_8 = FUNC_6(VAR_5->symsize, VAR_5->genpoly, VAR_5->fcs, VAR_5->prim, VAR_5->nroots);
 if (!VAR_8)
  return VAR_9;

 VAR_12 = FUNC_1(VAR_8->codec);
 if (!VAR_12)
  goto err;

 VAR_9 = 0;
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); VAR_13++) {
  int VAR_14 = (VAR_3[VAR_13].mult * VAR_10) >> VAR_3[VAR_13].shift;
  int VAR_15 = VAR_6 - VAR_14;

  if (VAR_14 == VAR_11)
   continue;

  VAR_11 = VAR_14;
  if (VAR_4 >= VAR_1) {
   FUNC_7("Testing (%d,%d)_%d code...\n",
     VAR_15, VAR_7 - VAR_14, VAR_6 + 1);
  }

  VAR_9 |= FUNC_2(VAR_8, VAR_12, VAR_15, VAR_5->ntrials);
  if (VAR_2)
   VAR_9 |= FUNC_3(VAR_8, VAR_12, VAR_15, VAR_5->ntrials);
 }

 FUNC_5(VAR_12);

err:
 FUNC_4(VAR_8);
 return VAR_9;
}
