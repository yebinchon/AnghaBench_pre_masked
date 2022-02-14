
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_21__ {int x; int y; } ;
struct TYPE_23__ {int style; TYPE_6__* text; TYPE_5__ pt; } ;
struct TYPE_20__ {int y; } ;
struct TYPE_18__ {scalar_t__ wNumbering; } ;
struct TYPE_24__ {TYPE_7__ para_num; TYPE_4__ pt; TYPE_2__ fmt; } ;
struct TYPE_17__ {TYPE_8__ para; } ;
struct TYPE_25__ {TYPE_1__ member; } ;
struct TYPE_22__ {int nLen; int szData; } ;
struct TYPE_19__ {int x; int y; } ;
struct TYPE_16__ {int hDC; TYPE_3__ pt; } ;
typedef TYPE_8__ ME_Paragraph ;
typedef TYPE_9__ ME_DisplayItem ;
typedef TYPE_10__ ME_Context ;
typedef int HFONT ;
typedef int COLORREF ;


 int FUNC_0 (int ,int,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_10__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_10__*,int ,int ) ;

__attribute__((used)) static void FUNC_5( ME_Context *VAR_1, ME_DisplayItem *VAR_2 )
{
    ME_Paragraph *VAR_3 = &VAR_2->member.para;
    HFONT VAR_4;
    int VAR_5, VAR_6;
    COLORREF VAR_7;

    if (VAR_3->fmt.wNumbering)
    {
        VAR_4 = FUNC_1( VAR_1, VAR_3->para_num.style );
        VAR_7 = FUNC_3( VAR_1->hDC, FUNC_4( VAR_1, VAR_3->para_num.style, VAR_0 ) );

        VAR_5 = VAR_1->pt.x + VAR_3->para_num.pt.x;
        VAR_6 = VAR_1->pt.y + VAR_3->pt.y + VAR_3->para_num.pt.y;

        FUNC_0( VAR_1->hDC, VAR_5, VAR_6, 0, ((void*)0), VAR_3->para_num.text->szData, VAR_3->para_num.text->nLen, ((void*)0) );

        FUNC_3( VAR_1->hDC, VAR_7 );
        FUNC_2( VAR_1, VAR_3->para_num.style, VAR_4 );
    }
}
