
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pszTemplate; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
struct TYPE_8__ {size_t nPages; TYPE_1__* proppage; } ;
struct TYPE_6__ {int hpage; } ;
typedef TYPE_3__ PropSheetInfo ;
typedef scalar_t__ LRESULT ;
typedef scalar_t__ LPVOID ;
typedef TYPE_4__* LPCPROPSHEETPAGEA ;
typedef size_t INT ;



__attribute__((used)) static INT FUNC_0(const PropSheetInfo * VAR_0, LRESULT VAR_1)
{
   INT VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->nPages; VAR_2++)
   {
      LPCPROPSHEETPAGEA VAR_3 = (LPCPROPSHEETPAGEA)VAR_0->proppage[VAR_2].hpage;


      if (VAR_3->u.pszTemplate == (LPVOID)VAR_1)
         break;
   }

   return VAR_2;
}
