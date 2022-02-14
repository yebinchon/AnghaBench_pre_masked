
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* dwForwardNextHop; int dwForwardMetric1; void* dwForwardMask; void* dwForwardDest; } ;
typedef char TCHAR ;
typedef TYPE_1__* PMIB_IPFORWARDROW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_5( PMIB_IPFORWARDROW VAR_2,
              int VAR_3, TCHAR **VAR_4 ) {
    int VAR_5;




    if( VAR_3 > 1 )
    {




        VAR_2->dwForwardDest = FUNC_3( VAR_4[0] );

    }
    else
        return VAR_0;
    for( VAR_5 = 1; VAR_5 < VAR_3; VAR_5++ )
    {
        if( !FUNC_1( VAR_4[VAR_5], FUNC_0("mask") ) )
        {
            VAR_5++; if( VAR_5 >= VAR_3 ) return VAR_0;




            VAR_2->dwForwardMask = FUNC_3( VAR_4[VAR_5] );

        }
        else if( !FUNC_1( VAR_4[VAR_5], FUNC_0("metric") ) )
        {
            VAR_5++;
            if( VAR_5 >= VAR_3 )
                return VAR_0;
            VAR_2->dwForwardMetric1 = FUNC_2( VAR_4[VAR_5] );
        }
        else
        {




            VAR_2->dwForwardNextHop = FUNC_3( VAR_4[VAR_5] );

        }
    }

    return VAR_1;
}
