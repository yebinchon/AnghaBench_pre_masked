
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
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,int *,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

HRESULT FUNC_13( IWbemClassObject *VAR_11, IWbemClassObject *VAR_12, IWbemClassObject **VAR_13 )
{
    VARIANT VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    IWbemClassObject *VAR_19, *VAR_20 = ((void*)0);
    HRESULT VAR_21;

    FUNC_5("%p, %p\n", VAR_12, VAR_13);

    VAR_21 = FUNC_1( VAR_12, VAR_6, 0, &VAR_14, ((void*)0), ((void*)0) );
    if (VAR_21 != VAR_3) return VAR_21;
    VAR_21 = FUNC_1( VAR_12, VAR_8, 0, &VAR_15, ((void*)0), ((void*)0) );
    if (VAR_21 != VAR_3) return VAR_21;
    VAR_21 = FUNC_1( VAR_12, VAR_10, 0, &VAR_16, ((void*)0), ((void*)0) );
    if (VAR_21 != VAR_3) return VAR_21;

    VAR_21 = FUNC_11( VAR_4, VAR_5, VAR_2, &VAR_19 );
    if (VAR_21 != VAR_3)
    {
        FUNC_9( &VAR_16 );
        FUNC_9( &VAR_15 );
        return VAR_21;
    }
    if (VAR_13)
    {
        VAR_21 = FUNC_4( VAR_19, 0, &VAR_20 );
        if (VAR_21 != VAR_3)
        {
            FUNC_9( &VAR_16 );
            FUNC_9( &VAR_15 );
            FUNC_3( VAR_19 );
            return VAR_21;
        }
    }
    FUNC_10( &VAR_17 );
    VAR_21 = FUNC_12( (HKEY)(INT_PTR)FUNC_7(&VAR_14), FUNC_6(&VAR_15), FUNC_6(&VAR_16), &VAR_17, &VAR_18 );
    if (VAR_21 != VAR_3) goto done;
    if (VAR_20)
    {
        if (!FUNC_8( &VAR_18 ))
        {
            VAR_21 = FUNC_2( VAR_20, VAR_9, 0, &VAR_17, VAR_0 );
            if (VAR_21 != VAR_3) goto done;
        }
        VAR_21 = FUNC_2( VAR_20, VAR_7, 0, &VAR_18, VAR_1 );
    }

done:
    FUNC_9( &VAR_16 );
    FUNC_9( &VAR_15 );
    FUNC_3( VAR_19 );
    if (VAR_21 == VAR_3 && VAR_13)
    {
        *VAR_13 = VAR_20;
        FUNC_0( VAR_20 );
    }
    if (VAR_20) FUNC_3( VAR_20 );
    return VAR_21;
}
