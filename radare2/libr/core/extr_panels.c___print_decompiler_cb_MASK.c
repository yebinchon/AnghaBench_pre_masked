
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int addr; } ;
struct TYPE_13__ {TYPE_2__* panels; TYPE_1__* panels_root; int offset; int anal; } ;
struct TYPE_12__ {scalar_t__ autoUpdate; } ;
struct TYPE_11__ {scalar_t__ cur_pdc_cache; } ;
typedef int RPanel ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RAnalFunction ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;
 char* FUNC_1 (TYPE_3__*,int *) ;
 char* FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int *,char*) ;
 int FUNC_4 (TYPE_3__*,int *,char*) ;
 TYPE_4__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ) ;

void FUNC_9(void *VAR_1, void *VAR_2) {


 RCore *VAR_3 = (RCore *)VAR_1;
 RPanel *VAR_4 = (RPanel *)VAR_2;
 RAnalFunction *VAR_5 = FUNC_5 (VAR_3->anal, VAR_3->offset, VAR_0);
 char *VAR_6 = ((void*)0);
 if (VAR_5 && VAR_3->panels_root->cur_pdc_cache) {
  VAR_6 = FUNC_7 ((char *)FUNC_8 (VAR_3->panels_root->cur_pdc_cache,
     FUNC_6 (((void*)0), VAR_5->addr, 0), 0));
 }
 if (VAR_6) {
  FUNC_3 (VAR_3, VAR_4, VAR_6);
  return;
 }
 bool VAR_7 = VAR_3->panels->autoUpdate && FUNC_0 (VAR_3, VAR_4);
 if (VAR_7) {
  VAR_6 = FUNC_2 (VAR_3, VAR_4, 0);
  FUNC_4 (VAR_3, VAR_4, VAR_6);
  return;
 }
 VAR_6 = FUNC_1 (VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_3 (VAR_3, VAR_4, VAR_6);
 }
}
