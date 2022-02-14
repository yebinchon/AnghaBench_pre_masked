
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pagecount; int pageno; int histlen; int* hist; scalar_t__ issearching; } ;
typedef TYPE_1__ pdfapp_t ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(pdfapp_t *VAR_0, int VAR_1)
{
 VAR_0->issearching = 0;
 FUNC_2(VAR_0);

 if (VAR_1 < 1)
  VAR_1 = 1;
 if (VAR_1 > VAR_0->pagecount)
  VAR_1 = VAR_0->pagecount;

 if (VAR_1 == VAR_0->pageno)
  return;

 if (VAR_0->histlen + 1 == 256)
 {
  FUNC_0(VAR_0->hist, VAR_0->hist + 1, sizeof(int) * 255);
  VAR_0->histlen --;
 }
 VAR_0->hist[VAR_0->histlen++] = VAR_0->pageno;
 VAR_0->pageno = VAR_1;
 FUNC_1(VAR_0, 1, 1, 1, 0, 0);
}
