
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int anchorEnd; int anchorStart; } ;
struct TYPE_10__ {int fInterimChar; int ase; } ;
struct TYPE_12__ {TYPE_2__ style; int range; } ;
struct TYPE_9__ {int fInterimChar; int ase; } ;
struct TYPE_11__ {TYPE_1__ style; int acpEnd; int acpStart; } ;
typedef TYPE_3__ TS_SELECTION_ACP ;
typedef TYPE_4__ TF_SELECTION ;
typedef TYPE_5__ Range ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int ) ;

HRESULT FUNC_1(const TF_SELECTION *VAR_2, TS_SELECTION_ACP *VAR_3)
{
    Range *VAR_4;

    if (!VAR_2 || !VAR_3 || !VAR_2->range)
        return VAR_0;

    VAR_4 = FUNC_0(VAR_2->range);

    VAR_3->acpStart = VAR_4->anchorStart;
    VAR_3->acpEnd = VAR_4->anchorEnd;
    VAR_3->style.ase = VAR_2->style.ase;
    VAR_3->style.fInterimChar = VAR_2->style.fInterimChar;
    return VAR_1;
}
