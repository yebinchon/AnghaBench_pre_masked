
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int SourceConstantAlpha; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {int BitmapDc; } ;
struct TYPE_6__ {int WndHeight; int WndWidth; int BackgroundDc; } ;
typedef TYPE_1__* PPERF_INFO ;
typedef TYPE_2__* PALPHABLEND_CONTEXT ;
typedef TYPE_3__ BLENDFUNCTION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_3__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;

void
FUNC_4(void *VAR_2, PPERF_INFO VAR_3, unsigned VAR_4)
{
  PALPHABLEND_CONTEXT VAR_5 = VAR_2;
  unsigned VAR_6;
  BLENDFUNCTION VAR_7 = { VAR_0, 0, 0, 0 };

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
      VAR_7.SourceConstantAlpha = 255 * VAR_6 / VAR_4;



      if (!FUNC_0(VAR_3->BackgroundDc, 0, 0, VAR_3->WndWidth, VAR_3->WndHeight,
                      VAR_5->BitmapDc, 0, 0, VAR_3->WndWidth, VAR_3->WndHeight,
                      VAR_7))
        {
          FUNC_1("AlphaBlend failed (0x%lx)\n", FUNC_2());
        }
    }
}
