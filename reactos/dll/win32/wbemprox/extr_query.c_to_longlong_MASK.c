
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef scalar_t__ LONGLONG ;
typedef scalar_t__ INT_PTR ;
typedef int HRESULT ;
typedef int CIMTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;

HRESULT FUNC_10( VARIANT *VAR_10, LONGLONG *VAR_11, CIMTYPE *VAR_12 )
{
    if (!VAR_10)
    {
        *VAR_11 = 0;
        return VAR_7;
    }
    if (FUNC_7( VAR_10 ) & VAR_8)
    {
        *VAR_11 = (INT_PTR)FUNC_9( VAR_10, VAR_12 );
        if (!*VAR_11) return VAR_6;
        return VAR_7;
    }
    switch (FUNC_7( VAR_10 ))
    {
    case 134:
        *VAR_11 = FUNC_1( VAR_10 );
        *VAR_12 = VAR_0;
        break;
    case 133:
        *VAR_11 = (INT_PTR)FUNC_8( FUNC_2( VAR_10 ) );
        if (!*VAR_11) return VAR_6;
        *VAR_12 = VAR_3;
        break;
    case 132:
        *VAR_11 = FUNC_3( VAR_10 );
        *VAR_12 = VAR_1;
        break;
    case 129:
        *VAR_11 = FUNC_5( VAR_10 );
        *VAR_12 = VAR_4;
        break;
    case 131:
        *VAR_11 = FUNC_4( VAR_10 );
        *VAR_12 = VAR_2;
        break;
    case 128:
        *VAR_11 = FUNC_6( VAR_10 );
        *VAR_12 = VAR_5;
        break;
    case 130:
        *VAR_11 = 0;
        break;
    default:
        FUNC_0("unhandled type %u\n", FUNC_7( VAR_10 ));
        return VAR_9;
    }
    return VAR_7;
}
