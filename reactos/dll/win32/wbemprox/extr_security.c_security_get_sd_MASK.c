
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int SECURITY_DESCRIPTOR ;
typedef int IWbemClassObject ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int **) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int *,int **) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,int ,int **) ;
 int FUNC_11 (int **,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,int ,int *,int *) ;
 int FUNC_13 (int *,int ,int *) ;

HRESULT FUNC_14( IWbemClassObject *VAR_9, IWbemClassObject *VAR_10, IWbemClassObject **VAR_11 )
{
    VARIANT VAR_12, VAR_13;
    IWbemClassObject *VAR_14, *VAR_15 = ((void*)0);
    HRESULT VAR_16, VAR_17;
    SECURITY_DESCRIPTOR *VAR_18;
    DWORD VAR_19;

    FUNC_7("%p, %p\n", VAR_10, VAR_11);

    VAR_16 = FUNC_10( VAR_5, VAR_6, VAR_3, &VAR_14 );

    if (FUNC_6(VAR_16))
    {
        VAR_16 = FUNC_5( VAR_14, 0, &VAR_15 );

        FUNC_4( VAR_14 );
    }

    if (FUNC_6(VAR_16))
    {
        VAR_17 = FUNC_11( &VAR_18, &VAR_19 );

        if (FUNC_6(VAR_17))
        {
            FUNC_9( &VAR_12 );

            VAR_16 = FUNC_13( VAR_18, VAR_19, &VAR_12 );

            if (FUNC_6(VAR_16))
                VAR_16 = FUNC_3( VAR_15, VAR_8, 0, &VAR_12, VAR_2|VAR_0 );

            FUNC_1( FUNC_0(), 0, VAR_18 );
            FUNC_8( &VAR_12 );
        }

        if (FUNC_6(VAR_16))
        {
            FUNC_12( VAR_4, VAR_17, ((void*)0), &VAR_13 );
            VAR_16 = FUNC_3( VAR_15, VAR_7, 0, &VAR_13, VAR_1 );
        }

        if (FUNC_6(VAR_16) && VAR_11)
        {
            *VAR_11 = VAR_15;
            FUNC_2( VAR_15 );
        }

        FUNC_4( VAR_15 );
    }

    return VAR_16;
}
