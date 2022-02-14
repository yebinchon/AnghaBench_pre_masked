
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_6__ {TYPE_2__* current_bar; int reading; } ;
struct TYPE_4__ {int top; int right; int bottom; int left; } ;
struct TYPE_5__ {int id; TYPE_1__ gaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char**,int) ;
 int FUNC_6 (int ,char*,int,int,int,int,int ) ;

struct cmd_results *FUNC_7(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "gaps", VAR_2, 1))) {
  return VAR_8;
 }
 if ((VAR_8 = FUNC_0(VAR_6, "gaps", VAR_3, 4))) {
  return VAR_8;
 }

 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 for (int VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  char *VAR_14;
  int VAR_15 = FUNC_5(VAR_7[VAR_13], &VAR_14, 10);
  if (FUNC_4(VAR_14) && FUNC_3(VAR_14, "px") != 0) {
   return FUNC_1(VAR_0,
     "Expected 'bar [<bar-id>] gaps <all> | <horizonal> "
     "<vertical> | <top> <right> <bottom> <left>'");
  }

  if (VAR_13 == 0) {
   VAR_9 = VAR_15;
  }
  if (VAR_13 == 0 || VAR_13 == 1) {
   VAR_10 = VAR_15;
  }
  if (VAR_13 == 0 || VAR_13 == 2) {
   VAR_11 = VAR_15;
  }
  if (VAR_13 == 0 || VAR_13 == 1 || VAR_13 == 3) {
   VAR_12 = VAR_15;
  }
 }

 VAR_5->current_bar->gaps.top = VAR_9;
 VAR_5->current_bar->gaps.right = VAR_10;
 VAR_5->current_bar->gaps.bottom = VAR_11;
 VAR_5->current_bar->gaps.left = VAR_12;

 FUNC_6(VAR_4, "Setting bar gaps to %d %d %d %d on bar: %s",
   VAR_5->current_bar->gaps.top, VAR_5->current_bar->gaps.right,
   VAR_5->current_bar->gaps.bottom, VAR_5->current_bar->gaps.left,
   VAR_5->current_bar->id);

 if (!VAR_5->reading) {
  FUNC_2(VAR_5->current_bar);
 }

 return FUNC_1(VAR_1, ((void*)0));
}
