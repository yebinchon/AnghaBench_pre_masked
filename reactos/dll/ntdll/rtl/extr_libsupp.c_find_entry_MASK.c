
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
struct TYPE_5__ {int CurrentLocale; } ;
struct TYPE_4__ {int Language; scalar_t__ Name; scalar_t__ Type; } ;
typedef int PVOID ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef TYPE_1__ LDR_RESOURCE_INFO ;
typedef int LCID ;
typedef void IMAGE_RESOURCE_DIRECTORY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int ,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* FUNC_8 (void*,int ,void*,int) ;
 void* FUNC_9 (void*,int ,void*,int) ;
 void* FUNC_10 (void*,void*,int) ;
 int FUNC_11 (int *,int,int ) ;

NTSTATUS FUNC_12( PVOID VAR_14, LDR_RESOURCE_INFO *VAR_15,
                     ULONG VAR_16, void **VAR_17, int VAR_18 )
{
    ULONG VAR_19;
    void *VAR_20;
    IMAGE_RESOURCE_DIRECTORY *VAR_21;
    USHORT VAR_22[9];
    int VAR_23, VAR_24 = 0;
    LCID VAR_25, VAR_26;

    VAR_20 = FUNC_6( VAR_14, VAR_13, VAR_1, &VAR_19 );
    if (!VAR_20) return VAR_5;
    if (VAR_19 < sizeof(*VAR_21)) return VAR_5;
    VAR_21 = VAR_20;

    if (!VAR_16--) goto done;
    if (!(*VAR_17 = FUNC_9( VAR_21, (LPCWSTR)VAR_15->Type, VAR_20, VAR_18 || VAR_16 )))
        return VAR_8;
    if (!VAR_16--) return VAR_9;

    VAR_21 = *VAR_17;
    if (!(*VAR_17 = FUNC_9( VAR_21, (LPCWSTR)VAR_15->Name, VAR_20, VAR_18 || VAR_16 )))
        return VAR_7;
    if (!VAR_16--) return VAR_9;
    if (VAR_16) return VAR_4;


    VAR_24 = FUNC_11( VAR_22, VAR_24, VAR_15->Language );


    VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_1( FUNC_5(VAR_15->Language), VAR_11 ) );


    VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_1( VAR_3, VAR_11 ) );


    if (FUNC_5(VAR_15->Language) == VAR_3)
    {

        if (FUNC_7(VAR_15->Language) != VAR_12)
        {

            VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_0(FUNC_3()->CurrentLocale) );

            if (FUNC_2(FUNC_4(VAR_13, &VAR_25)))
            {

                VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_0(VAR_25) );


                VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_1( FUNC_5(VAR_25), VAR_11 ) );
            }
        }



        if (FUNC_2(FUNC_4(VAR_0, &VAR_26)))
        {

            VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_0( VAR_26 ) );


            VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_1( FUNC_5(VAR_26), VAR_11 ) );
        }


        VAR_24 = FUNC_11( VAR_22, VAR_24, FUNC_1( VAR_2, VAR_10 ) );
    }

    VAR_21 = *VAR_17;
    for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++)
        if ((*VAR_17 = FUNC_8( VAR_21, VAR_22[VAR_23], VAR_20, VAR_18 ))) return VAR_9;


    if (FUNC_5(VAR_15->Language) == VAR_3)
    {
        if ((*VAR_17 = FUNC_10( VAR_21, VAR_20, VAR_18 ))) return VAR_9;
    }
    return VAR_6;

done:
    *VAR_17 = VAR_21;
    return VAR_9;
}
