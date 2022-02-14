
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*,int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int*,int,int*,int *) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static BOOL FUNC_4( HANDLE VAR_4, DWORD VAR_5,
                                           DWORD *VAR_6, DWORD *VAR_7 )
{
    DWORD VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    BOOL VAR_13;

    VAR_13 = FUNC_0( VAR_4, &VAR_12, &VAR_8 );
    if( !VAR_13 )
        return VAR_0;

    VAR_10 = 0;

    while( 1 )
    {

        VAR_9 = FUNC_2( VAR_4, VAR_12 + VAR_10,
                                 ((void*)0), VAR_1 );
        if( VAR_9 == VAR_2 )
            return VAR_0;
        VAR_13 = FUNC_1( VAR_4, &VAR_11, sizeof VAR_11, &VAR_9, ((void*)0) );
        if( !VAR_13 )
            return VAR_0;
        if( VAR_9 != sizeof VAR_11 )
            return VAR_0;


        if( VAR_11 < sizeof VAR_11 )
            return VAR_0;
        if( VAR_11 > (VAR_8-VAR_10) )
            return VAR_0;
        if( !VAR_5-- )
            break;


        VAR_10 += VAR_11;


        if( VAR_11 % 8 )
            VAR_10 += 8 - (VAR_11 % 8);

        if( VAR_10 >= VAR_8 )
            return VAR_0;
    }

    *VAR_6 = VAR_12 + VAR_10;
    *VAR_7 = VAR_11;

    FUNC_3("len = %x addr = %x\n", VAR_11, VAR_12 + VAR_10);

    return VAR_3;
}
