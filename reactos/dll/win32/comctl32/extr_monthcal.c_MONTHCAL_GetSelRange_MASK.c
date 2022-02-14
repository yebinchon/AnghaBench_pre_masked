
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int wDay; } ;
struct TYPE_7__ {int dwStyle; TYPE_1__ maxSel; TYPE_1__ minSel; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ MONTHCAL_INFO ;
typedef int LRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,...) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_1(const MONTHCAL_INFO *VAR_3, SYSTEMTIME *VAR_4)
{
  FUNC_0("%p\n", VAR_4);

  if(!VAR_4) return VAR_0;

  if(VAR_3->dwStyle & VAR_1)
  {
    VAR_4[1] = VAR_3->maxSel;
    VAR_4[0] = VAR_3->minSel;
    FUNC_0("[min,max]=[%d %d]\n", VAR_3->minSel.wDay, VAR_3->maxSel.wDay);
    return VAR_2;
  }

  return VAR_0;
}
