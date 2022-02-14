
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int WndHeight; int WndWidth; int ForegroundDc; int BackgroundDc; } ;
typedef TYPE_1__* PPERF_INFO ;
typedef int HDC ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int *) ;

void
FUNC_2(void *VAR_0, PPERF_INFO VAR_1, unsigned VAR_2)
{
  unsigned VAR_3;
  int VAR_4;
  HDC VAR_5;

  for (VAR_3 = 0; VAR_3 < VAR_2; )
    {
      VAR_5 = (VAR_3 & 0x1000) ? VAR_1->BackgroundDc : VAR_1->ForegroundDc;

      for (VAR_4 = 2; VAR_4 < VAR_1->WndHeight && VAR_3 < VAR_2; VAR_3++, VAR_4 += 2)
        {
          FUNC_1(VAR_5, 0, 0, ((void*)0));
          FUNC_0(VAR_5, VAR_1->WndWidth, VAR_4);
        }

      for (VAR_4 = VAR_1->WndWidth - 2; 0 <= VAR_4 && VAR_3 < VAR_2; VAR_3++, VAR_4 -= 2)
        {
          FUNC_1(VAR_5, VAR_1->WndWidth, 0, ((void*)0));
          FUNC_0(VAR_5, VAR_4, VAR_1->WndHeight);
        }

      for (VAR_4 = VAR_1->WndHeight - 2; 0 <= VAR_4 && VAR_3 < VAR_2; VAR_3++, VAR_4 -= 2)
        {
          FUNC_1(VAR_5, VAR_1->WndWidth, VAR_1->WndHeight, ((void*)0));
          FUNC_0(VAR_5, 0, VAR_4);
        }

      for (VAR_4 = 2; VAR_4 < VAR_1->WndWidth && VAR_3 < VAR_2; VAR_3++, VAR_4 += 2)
        {
          FUNC_1(VAR_5, 0, VAR_1->WndHeight, ((void*)0));
          FUNC_0(VAR_5, VAR_4, 0);
        }
    }
}
