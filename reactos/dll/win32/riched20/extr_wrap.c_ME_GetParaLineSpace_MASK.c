
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* editor; } ;
struct TYPE_8__ {int dwMask; int bLineSpacingRule; int dyLineSpacing; } ;
struct TYPE_10__ {TYPE_1__ fmt; } ;
struct TYPE_9__ {int nZoomNumerator; int nZoomDenominator; } ;
typedef TYPE_3__ ME_Paragraph ;
typedef TYPE_4__ ME_Context ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(ME_Context* VAR_1, ME_Paragraph* VAR_2)
{
  int VAR_3 = 0, VAR_4 = 0;
  if (!(VAR_2->fmt.dwMask & VAR_0)) return 0;



  switch (VAR_2->fmt.bLineSpacingRule)
  {
  case 0: VAR_3 = VAR_4; break;
  case 1: VAR_3 = (3 * VAR_4) / 2; break;
  case 2: VAR_3 = 2 * VAR_4; break;
  case 3: VAR_3 = FUNC_1(VAR_1, VAR_2->fmt.dyLineSpacing); if (VAR_3 < VAR_4) VAR_3 = VAR_4; break;
  case 4: VAR_3 = FUNC_1(VAR_1, VAR_2->fmt.dyLineSpacing); break;
  case 5: VAR_3 = VAR_2->fmt.dyLineSpacing / 20; break;
  default: FUNC_0("Unsupported spacing rule value %d\n", VAR_2->fmt.bLineSpacingRule);
  }
  if (VAR_1->editor->nZoomNumerator == 0)
    return VAR_3;
  else
    return VAR_3 * VAR_1->editor->nZoomNumerator / VAR_1->editor->nZoomDenominator;
}
