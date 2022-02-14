
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
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,int *,int *,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int ,int *) ;

HRESULT FUNC_10( IWbemClassObject *VAR_7, IWbemClassObject *VAR_8, IWbemClassObject **VAR_9 )
{
    VARIANT VAR_10, VAR_11;
    IWbemClassObject *VAR_12, *VAR_13 = ((void*)0);
    HRESULT VAR_14;

    FUNC_5("%p, %p, %p\n", VAR_7, VAR_8, VAR_9);

    VAR_14 = FUNC_1( VAR_7, VAR_6, 0, &VAR_10, ((void*)0), ((void*)0) );
    if (VAR_14 != VAR_2) return VAR_14;

    VAR_14 = FUNC_8( VAR_3, VAR_4, VAR_1, &VAR_12 );
    if (VAR_14 != VAR_2)
    {
        FUNC_7( &VAR_10 );
        return VAR_14;
    }
    if (VAR_9)
    {
        VAR_14 = FUNC_4( VAR_12, 0, &VAR_13 );
        if (VAR_14 != VAR_2)
        {
            FUNC_7( &VAR_10 );
            FUNC_3( VAR_12 );
            return VAR_14;
        }
    }
    VAR_14 = FUNC_9( FUNC_6(&VAR_10), &VAR_11 );
    if (VAR_14 != VAR_2) goto done;

    if (VAR_13)
        VAR_14 = FUNC_2( VAR_13, VAR_5, 0, &VAR_11, VAR_0 );

done:
    FUNC_7( &VAR_10 );
    FUNC_3( VAR_12 );
    if (VAR_14 == VAR_2 && VAR_9)
    {
        *VAR_9 = VAR_13;
        FUNC_0( VAR_13 );
    }
    if (VAR_13) FUNC_3( VAR_13 );
    return VAR_14;
}
