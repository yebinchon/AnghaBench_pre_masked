
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* para; } ;
struct TYPE_9__ {TYPE_5__* next_para; } ;
struct TYPE_10__ {TYPE_4__ run; TYPE_2__ para; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ member; struct TYPE_12__* next; } ;
struct TYPE_8__ {int nFlags; } ;
typedef TYPE_4__ ME_Run ;
typedef TYPE_5__ ME_DisplayItem ;
typedef int ME_Context ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_4__*) ;

__attribute__((used)) static HRESULT FUNC_2( ME_Context *VAR_2, ME_DisplayItem *VAR_3 )
{
    ME_DisplayItem *VAR_4;
    ME_Run *VAR_5;
    HRESULT VAR_6;

    for (VAR_4 = VAR_3->next; VAR_4 != VAR_3->member.para.next_para; VAR_4 = VAR_4->next)
    {
        if (VAR_4->type != VAR_1) continue;
        VAR_5 = &VAR_4->member.run;

        VAR_6 = FUNC_1( VAR_2, VAR_5 );
        if (FUNC_0( VAR_6 ))
        {
            VAR_5->para->nFlags &= ~VAR_0;
            return VAR_6;
        }
    }
    return VAR_6;
}
