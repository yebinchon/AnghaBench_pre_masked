
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int editor; } ;
struct TYPE_9__ {int run; } ;
struct TYPE_13__ {TYPE_1__ member; } ;
struct TYPE_12__ {int nFirstMargin; int nLeftMargin; scalar_t__ nRow; TYPE_3__* pPara; TYPE_6__* context; } ;
struct TYPE_10__ {int para; } ;
struct TYPE_11__ {TYPE_2__ member; } ;
typedef TYPE_4__ ME_WrapContext ;
typedef TYPE_5__ ME_DisplayItem ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_6__*,int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(ME_WrapContext *VAR_0, ME_DisplayItem *VAR_1)
{


  FUNC_0(VAR_0->context->editor, &VAR_1->member.run);

  FUNC_1(VAR_0->context, &VAR_0->pPara->member.para,
                  VAR_0->nRow ? VAR_0->nLeftMargin : VAR_0->nFirstMargin, &VAR_1->member.run);
}
