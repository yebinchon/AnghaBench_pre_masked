
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0( const POINT *VAR_2, UINT VAR_3 )
{
    UINT VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        if (((VAR_2[VAR_4].x + 0x8000) & ~0xffff) || ((VAR_2[VAR_4].y + 0x8000) & ~0xffff))
            return VAR_0;
    return VAR_1;
}
