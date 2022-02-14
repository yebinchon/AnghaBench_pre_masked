
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int WndHeight; int WndWidth; int ForegroundDc; int BackgroundDc; } ;
typedef TYPE_1__* PPERF_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(void *VAR_1, PPERF_INFO VAR_2, unsigned VAR_3)
{
  unsigned VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      FUNC_0((VAR_4 & 0x100) ? VAR_2->BackgroundDc : VAR_2->ForegroundDc, 0, 0,
             VAR_2->WndWidth, VAR_2->WndHeight, VAR_0);
    }
}
