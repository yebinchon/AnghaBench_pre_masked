
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int width; } ;
struct TYPE_6__ {int cx; } ;
struct TYPE_8__ {TYPE_2__* editor; TYPE_1__ dpi; } ;
struct TYPE_7__ {int nZoomNumerator; int nZoomDenominator; } ;
typedef TYPE_3__ ME_Context ;


 int FUNC_0 (int,int,int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static int FUNC_1(const ME_Context* VAR_1, int VAR_2)
{
  int VAR_3 = VAR_0[VAR_2].width;

  if (VAR_1->dpi.cx != 96)
    VAR_3 = FUNC_0(VAR_3, VAR_1->dpi.cx, 96);

  if (VAR_1->editor->nZoomNumerator != 0)
    VAR_3 = FUNC_0(VAR_3, VAR_1->editor->nZoomNumerator, VAR_1->editor->nZoomDenominator);

  return VAR_3;
}
