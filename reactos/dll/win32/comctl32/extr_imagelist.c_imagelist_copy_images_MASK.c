
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int cy; int cx; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int cy; int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__* HIMAGELIST ;
typedef int HDC ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3( HIMAGELIST VAR_2, HDC VAR_3, HDC VAR_4,
                                          UINT VAR_5, UINT VAR_6, UINT VAR_7 )
{
    POINT VAR_8, VAR_9;
    SIZE VAR_10;
    UINT VAR_11;

    for ( VAR_11=0; VAR_11<VAR_1; VAR_11++ )
    {
        FUNC_2( VAR_2, VAR_5+VAR_11, &VAR_8 );
        FUNC_2( VAR_2, VAR_7+VAR_11, &VAR_9 );
        VAR_10.cx = VAR_2->cx;
        VAR_10.cy = VAR_2->cy * FUNC_1( VAR_6 - VAR_11 );

        FUNC_0( VAR_4, VAR_9.x, VAR_9.y, VAR_10.cx, VAR_10.cy,
                VAR_3, VAR_8.x, VAR_8.y, VAR_0 );
    }
}
