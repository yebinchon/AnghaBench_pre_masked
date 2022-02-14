
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ ME_Run ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (TYPE_1__ const*,int ) ;

__attribute__((used)) static BOOL FUNC_2( const ME_Run *VAR_2 )
{
    WCHAR *VAR_3 = FUNC_1( VAR_2, 0 ), *VAR_4;
    int VAR_5;
    BOOL VAR_6 = VAR_0;

    for (VAR_5 = 0, VAR_4 = VAR_3; VAR_5 < VAR_2->len; VAR_5++, VAR_4++)
    {
        if (FUNC_0( *VAR_4 ))
        {
            if (VAR_6) return VAR_1;
        }
        else
            VAR_6 = VAR_1;
    }
    return VAR_0;
}
