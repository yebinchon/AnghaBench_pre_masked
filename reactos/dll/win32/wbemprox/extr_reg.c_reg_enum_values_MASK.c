
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IWbemClassObject ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,int *,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_12 (int ,int ,int *,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

HRESULT FUNC_13( IWbemClassObject *VAR_13, IWbemClassObject *VAR_14, IWbemClassObject **VAR_15 )
{
    VARIANT VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    IWbemClassObject *VAR_21, *VAR_22 = ((void*)0);
    HRESULT VAR_23;

    FUNC_5("%p, %p\n", VAR_14, VAR_15);

    VAR_23 = FUNC_1( VAR_14, VAR_8, 0, &VAR_16, ((void*)0), ((void*)0) );
    if (VAR_23 != VAR_5) return VAR_23;
    VAR_23 = FUNC_1( VAR_14, VAR_11, 0, &VAR_17, ((void*)0), ((void*)0) );
    if (VAR_23 != VAR_5) return VAR_23;

    VAR_23 = FUNC_11( VAR_6, VAR_7, VAR_4, &VAR_21 );
    if (VAR_23 != VAR_5)
    {
        FUNC_9( &VAR_17 );
        return VAR_23;
    }
    if (VAR_15)
    {
        VAR_23 = FUNC_4( VAR_21, 0, &VAR_22 );
        if (VAR_23 != VAR_5)
        {
            FUNC_9( &VAR_17 );
            FUNC_3( VAR_21 );
            return VAR_23;
        }
    }
    FUNC_10( &VAR_18 );
    FUNC_10( &VAR_19 );
    VAR_23 = FUNC_12( (HKEY)(INT_PTR)FUNC_7(&VAR_16), FUNC_6(&VAR_17), &VAR_18, &VAR_19, &VAR_20 );
    if (VAR_23 != VAR_5) goto done;
    if (VAR_22)
    {
        if (!FUNC_8( &VAR_20 ))
        {
            VAR_23 = FUNC_2( VAR_22, VAR_9, 0, &VAR_18, VAR_2|VAR_0 );
            if (VAR_23 != VAR_5) goto done;
            VAR_23 = FUNC_2( VAR_22, VAR_12, 0, &VAR_19, VAR_1|VAR_0 );
            if (VAR_23 != VAR_5) goto done;
        }
        VAR_23 = FUNC_2( VAR_22, VAR_10, 0, &VAR_20, VAR_3 );
    }

done:
    FUNC_9( &VAR_19 );
    FUNC_9( &VAR_18 );
    FUNC_9( &VAR_17 );
    FUNC_3( VAR_21 );
    if (VAR_23 == VAR_5 && VAR_15)
    {
        *VAR_15 = VAR_22;
        FUNC_0( VAR_22 );
    }
    if (VAR_22) FUNC_3( VAR_22 );
    return VAR_23;
}
