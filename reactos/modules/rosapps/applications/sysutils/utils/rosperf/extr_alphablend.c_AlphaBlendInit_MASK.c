
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int BitmapDc; int Bitmap; } ;
struct TYPE_5__ {scalar_t__ WndWidth; scalar_t__ WndHeight; int BackgroundDc; } ;
typedef TYPE_1__* PPERF_INFO ;
typedef TYPE_2__* PALPHABLEND_CONTEXT ;
typedef scalar_t__ INT ;
typedef int ALPHABLEND_CONTEXT ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int ) ;

unsigned
FUNC_7(void **VAR_0, PPERF_INFO VAR_1, unsigned VAR_2)
{
  PALPHABLEND_CONTEXT VAR_3 = FUNC_3(FUNC_2(), 0, sizeof (ALPHABLEND_CONTEXT));
  INT VAR_4, VAR_5;

  VAR_3->BitmapDc = FUNC_1(VAR_1->BackgroundDc);
  VAR_3->Bitmap = FUNC_0(VAR_1->BackgroundDc, VAR_1->WndWidth, VAR_1->WndHeight);
  FUNC_5(VAR_3->BitmapDc, VAR_3->Bitmap);

  for (VAR_5 = 0; VAR_5 < VAR_1->WndHeight; VAR_5++)
    {
      for (VAR_4 = 0; VAR_4 < VAR_1->WndWidth; VAR_4++)
        {
          FUNC_6(VAR_3->BitmapDc, VAR_4, VAR_5, FUNC_4(0xff, 0x00, 0x00));
        }
    }

  *VAR_0 = VAR_3;

  return VAR_2;
}
