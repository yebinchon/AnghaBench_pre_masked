
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pt ;
typedef int VOID ;
struct TYPE_17__ {int member_1; int member_0; } ;
struct TYPE_16__ {int member_0; int member_1; } ;
struct TYPE_15__ {int member_1; int member_0; } ;
struct TYPE_14__ {int member_0; int member_1; } ;
struct TYPE_13__ {int member_1; int member_0; } ;
struct TYPE_19__ {TYPE_5__ member_4; TYPE_4__ member_3; TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct TYPE_18__ {int wHour; int wMinute; int wSecond; } ;
typedef TYPE_6__ SYSTEMTIME ;
typedef TYPE_7__ POINT ;
typedef int INT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__**,TYPE_7__**,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static VOID
FUNC_5(HDC VAR_2, SYSTEMTIME * VAR_3, BOOL VAR_4, INT VAR_5)
{
     POINT VAR_6[3][5] = { {{0, (INT)-VAR_5/6}, {(INT)VAR_5/9, 0},
      {0, (INT)VAR_5/1.8}, {(INT)-VAR_5/9, 0}, {0, (INT)-VAR_5/6}},
     {{0, (INT)-VAR_5/4.5}, {(INT)VAR_5/18, 0}, {0, (INT) VAR_5*0.89},
      {(INT)-VAR_5/18, 0}, {0, (INT)-VAR_5/4.5}},
     {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, (INT) VAR_5*0.89}} };
     INT VAR_7, VAR_8[3];
     POINT VAR_9[3][5];


     FUNC_4(VAR_2, FUNC_1(VAR_0));
     FUNC_4(VAR_2, FUNC_1(VAR_1));

     VAR_8[0] = (VAR_3->wHour * 30) % 360 + VAR_3->wMinute / 2;
     VAR_8[1] = VAR_3->wMinute * 6;
     VAR_8[2] = VAR_3->wSecond * 6;

     FUNC_0(VAR_9, VAR_6, sizeof(VAR_6));

     for (VAR_7 = VAR_4 ? 0 : 2; VAR_7 < 3; VAR_7++)
     {
          FUNC_3(VAR_9[VAR_7], 5, VAR_8[VAR_7]);

          FUNC_2(VAR_2, VAR_9[VAR_7], 5);
     }
}
