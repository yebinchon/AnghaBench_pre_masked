
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int x; } ;
struct TYPE_11__ {int uBidiLevel; } ;
struct TYPE_12__ {TYPE_1__ s; } ;
struct TYPE_16__ {int nFlags; int nWidth; TYPE_5__ pt; TYPE_4__* para; TYPE_2__ script_analysis; } ;
struct TYPE_17__ {TYPE_6__ run; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_7__ member; struct TYPE_18__* next; struct TYPE_18__* prev; } ;
struct TYPE_13__ {int x; } ;
struct TYPE_14__ {TYPE_3__ pt; } ;
typedef TYPE_8__ ME_DisplayItem ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int*,int*) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ VAR_3 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5( ME_DisplayItem *VAR_4, const ME_DisplayItem *VAR_5 )
{
    ME_DisplayItem *VAR_6;
    int VAR_7, VAR_8 = 0;
    int VAR_9[16 * 5];
    int *VAR_10 = VAR_9, *VAR_11, *VAR_12, *VAR_13;
    BYTE *VAR_14;
    BOOL VAR_15 = VAR_0;

    for (VAR_6 = VAR_5->prev; VAR_6 != VAR_4->prev; VAR_6 = VAR_6->prev)
    {
        if (VAR_6->type == VAR_3)
        {
            if (!VAR_15) VAR_15 = !(VAR_6->member.run.nFlags & (VAR_2 | VAR_1));
            if (VAR_15) VAR_8++;
        }
    }

    FUNC_2("%d runs\n", VAR_8);
    if (!VAR_8) return;

    if (VAR_8 > FUNC_0( VAR_9 ) / 5)
        VAR_10 = FUNC_3( VAR_8 * sizeof(int) * 5 );

    VAR_11 = VAR_10 + VAR_8;
    VAR_12 = VAR_10 + 2 * VAR_8;
    VAR_13 = VAR_10 + 3 * VAR_8;
    VAR_14 = (BYTE*)(VAR_10 + 4 * VAR_8);

    for (VAR_7 = 0, VAR_6 = VAR_4; VAR_7 < VAR_8; VAR_6 = VAR_6->next)
    {
        if (VAR_6->type == VAR_3)
        {
            VAR_14[VAR_7] = VAR_6->member.run.script_analysis.s.uBidiLevel;
            VAR_12[VAR_7] = VAR_6->member.run.nWidth;
            FUNC_2( "%d: level %d width %d\n", VAR_7, VAR_14[VAR_7], VAR_12[VAR_7] );
            VAR_7++;
        }
    }

    FUNC_1( VAR_8, VAR_14, VAR_10, VAR_11 );

    VAR_13[0] = VAR_4->member.run.para->pt.x;
    for (VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
        VAR_13[VAR_7] = VAR_13[VAR_7 - 1] + VAR_12[ VAR_10[ VAR_7 - 1 ] ];

    for (VAR_7 = 0, VAR_6 = VAR_4; VAR_7 < VAR_8; VAR_6 = VAR_6->next)
    {
        if (VAR_6->type == VAR_3)
        {
            VAR_6->member.run.pt.x = VAR_13[ VAR_11[ VAR_7 ] ];
            FUNC_2( "%d: x = %d\n", VAR_7, VAR_6->member.run.pt.x );
            VAR_7++;
        }
    }

    if (VAR_10 != VAR_9) FUNC_4( VAR_10 );
}
