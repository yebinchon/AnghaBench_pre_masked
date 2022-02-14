
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * id; int * submenu_id; int name; int * strings; int dname; struct TYPE_8__* parent; } ;
typedef TYPE_1__ vimmenu_T ;
typedef int char_u ;
struct TYPE_9__ {int toolbar; } ;
typedef int GtkToolbar ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 size_t VAR_1 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ,int *,int) ;
 int * FUNC_9 () ;
 int FUNC_10 (int ,char*,int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,char const*,char const*,int *,int ,int ,TYPE_1__*,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 TYPE_4__ VAR_3 ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_4 ;
 int FUNC_19 (TYPE_1__*,int *) ;
 int VAR_5 ;
 int FUNC_20 (int *,int *) ;

void
FUNC_21(vimmenu_T *VAR_6, int VAR_7)
{
    vimmenu_T *VAR_8;

    VAR_8 = VAR_6->parent;
    {

 if (VAR_8 == ((void*)0) || VAR_8->submenu_id == ((void*)0))
     return;



 if (!FUNC_16(VAR_8->name))
     ++VAR_7;

 if (FUNC_17(VAR_6->name))
 {

     VAR_6->id = FUNC_9();
     FUNC_14(VAR_6->id, VAR_0);
     FUNC_15(VAR_6->id);
     FUNC_8(FUNC_2(VAR_8->submenu_id), VAR_6->id, VAR_7);

     return;
 }


 FUNC_19(VAR_6, VAR_8->submenu_id);
 FUNC_15(VAR_6->id);
 FUNC_8(FUNC_2(VAR_8->submenu_id), VAR_6->id, VAR_7);

 if (VAR_6->id != ((void*)0))
     FUNC_10(FUNC_3(VAR_6->id), "activate",
          FUNC_4(VAR_4), VAR_6);
    }
}
