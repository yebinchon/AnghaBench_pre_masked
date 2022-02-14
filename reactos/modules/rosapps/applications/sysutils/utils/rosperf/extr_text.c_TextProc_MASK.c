
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int WndHeight; int Wnd; int * ForegroundDc; int * BackgroundDc; } ;
typedef TYPE_1__* PPERF_INFO ;
typedef int HFONT ;
typedef int * HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int,char*,int) ;
 int FUNC_4 (int ) ;

void
FUNC_5(void *VAR_2, PPERF_INFO VAR_3, unsigned VAR_4)
{
  unsigned VAR_5;
  int VAR_6;
  HDC VAR_7 = ((void*)0);
  HFONT VAR_8 = FUNC_0(VAR_0);

  for (VAR_5 = 0; VAR_5 < VAR_4; )
    {
      VAR_7 = (VAR_5 & 0x10000) ? VAR_3->BackgroundDc : VAR_3->ForegroundDc;
      FUNC_2(VAR_7, VAR_8);

      for (VAR_6 = 0; VAR_6 < VAR_3->WndHeight && VAR_5 < VAR_4; VAR_5++, VAR_6 += 15)
        {
  FUNC_3(VAR_7, 0, VAR_6, L"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz:?<>0123456789", 66);
        }
    FUNC_1(VAR_3->Wnd, ((void*)0), VAR_1);
    FUNC_4(VAR_3->Wnd);
    }
}
