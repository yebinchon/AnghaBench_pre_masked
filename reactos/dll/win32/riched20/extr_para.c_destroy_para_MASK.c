
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nWidth; int para_num; int text; scalar_t__ nRows; } ;
struct TYPE_12__ {TYPE_1__ para; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ member; } ;
struct TYPE_13__ {scalar_t__ nTotalWidth; int total_rows; } ;
typedef TYPE_3__ ME_TextEditor ;
typedef TYPE_4__ ME_DisplayItem ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;

void FUNC_6(ME_TextEditor *VAR_1, ME_DisplayItem *VAR_2)
{
    FUNC_2(VAR_2->type == VAR_0);

    if (VAR_2->member.para.nWidth == VAR_1->nTotalWidth)
    {
        VAR_2->member.para.nWidth = 0;
        VAR_1->nTotalWidth = FUNC_3(VAR_1);
    }
    VAR_1->total_rows -= VAR_2->member.para.nRows;
    FUNC_1(VAR_2->member.para.text);
    FUNC_4( &VAR_2->member.para.para_num );
    FUNC_5(VAR_1, VAR_2);
    FUNC_0(VAR_2);
}
