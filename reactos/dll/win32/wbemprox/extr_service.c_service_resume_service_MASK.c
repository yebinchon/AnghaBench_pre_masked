
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IWbemClassObject ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,int *,int *,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

HRESULT FUNC_10( IWbemClassObject *VAR_8, IWbemClassObject *VAR_9, IWbemClassObject **VAR_10 )
{
    VARIANT VAR_11, VAR_12;
    IWbemClassObject *VAR_13, *VAR_14 = ((void*)0);
    HRESULT VAR_15;

    FUNC_5("%p, %p, %p\n", VAR_8, VAR_9, VAR_10);

    VAR_15 = FUNC_1( VAR_8, VAR_7, 0, &VAR_11, ((void*)0), ((void*)0) );
    if (VAR_15 != VAR_3) return VAR_15;

    VAR_15 = FUNC_9( VAR_4, VAR_5, VAR_1, &VAR_13 );
    if (VAR_15 != VAR_3)
    {
        FUNC_7( &VAR_11 );
        return VAR_15;
    }
    if (VAR_10)
    {
        VAR_15 = FUNC_4( VAR_13, 0, &VAR_14 );
        if (VAR_15 != VAR_3)
        {
            FUNC_7( &VAR_11 );
            FUNC_3( VAR_13 );
            return VAR_15;
        }
    }
    VAR_15 = FUNC_8( FUNC_6(&VAR_11), VAR_2, &VAR_12 );
    if (VAR_15 != VAR_3) goto done;

    if (VAR_14)
        VAR_15 = FUNC_2( VAR_14, VAR_6, 0, &VAR_12, VAR_0 );

done:
    FUNC_7( &VAR_11 );
    FUNC_3( VAR_13 );
    if (VAR_15 == VAR_3 && VAR_10)
    {
        *VAR_10 = VAR_14;
        FUNC_0( VAR_14 );
    }
    if (VAR_14) FUNC_3( VAR_14 );
    return VAR_15;
}
