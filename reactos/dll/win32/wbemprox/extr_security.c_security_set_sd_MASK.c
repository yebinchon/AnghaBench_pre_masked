
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int IWbemClassObject ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int **) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ,int ,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int *,int *) ;

HRESULT FUNC_8( IWbemClassObject *VAR_7, IWbemClassObject *VAR_8, IWbemClassObject **VAR_9 )
{
    VARIANT VAR_10;
    IWbemClassObject *VAR_11, *VAR_12 = ((void*)0);
    HRESULT VAR_13;

    FUNC_0("stub\n");

    VAR_13 = FUNC_6( VAR_4, VAR_5, VAR_1, &VAR_11 );

    if (FUNC_5(VAR_13))
    {
        VAR_13 = FUNC_4( VAR_11, 0, &VAR_12 );

        FUNC_3( VAR_11 );
    }

    if (FUNC_5(VAR_13))
    {
        FUNC_7( VAR_3, VAR_2, ((void*)0), &VAR_10 );
        VAR_13 = FUNC_2( VAR_12, VAR_6, 0, &VAR_10, VAR_0 );

        if (FUNC_5(VAR_13) && VAR_9)
        {
            *VAR_9 = VAR_12;
            FUNC_1( VAR_12 );
        }

        FUNC_3( VAR_12 );
    }

    return VAR_13;
}
