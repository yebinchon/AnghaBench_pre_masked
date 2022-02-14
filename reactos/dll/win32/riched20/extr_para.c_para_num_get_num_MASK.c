
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int wNumberingStart; } ;
struct TYPE_8__ {TYPE_4__ fmt; TYPE_3__* prev_para; } ;
struct TYPE_7__ {TYPE_2__ para; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ member; } ;
typedef TYPE_2__ ME_Paragraph ;
typedef TYPE_3__ ME_DisplayItem ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1( ME_Paragraph *VAR_1 )
{
    ME_DisplayItem *VAR_2;
    int VAR_3 = VAR_1->fmt.wNumberingStart;

    for (VAR_2 = VAR_1->prev_para; VAR_2->type == VAR_0;
         VAR_1 = &VAR_2->member.para, VAR_2 = VAR_2->member.para.prev_para, VAR_3++)
    {
        if (!FUNC_0( &VAR_2->member.para.fmt, &VAR_1->fmt )) break;
    }
    return VAR_3;
}
