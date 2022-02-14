
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int * pFilter; } ;
typedef scalar_t__ (* SendPinFunc ) (int *,int ) ;
typedef TYPE_1__ PIN_INFO ;
typedef scalar_t__ PIN_DIRECTION ;
typedef int LPVOID ;
typedef int IPin ;
typedef int IEnumPins ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int **,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_13( IPin *VAR_5, SendPinFunc VAR_6, LPVOID VAR_7, SendPinFunc VAR_8 )
{
    PIN_INFO VAR_9;
    ULONG VAR_10 = 0;
    HRESULT VAR_11 = VAR_2;
    HRESULT VAR_12 = VAR_2;
    IEnumPins *VAR_13 = ((void*)0);
    BOOL VAR_14 = VAR_3;
    PIN_DIRECTION VAR_15;

    FUNC_8( VAR_5, &VAR_15 );

    VAR_11 = FUNC_9( VAR_5, ((void*)0), &VAR_10 );
    if (VAR_11 != VAR_0 && VAR_10)
        FUNC_1("Use QueryInternalConnections!\n");

    VAR_9.pFilter = ((void*)0);
    VAR_11 = FUNC_10( VAR_5, &VAR_9 );
    if (FUNC_0(VAR_11))
        goto out;

    VAR_11 = FUNC_2( VAR_9.pFilter, &VAR_13 );
    if (FUNC_0(VAR_11))
        goto out;

    VAR_11 = FUNC_6( VAR_13 );
    while (VAR_11 == VAR_2) {
        IPin *VAR_16 = ((void*)0);
        VAR_11 = FUNC_4( VAR_13, 1, &VAR_16, ((void*)0) );
        if (VAR_11 == VAR_4)
        {
            VAR_11 = FUNC_6( VAR_13 );
            continue;
        }
        if (VAR_16)
        {
            PIN_DIRECTION VAR_17;

            FUNC_8( VAR_16, &VAR_17 );
            if (VAR_17 != VAR_15)
            {
                IPin *VAR_18 = ((void*)0);

                VAR_14 = VAR_1;
                FUNC_7( VAR_16, &VAR_18 );
                if (VAR_18)
                {
                    HRESULT VAR_19;

                    VAR_19 = VAR_6( VAR_18, VAR_7 );
                    VAR_12 = FUNC_12( VAR_12, VAR_19 );
                    FUNC_11(VAR_18);
                }
            }
            FUNC_11( VAR_16 );
        }
        else
        {
            VAR_11 = VAR_2;
            break;
        }
    }

    if (!VAR_14)
        VAR_11 = VAR_12;
    else if (VAR_8) {
        HRESULT VAR_20;

        VAR_20 = VAR_8( VAR_5, VAR_7 );
        VAR_12 = FUNC_12( VAR_12, VAR_20 );
    }
    FUNC_5(VAR_13);

out:
    if (VAR_9.pFilter)
        FUNC_3( VAR_9.pFilter );
    return VAR_11;
}
