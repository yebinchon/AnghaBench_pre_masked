
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct menu_item_pair_s {size_t uMenu; int uItem; } ;
typedef int i ;
struct TYPE_10__ {int left; int top; } ;
struct TYPE_7__ {int dx; int dy; int dwFlags; } ;
struct TYPE_8__ {TYPE_1__ mi; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_3__ TEST_INPUT ;
typedef TYPE_4__ RECT ;
typedef int MSG ;
typedef int INPUT ;
typedef int HMENU ;
typedef int * HANDLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (int,int *,int) ;

__attribute__((used)) static BOOL FUNC_6(HANDLE VAR_10, struct menu_item_pair_s *VAR_11)
{
    HMENU VAR_12 = VAR_9[VAR_11->uMenu];
    TEST_INPUT VAR_13[3];
    MSG VAR_14;
    RECT VAR_15;
    int VAR_16 = FUNC_2(VAR_7);
    int VAR_17 = FUNC_2(VAR_8);
    BOOL VAR_18 = FUNC_1(VAR_11->uMenu > 2 ? ((void*)0) : VAR_10, VAR_12, VAR_11->uItem, &VAR_15);
    if(!VAR_18) return VAR_0;

    FUNC_4(VAR_13, 0, sizeof(VAR_13));
    VAR_13[0].type = VAR_13[1].type = VAR_13[2].type = VAR_1;
    VAR_13[0].u.mi.dx = VAR_13[1].u.mi.dx = VAR_13[2].u.mi.dx
            = ((VAR_15.left + 5) * 65535) / VAR_16;
    VAR_13[0].u.mi.dy = VAR_13[1].u.mi.dy = VAR_13[2].u.mi.dy
            = ((VAR_15.top + 5) * 65535) / VAR_17;
    VAR_13[0].u.mi.dwFlags = VAR_13[1].u.mi.dwFlags = VAR_13[2].u.mi.dwFlags
            = VAR_2;
    VAR_13[0].u.mi.dwFlags |= VAR_5;
    VAR_13[1].u.mi.dwFlags |= VAR_3;
    VAR_13[2].u.mi.dwFlags |= VAR_4;
    VAR_18 = FUNC_5(3, (INPUT *) VAR_13, sizeof(INPUT));


    while (FUNC_3( &VAR_14, 0, 0, 0, VAR_6 )) FUNC_0( &VAR_14 );
    return VAR_18;
}
