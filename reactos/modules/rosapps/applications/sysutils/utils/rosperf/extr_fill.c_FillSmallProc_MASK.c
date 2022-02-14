
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ WndWidth; scalar_t__ WndHeight; int ForegroundDc; int BackgroundDc; } ;
typedef TYPE_1__* PPERF_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_1(void *VAR_2, PPERF_INFO VAR_3, unsigned VAR_4)
{

  unsigned VAR_5;
  int VAR_6, VAR_7;

  VAR_6 = 0;
  VAR_7 = 0;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
      FUNC_0((VAR_5 & 0x10000) ? VAR_3->BackgroundDc : VAR_3->ForegroundDc, VAR_6, VAR_7,
             16, 16, VAR_0);
      VAR_6 += 16 + 1;
      if (VAR_3->WndWidth < VAR_6 + 16)
        {
          VAR_6 = 0;
          VAR_7 += 16 + 1;
          if (VAR_3->WndHeight < VAR_7 + 16)
            {
              VAR_7 = 0;
            }
        }
    }
}
