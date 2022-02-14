
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IWbemClassObject ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int *,int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

HRESULT FUNC_10( IWbemClassObject *VAR_9, IWbemClassObject *VAR_10, IWbemClassObject **VAR_11 )
{
    VARIANT VAR_12, VAR_13, VAR_14;
    IWbemClassObject *VAR_15, *VAR_16 = ((void*)0);
    HRESULT VAR_17;

    FUNC_4("%p, %p, %p\n", VAR_9, VAR_10, VAR_11);

    VAR_17 = FUNC_8( VAR_4, VAR_5, VAR_2, &VAR_15 );
    if (VAR_17 != VAR_3) return VAR_17;

    if (VAR_11)
    {
        VAR_17 = FUNC_3( VAR_15, 0, &VAR_16 );
        if (VAR_17 != VAR_3)
        {
            FUNC_2( VAR_15 );
            return VAR_17;
        }
    }
    FUNC_7( &VAR_12 );
    FUNC_7( &VAR_13 );
    VAR_17 = FUNC_9( &VAR_12, &VAR_13, &VAR_14 );
    if (VAR_17 != VAR_3) goto done;
    if (VAR_16)
    {
        if (!FUNC_5( &VAR_14 ))
        {
            VAR_17 = FUNC_1( VAR_16, VAR_8, 0, &VAR_12, VAR_0 );
            if (VAR_17 != VAR_3) goto done;
            VAR_17 = FUNC_1( VAR_16, VAR_6, 0, &VAR_13, VAR_0 );
            if (VAR_17 != VAR_3) goto done;
        }
        VAR_17 = FUNC_1( VAR_16, VAR_7, 0, &VAR_14, VAR_1 );
    }

done:
    FUNC_6( &VAR_12 );
    FUNC_6( &VAR_13 );
    FUNC_2( VAR_15 );
    if (VAR_17 == VAR_3 && VAR_11)
    {
        *VAR_11 = VAR_16;
        FUNC_0( VAR_16 );
    }
    if (VAR_16) FUNC_2( VAR_16 );
    return VAR_17;
}
