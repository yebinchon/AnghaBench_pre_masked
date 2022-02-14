
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int member_1; int member_0; } ;
struct TYPE_8__ {scalar_t__ WndHeight; scalar_t__ WndWidth; int ForegroundDc; } ;
struct TYPE_7__ {int Red; int Green; int Blue; scalar_t__ Alpha; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ TRIVERTEX ;
typedef TYPE_2__* PPERF_INFO ;
typedef int HDC ;
typedef TYPE_3__ GRADIENT_RECT ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,TYPE_3__*,int,int ) ;

void
FUNC_1(void *VAR_1, PPERF_INFO VAR_2, unsigned VAR_3)
{
  unsigned VAR_4;
  HDC VAR_5;
  TRIVERTEX VAR_6[2];
  static GRADIENT_RECT VAR_7 = {0, 1};

  VAR_5 = VAR_2->ForegroundDc;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      VAR_6[0].x = 0;
      VAR_6[0].y = 0;
      VAR_6[0].Red = 0xff00;
      VAR_6[0].Green = 0xff00 - 0xff00 * VAR_4 / VAR_3;
      VAR_6[0].Blue = 0xff00 * VAR_4 / VAR_3;
      VAR_6[0].Alpha = 0;

      VAR_6[1].x = VAR_2->WndWidth;
      VAR_6[1].y = VAR_2->WndHeight;
      VAR_6[1].Red = 0xff00 - 0xff00 * VAR_4 / VAR_3;
      VAR_6[1].Green = 0xff00 * VAR_4 / VAR_3;
      VAR_6[1].Blue = 0xff00;
      VAR_6[1].Alpha = 0;

      FUNC_0(VAR_5, VAR_6, 2, &VAR_7, 1, VAR_0);
    }
}
