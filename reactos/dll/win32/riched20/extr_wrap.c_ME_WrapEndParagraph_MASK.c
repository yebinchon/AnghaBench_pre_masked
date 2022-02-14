
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int dwMask; int wEffects; } ;
struct TYPE_14__ {TYPE_6__ fmt; } ;
struct TYPE_15__ {TYPE_2__ para; } ;
struct TYPE_20__ {TYPE_3__ member; } ;
struct TYPE_13__ {int y; } ;
struct TYPE_19__ {TYPE_1__ pt; TYPE_5__* context; scalar_t__ pRowStart; TYPE_8__* pPara; } ;
struct TYPE_17__ {TYPE_4__* editor; } ;
struct TYPE_16__ {scalar_t__ bEmulateVersion10; } ;
typedef TYPE_6__ PARAFORMAT2 ;
typedef TYPE_7__ ME_WrapContext ;
typedef TYPE_8__ ME_DisplayItem ;


 int FUNC_0 (TYPE_7__*,TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(ME_WrapContext *VAR_2, ME_DisplayItem *VAR_3)
{
  ME_DisplayItem *VAR_4 = VAR_2->pPara;
  PARAFORMAT2 *VAR_5 = &VAR_4->member.para.fmt;
  if (VAR_2->pRowStart)
    FUNC_0(VAR_2, VAR_3);
  if (VAR_2->context->editor->bEmulateVersion10 &&
      VAR_5->dwMask & VAR_1 && VAR_5->wEffects & VAR_0)
  {


    VAR_2->pt.y--;
  }
}
