
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bmp ;
struct TYPE_9__ {int bmHeight; int bmWidth; } ;
struct TYPE_8__ {int hbmColor; int hbmMask; } ;
struct TYPE_7__ {int cy; int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ ICONINFO ;
typedef int HICON ;
typedef int BOOL ;
typedef TYPE_3__ BITMAP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int,TYPE_3__*) ;

__attribute__((used)) static BOOL FUNC_3( HICON VAR_1, SIZE *VAR_2 )
{
    ICONINFO VAR_3;
    BITMAP VAR_4;
    int VAR_5;

    if (!FUNC_1(VAR_1, &VAR_3))
        return VAR_0;

    VAR_5 = FUNC_2(VAR_3.hbmColor, sizeof(VAR_4), &VAR_4);
    if (VAR_5)
    {
        VAR_2->cx = VAR_4.bmWidth;
        VAR_2->cy = VAR_4.bmHeight;
    }

    FUNC_0(VAR_3.hbmMask);
    FUNC_0(VAR_3.hbmColor);

    return !!VAR_5;
}
