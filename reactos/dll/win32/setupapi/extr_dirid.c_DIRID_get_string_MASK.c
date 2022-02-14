
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {int id; int const* str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int * FUNC_1 (int) ;
 int const** VAR_7 ;
 int * FUNC_2 (int) ;
 int const* FUNC_3 () ;
 int VAR_8 ;
 int const** VAR_9 ;
 TYPE_1__* VAR_10 ;

const WCHAR *FUNC_4( int VAR_11 )
{
    int VAR_12;

    if (VAR_11 == VAR_0 || VAR_11 == VAR_1) VAR_11 = VAR_2;

    if (VAR_11 >= VAR_3)
    {
        for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
            if (VAR_10[VAR_12].id == VAR_11) return VAR_10[VAR_12].str;
        FUNC_0("user id %d not found\n", VAR_11 );
        return ((void*)0);
    }
    else if (VAR_11 >= VAR_6)
    {
        if (VAR_11 > VAR_4) return FUNC_3();
        VAR_11 -= VAR_6;
        if (!VAR_7[VAR_11]) VAR_7[VAR_11] = FUNC_2( VAR_11 );
        return VAR_7[VAR_11];
    }
    else
    {
        if (VAR_11 > VAR_5) return FUNC_3();
        if (!VAR_9[VAR_11]) VAR_9[VAR_11] = FUNC_1( VAR_11 );
        return VAR_9[VAR_11];
    }
}
