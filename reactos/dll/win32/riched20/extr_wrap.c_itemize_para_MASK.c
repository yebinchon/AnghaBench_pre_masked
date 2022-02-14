
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_32__ {int uBidiLevel; } ;
struct TYPE_33__ {int fLogicalOrder; TYPE_3__ s; int fRTL; } ;
struct TYPE_38__ {int nCharOfs; int nFlags; int len; TYPE_4__ script_analysis; } ;
struct TYPE_37__ {int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_36__ {int iCharPos; TYPE_4__ a; } ;
struct TYPE_35__ {int uBidiLevel; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_30__ {int dwMask; int wEffects; } ;
struct TYPE_26__ {int nFlags; TYPE_11__* next_para; TYPE_2__* text; TYPE_1__ fmt; } ;
struct TYPE_34__ {TYPE_9__ run; TYPE_10__ para; } ;
struct TYPE_31__ {int nLen; int szData; } ;
struct TYPE_29__ {int editor; } ;
struct TYPE_28__ {int member_2; TYPE_11__* member_1; TYPE_11__* member_0; } ;
struct TYPE_27__ {scalar_t__ type; TYPE_5__ member; struct TYPE_27__* next; } ;
typedef TYPE_6__ SCRIPT_STATE ;
typedef TYPE_7__ SCRIPT_ITEM ;
typedef TYPE_8__ SCRIPT_CONTROL ;
typedef TYPE_9__ ME_Run ;
typedef TYPE_10__ ME_Paragraph ;
typedef TYPE_11__ ME_DisplayItem ;
typedef TYPE_12__ ME_Cursor ;
typedef TYPE_13__ ME_Context ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_12__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int,int,TYPE_8__*,TYPE_6__*,TYPE_7__*,int*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_9__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_7__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_7__*) ;
 TYPE_7__* FUNC_10 (TYPE_7__*,int) ;
 int VAR_10 ;

__attribute__((used)) static HRESULT FUNC_11( ME_Context *VAR_11, ME_DisplayItem *VAR_12 )
{
    ME_Paragraph *VAR_13 = &VAR_12->member.para;
    ME_Run *VAR_14;
    ME_DisplayItem *VAR_15;
    SCRIPT_ITEM VAR_16[16], *VAR_17 = VAR_16;
    int VAR_18 = FUNC_0( VAR_16 ), VAR_19, VAR_20;
    SCRIPT_CONTROL VAR_21 = { VAR_2, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1,
                               VAR_1, VAR_1, 0 };
    SCRIPT_STATE VAR_22 = { 0, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1, VAR_1, 0, 0 };
    HRESULT VAR_23;

    FUNC_6( VAR_12->type == VAR_8 );

    if (VAR_13->fmt.dwMask & VAR_6 && VAR_13->fmt.wEffects & VAR_5)
        VAR_22.uBidiLevel = 1;

    FUNC_4( "Base embedding level %d\n", VAR_22.uBidiLevel );

    while (1)
    {
        VAR_23 = FUNC_3( VAR_13->text->szData, VAR_13->text->nLen, VAR_18, &VAR_21,
                            &VAR_22, VAR_17, &VAR_19 );
        if (VAR_23 != VAR_0) break;
        if (VAR_18 > VAR_13->text->nLen + 1) break;
        VAR_18 *= 2;
        if (VAR_17 == VAR_16)
            VAR_17 = FUNC_8( VAR_18 * sizeof( *VAR_17 ) );
        else
            VAR_17 = FUNC_10( VAR_17, VAR_18 * sizeof( *VAR_17 ) );
        if (!VAR_17) break;
    }
    if (FUNC_1( VAR_23 )) goto end;

    if (FUNC_5( VAR_10 ))
    {
        FUNC_4( "got items:\n" );
        for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++)
        {
            FUNC_4( "\t%d - %d RTL %d bidi level %d\n", VAR_17[VAR_20].iCharPos, VAR_17[VAR_20+1].iCharPos - 1,
                   VAR_17[VAR_20].a.fRTL, VAR_17[VAR_20].a.s.uBidiLevel );
        }

        FUNC_4( "before splitting runs into ranges\n" );
        for (VAR_15 = VAR_12->next; VAR_15 != VAR_12->member.para.next_para; VAR_15 = VAR_15->next)
        {
            if (VAR_15->type != VAR_9) continue;
            FUNC_4( "\t%d: %s\n", VAR_15->member.run.nCharOfs, FUNC_7( &VAR_15->member.run ) );
        }
    }


    for (VAR_15 = VAR_12->next, VAR_20 = 0; VAR_15 != VAR_12->member.para.next_para; VAR_15 = VAR_15->next)
    {
        if (VAR_15->type != VAR_9) continue;
        VAR_14 = &VAR_15->member.run;

        if (VAR_14->nCharOfs == VAR_17[VAR_20+1].iCharPos) VAR_20++;

        VAR_17[VAR_20].a.fLogicalOrder = VAR_7;
        VAR_14->script_analysis = VAR_17[VAR_20].a;

        if (VAR_14->nFlags & VAR_4) break;

        if (VAR_14->nCharOfs + VAR_14->len > VAR_17[VAR_20+1].iCharPos)
        {
            ME_Cursor VAR_24 = {VAR_12, VAR_15, VAR_17[VAR_20+1].iCharPos - VAR_14->nCharOfs};
            FUNC_2( VAR_11->editor, &VAR_24 );
        }
    }

    if (FUNC_5( VAR_10 ))
    {
        FUNC_4( "after splitting into ranges\n" );
        for (VAR_15 = VAR_12->next; VAR_15 != VAR_12->member.para.next_para; VAR_15 = VAR_15->next)
        {
            if (VAR_15->type != VAR_9) continue;
            FUNC_4( "\t%d: %s\n", VAR_15->member.run.nCharOfs, FUNC_7( &VAR_15->member.run ) );
        }
    }

    VAR_13->nFlags |= VAR_3;

end:
    if (VAR_17 != VAR_16) FUNC_9( VAR_17 );
    return VAR_23;
}
