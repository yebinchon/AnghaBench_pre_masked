
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; int wndExtX; int wndExtY; int vportExtX; int vportExtY; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
typedef TYPE_2__ enum_emh_data ;
typedef int INT ;
typedef int HDC ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(HDC VAR_4, enum_emh_data *VAR_5)
{
    INT VAR_6 = FUNC_0( VAR_4, VAR_1 );
    INT VAR_7 = FUNC_0( VAR_4, VAR_3 );
    INT VAR_8 = FUNC_0( VAR_4, VAR_0 );
    INT VAR_9 = FUNC_0( VAR_4, VAR_2 );

    FUNC_2("%d\n", VAR_5->state.mode);

    switch(VAR_5->state.mode)
    {
    case 129:
        VAR_5->state.wndExtX = 1;
        VAR_5->state.wndExtY = 1;
        VAR_5->state.vportExtX = 1;
        VAR_5->state.vportExtY = 1;
        break;
    case 130:
    case 132:
        VAR_5->state.wndExtX = VAR_6 * 10;
        VAR_5->state.wndExtY = VAR_7 * 10;
        VAR_5->state.vportExtX = VAR_8;
        VAR_5->state.vportExtY = -VAR_9;
        break;
    case 133:
        VAR_5->state.wndExtX = VAR_6 * 100;
        VAR_5->state.wndExtY = VAR_7 * 100;
        VAR_5->state.vportExtX = VAR_8;
        VAR_5->state.vportExtY = -VAR_9;
        break;
    case 131:
        VAR_5->state.wndExtX = FUNC_1(1000, VAR_6, 254);
        VAR_5->state.wndExtY = FUNC_1(1000, VAR_7, 254);
        VAR_5->state.vportExtX = VAR_8;
        VAR_5->state.vportExtY = -VAR_9;
        break;
    case 134:
        VAR_5->state.wndExtX = FUNC_1(10000, VAR_6, 254);
        VAR_5->state.wndExtY = FUNC_1(10000, VAR_7, 254);
        VAR_5->state.vportExtX = VAR_8;
        VAR_5->state.vportExtY = -VAR_9;
        break;
    case 128:
        VAR_5->state.wndExtX = FUNC_1(14400, VAR_6, 254);
        VAR_5->state.wndExtY = FUNC_1(14400, VAR_7, 254);
        VAR_5->state.vportExtX = VAR_8;
        VAR_5->state.vportExtY = -VAR_9;
        break;
    case 135:
        break;
    default:
        return;
    }
}
