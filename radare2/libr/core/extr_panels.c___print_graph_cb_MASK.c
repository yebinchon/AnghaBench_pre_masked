
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* cons; TYPE_2__* panels; } ;
struct TYPE_9__ {scalar_t__ autoUpdate; } ;
struct TYPE_8__ {int * event_resize; TYPE_3__* event_data; } ;
typedef int RPanel ;
typedef TYPE_3__ RCore ;
typedef int * RConsEvent ;


 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (TYPE_3__*,int *) ;
 char* FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (TYPE_3__*,int *,char*) ;

void FUNC_4(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore *)VAR_1;
 RPanel *VAR_4 = (RPanel *)VAR_2;
 bool VAR_5 = VAR_3->panels->autoUpdate && FUNC_0 (VAR_3, VAR_4);
 char *VAR_6 = FUNC_1 (VAR_3, VAR_4);
 if (VAR_5 || !VAR_6) {
  VAR_6 = FUNC_2 (VAR_3, VAR_4, 0);
 }
 VAR_3->cons->event_resize = ((void*)0);
 VAR_3->cons->event_data = VAR_3;
 VAR_3->cons->event_resize = (RConsEvent) VAR_0;
 FUNC_3 (VAR_3, VAR_4, VAR_6);
}
