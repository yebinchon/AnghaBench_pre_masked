
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
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,int *,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

HRESULT FUNC_11( IWbemClassObject *VAR_8, IWbemClassObject *VAR_9, IWbemClassObject **VAR_10 )
{
    VARIANT VAR_11, VAR_12, VAR_13;
    IWbemClassObject *VAR_14, *VAR_15 = ((void*)0);
    HRESULT VAR_16;

    FUNC_5("%p, %p\n", VAR_9, VAR_10);

    VAR_16 = FUNC_1( VAR_9, VAR_5, 0, &VAR_11, ((void*)0), ((void*)0) );
    if (VAR_16 != VAR_2) return VAR_16;
    VAR_16 = FUNC_1( VAR_9, VAR_7, 0, &VAR_12, ((void*)0), ((void*)0) );
    if (VAR_16 != VAR_2) return VAR_16;

    VAR_16 = FUNC_10( VAR_3, VAR_4, VAR_1, &VAR_14 );
    if (VAR_16 != VAR_2)
    {
        FUNC_8( &VAR_12 );
        return VAR_16;
    }
    if (VAR_10)
    {
        VAR_16 = FUNC_4( VAR_14, 0, &VAR_15 );
        if (VAR_16 != VAR_2)
        {
            FUNC_8( &VAR_12 );
            FUNC_3( VAR_14 );
            return VAR_16;
        }
    }
    VAR_16 = FUNC_9( (HKEY)(INT_PTR)FUNC_7(&VAR_11), FUNC_6(&VAR_12), &VAR_13 );
    if (VAR_16 == VAR_2 && VAR_15)
        VAR_16 = FUNC_2( VAR_15, VAR_6, 0, &VAR_13, VAR_0 );

    FUNC_8( &VAR_12 );
    FUNC_3( VAR_14 );
    if (VAR_16 == VAR_2 && VAR_10)
    {
        *VAR_10 = VAR_15;
        FUNC_0( VAR_15 );
    }
    if (VAR_15) FUNC_3( VAR_15 );
    return VAR_16;
}
