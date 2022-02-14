
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ resolution; scalar_t__ panx; scalar_t__ winw; scalar_t__ imgw; scalar_t__ pany; scalar_t__ winh; scalar_t__ imgh; int pageno; int pagecount; scalar_t__ iscopying; scalar_t__ ispanning; } ;
typedef TYPE_1__ pdfapp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(pdfapp_t *VAR_3, int VAR_4, int VAR_5)
{
 VAR_3->ispanning = VAR_3->iscopying = 0;
 if (VAR_4 & (1<<2))
 {

  if (VAR_5 > 0)
   VAR_3->resolution = FUNC_2(VAR_3->resolution);
  else
   VAR_3->resolution = FUNC_3(VAR_3->resolution);
  if (VAR_3->resolution > VAR_1)
   VAR_3->resolution = VAR_1;
  if (VAR_3->resolution < VAR_2)
   VAR_3->resolution = VAR_2;
  FUNC_1(VAR_3, 0, 1, 1, 0, 0);
 }
 else
 {


  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = 0;
  if (VAR_4 & (1<<0))
  {
   if (VAR_5 > 0 && VAR_3->panx >= 0)
    VAR_8 = -1;
   else if (VAR_5 < 0 && VAR_3->panx <= VAR_3->winw - VAR_3->imgw)
    VAR_8 = 1;
   else
    VAR_6 = 20 * VAR_5;
  }
  else
  {
   if (VAR_5 > 0 && VAR_3->pany >= 0)
    VAR_8 = -1;
   else if (VAR_5 < 0 && VAR_3->pany <= VAR_3->winh - VAR_3->imgh)
    VAR_8 = 1;
   else
    VAR_7 = 20 * VAR_5;
  }
  if (VAR_8 == 0)
   FUNC_0(VAR_3, VAR_3->panx + VAR_6, VAR_3->pany + VAR_7);
  else if (VAR_8 > 0 && VAR_3->pageno < VAR_3->pagecount)
  {
   VAR_3->pageno++;
   VAR_3->pany = 0;
   FUNC_1(VAR_3, 1, 1, 1, 0, 0);
  }
  else if (VAR_8 < 0 && VAR_3->pageno > 1)
  {
   VAR_3->pageno--;
   VAR_3->pany = VAR_0;
   FUNC_1(VAR_3, 1, 1, 1, 0, 0);
  }
 }
}
