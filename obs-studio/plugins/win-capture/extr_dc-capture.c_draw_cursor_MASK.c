
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; int y; } ;
struct TYPE_10__ {int flags; TYPE_1__ ptScreenPos; int hCursor; } ;
struct dc_capture {TYPE_4__ ci; int y; int x; } ;
struct TYPE_9__ {int hbmMask; int hbmColor; scalar_t__ yHotspot; scalar_t__ xHotspot; } ;
struct TYPE_8__ {int x; int y; int member_1; int member_0; } ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ ICONINFO ;
typedef scalar_t__ HWND ;
typedef int HICON ;
typedef int HDC ;
typedef TYPE_4__ CURSORINFO ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int ,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct dc_capture *VAR_2, HDC VAR_3, HWND VAR_4)
{
 HICON VAR_5;
 ICONINFO VAR_6;
 CURSORINFO *VAR_7 = &VAR_2->ci;
 POINT VAR_8 = {VAR_2->x, VAR_2->y};

 if (!(VAR_2->ci.flags & VAR_0))
  return;

 VAR_5 = FUNC_1(VAR_2->ci.hCursor);
 if (!VAR_5)
  return;

 if (FUNC_5(VAR_5, &VAR_6)) {
  POINT VAR_9;

  if (VAR_4)
   FUNC_0(VAR_4, &VAR_8);

  VAR_9.x = VAR_7->ptScreenPos.x - (int)VAR_6.xHotspot - VAR_8.x;
  VAR_9.y = VAR_7->ptScreenPos.y - (int)VAR_6.yHotspot - VAR_8.y;

  FUNC_4(VAR_3, VAR_9.x, VAR_9.y, VAR_5, 0, 0, 0, ((void*)0), VAR_1);

  FUNC_2(VAR_6.hbmColor);
  FUNC_2(VAR_6.hbmMask);
 }

 FUNC_3(VAR_5);
}
