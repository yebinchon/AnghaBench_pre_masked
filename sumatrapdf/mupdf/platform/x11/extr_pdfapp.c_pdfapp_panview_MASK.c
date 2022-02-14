
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ imgw; scalar_t__ winw; scalar_t__ imgh; scalar_t__ winh; int panx; int pany; } ;
typedef TYPE_1__ pdfapp_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(pdfapp_t *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_1 > 0)
  VAR_1 = 0;
 if (VAR_2 > 0)
  VAR_2 = 0;

 if (VAR_1 + VAR_0->imgw < VAR_0->winw)
  VAR_1 = VAR_0->winw - VAR_0->imgw;
 if (VAR_2 + VAR_0->imgh < VAR_0->winh)
  VAR_2 = VAR_0->winh - VAR_0->imgh;

 if (VAR_0->winw >= VAR_0->imgw)
  VAR_1 = (VAR_0->winw - VAR_0->imgw) / 2;
 if (VAR_0->winh >= VAR_0->imgh)
  VAR_2 = (VAR_0->winh - VAR_0->imgh) / 2;

 if (VAR_1 != VAR_0->panx || VAR_2 != VAR_0->pany)
  FUNC_0(VAR_0);

 VAR_0->panx = VAR_1;
 VAR_0->pany = VAR_2;
}
