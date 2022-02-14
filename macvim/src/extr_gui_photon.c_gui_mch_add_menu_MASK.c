
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ mnemonic; int * submenu_id; int name; int * id; int priority; struct TYPE_12__* actext; struct TYPE_12__* dname; struct TYPE_12__* parent; } ;
typedef TYPE_1__ vimmenu_T ;
typedef TYPE_1__ char_u ;
struct TYPE_13__ {int * vimWindow; scalar_t__ menu_is_active; int * vimMenuBar; } ;
typedef int PtArg_t ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_1__*,int ) ;
 void* FUNC_2 (int ,int *,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_5__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_1__* FUNC_9 (int ,char) ;

void
FUNC_10(vimmenu_T *VAR_19, int VAR_20)
{
    vimmenu_T *VAR_21 = VAR_19->parent;
    char_u *VAR_22;
    char_u VAR_23[VAR_0];
    int VAR_24;
    PtArg_t VAR_25[5];

    VAR_19->submenu_id = VAR_19->id = ((void*)0);

    if (FUNC_6(VAR_19->name))
    {

 VAR_22 = FUNC_9(VAR_19->name, '&');
 if (VAR_22 != ((void*)0))
 {
     VAR_23[0] = VAR_22[1];
     VAR_23[1] = VAR_1;
 }


 VAR_24 = 0;
 FUNC_4(&VAR_25[ VAR_24++ ], VAR_10, VAR_19->dname, 0);
 FUNC_4(&VAR_25[ VAR_24++ ], VAR_6, VAR_19->actext, 0);
 if (VAR_22 != ((void*)0))
     FUNC_4(&VAR_25[ VAR_24++ ], VAR_5, VAR_23, 0);
 FUNC_4(&VAR_25[ VAR_24++ ], VAR_9, VAR_19, 0);

 if (VAR_21 != ((void*)0))
     FUNC_4(&VAR_25[ VAR_24++ ], VAR_7, VAR_14, 0);

 VAR_19->id = FUNC_2(VAR_4,
  (VAR_21 == ((void*)0)) ? VAR_16.vimMenuBar : VAR_21->submenu_id,
  VAR_24, VAR_25);

 FUNC_0(VAR_19->id, VAR_11, VAR_18, VAR_19);


 VAR_24 = 0;
 if (VAR_21 != ((void*)0))
     FUNC_4(&VAR_25[ VAR_24++ ], VAR_8, VAR_15, VAR_13);

 VAR_19->submenu_id = FUNC_2(VAR_3, VAR_19->id, VAR_24, VAR_25);

 if (VAR_21 == ((void*)0))
 {
     FUNC_0(VAR_19->submenu_id, VAR_12,
      VAR_17, VAR_19);

     if (VAR_19->mnemonic != 0)
     {
  FUNC_1(VAR_16.vimWindow, FUNC_8(VAR_19->mnemonic),
   VAR_2, 0, VAR_19, VAR_18);
     }
 }

 FUNC_5(VAR_19->id, VAR_19->priority);


 if (VAR_16.menu_is_active)
     FUNC_3(VAR_19->id);
    }
    else if (FUNC_7(VAR_19->name))
    {
 VAR_19->submenu_id = FUNC_2(VAR_3, VAR_16.vimWindow, 0, ((void*)0));
 FUNC_0(VAR_19->submenu_id, VAR_12,
  VAR_17, VAR_19);
    }
}
