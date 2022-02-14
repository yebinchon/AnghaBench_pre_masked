
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_20__ {int y; int x; } ;
struct TYPE_19__ {short border_width; } ;
struct TYPE_15__ {int y; int x; } ;
struct TYPE_18__ {int key_mods; int buttons; int click_count; TYPE_2__ pos; } ;
struct TYPE_14__ {short x; short y; } ;
struct TYPE_17__ {TYPE_1__ ul; } ;
struct TYPE_16__ {TYPE_10__* event; } ;
struct TYPE_13__ {int type; scalar_t__ subtype; } ;
typedef int PtWidget_t ;
typedef TYPE_3__ PtCallbackInfo_t ;
typedef TYPE_4__ PhRect_t ;
typedef TYPE_5__ PhPointerEvent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_0 (TYPE_10__*) ;
 TYPE_4__* FUNC_1 (TYPE_10__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_8__ VAR_23 ;
 TYPE_7__ VAR_24 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (short,short) ;
 int FUNC_4 (int,short,short,int,int) ;

__attribute__((used)) static int
FUNC_5(PtWidget_t *VAR_25, void *VAR_26, PtCallbackInfo_t *VAR_27)
{
    PhPointerEvent_t *VAR_28;
    PhRect_t *VAR_29;
    int VAR_30 = 0, VAR_31, VAR_32 = 0x0;
    short VAR_33, VAR_34;

    VAR_28 = FUNC_0(VAR_27->event);
    VAR_29 = FUNC_1(VAR_27->event);

    FUNC_2(VAR_9);





    VAR_33 = VAR_29->ul.x + VAR_24.border_width;
    VAR_34 = VAR_29->ul.y + VAR_24.border_width;

    if (VAR_27->event->type == VAR_16)
    {
 FUNC_3(VAR_33, VAR_34);
 return VAR_21;
    }

    if (VAR_28->key_mods & VAR_20)
 VAR_32 |= VAR_8;
    if (VAR_28->key_mods & VAR_19)
 VAR_32 |= VAR_2;
    if (VAR_28->key_mods & VAR_18)
 VAR_32 |= VAR_1;





    if (VAR_28->buttons & VAR_12)
 VAR_30 = VAR_4;

    if (VAR_28->buttons & VAR_11)
    {
 VAR_30 = VAR_7;

 VAR_23.x = VAR_28->pos.x;
 VAR_23.y = VAR_28->pos.y;
    }

    if (VAR_28->buttons & VAR_10)
 VAR_30 = VAR_5;


    if (VAR_27->event->type == VAR_13)
 VAR_30 = VAR_6;

    if (VAR_27->event->type & VAR_15)
 VAR_30 = VAR_3;
    if ((VAR_30 != VAR_6) ||
     (VAR_27->event->subtype == VAR_17))
    {
 VAR_31 = (VAR_28->click_count >= 2) ? VAR_22 : VAR_0;

 FUNC_4(VAR_30 , VAR_33, VAR_34, VAR_31, VAR_32);
    }

    return VAR_21;
}
