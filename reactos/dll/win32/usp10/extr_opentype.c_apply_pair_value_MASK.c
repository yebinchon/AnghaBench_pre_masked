
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef int POINT ;
typedef int INT ;
typedef TYPE_1__ GPOS_ValueRecord ;


 int FUNC_0 (int ,int const*,TYPE_1__*) ;
 int FUNC_1 (void const*,TYPE_1__*,int ,int,int *,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( const void *VAR_0, WORD VAR_1, WORD VAR_2, const WORD *VAR_3,
                              INT VAR_4, POINT *VAR_5, POINT *VAR_6 )
{
    GPOS_ValueRecord VAR_7 = {0,0,0,0,0,0,0,0};
    GPOS_ValueRecord VAR_8 = {0,0,0,0,0,0,0,0};
    INT VAR_9;

    VAR_9 = FUNC_0( VAR_1, VAR_3, &VAR_7 );
    FUNC_0( VAR_2, VAR_3 + VAR_9, &VAR_8 );

    if (VAR_1)
    {
        FUNC_1( VAR_0, &VAR_7, VAR_1, VAR_4, VAR_5, VAR_6 );
        FUNC_2( "Glyph 1 resulting cumulative offset is %s design units\n", FUNC_3(&VAR_5[0]) );
        FUNC_2( "Glyph 1 resulting cumulative advance is %s design units\n", FUNC_3(&VAR_6[0]) );
    }
    if (VAR_2)
    {
        FUNC_1( VAR_0, &VAR_8, VAR_2, VAR_4, VAR_5 + 1, VAR_6 + 1 );
        FUNC_2( "Glyph 2 resulting cumulative offset is %s design units\n", FUNC_3(&VAR_5[1]) );
        FUNC_2( "Glyph 2 resulting cumulative advance is %s design units\n", FUNC_3(&VAR_6[1]) );
    }
}
