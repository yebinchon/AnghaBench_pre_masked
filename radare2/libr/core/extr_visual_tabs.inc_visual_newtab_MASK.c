
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tab; int tabs; } ;
struct TYPE_7__ {TYPE_1__ visual; } ;
typedef int RListFree ;
typedef int RCoreVisualTab ;
typedef TYPE_2__ RCore ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static RCoreVisualTab *FUNC_4 (RCore *VAR_1) {
 if (!VAR_1->visual.tabs) {
  VAR_1->visual.tabs = FUNC_2 ((RListFree)VAR_0);
  if (!VAR_1->visual.tabs) {
   return ((void*)0);
  }
  VAR_1->visual.tab = -1;
  FUNC_4 (VAR_1);
 }
 VAR_1->visual.tab++;
 RCoreVisualTab *VAR_2 = FUNC_0 (VAR_1);
 if (VAR_2) {
  FUNC_1 (VAR_1->visual.tabs, VAR_2);
  FUNC_3 (VAR_1, VAR_2);
 }
 return VAR_2;
}
