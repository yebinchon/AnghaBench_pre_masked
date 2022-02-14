
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cy; } ;
struct TYPE_7__ {TYPE_2__* editor; TYPE_1__ dpi; } ;
struct TYPE_6__ {int nZoomNumerator; int nZoomDenominator; } ;
typedef TYPE_3__ ME_Context ;



int FUNC_0(const ME_Context *VAR_0, int VAR_1)
{
  if (VAR_0->editor->nZoomNumerator == 0)
    return VAR_1 * VAR_0->dpi.cy / 1440;
  else
    return VAR_1 * VAR_0->dpi.cy * VAR_0->editor->nZoomNumerator / 1440 / VAR_0->editor->nZoomDenominator;
}
