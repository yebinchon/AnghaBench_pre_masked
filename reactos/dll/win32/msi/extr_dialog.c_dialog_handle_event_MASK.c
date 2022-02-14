
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* package; } ;
typedef TYPE_1__ msi_dialog ;
struct TYPE_13__ {int progress_max; int progress_current; int attributes; int hwnd; int property; int progress_backwards; } ;
typedef TYPE_2__ msi_control ;
typedef int const WCHAR ;
struct TYPE_15__ {int action_progress_increment; } ;
struct TYPE_14__ {int Directory; } ;
typedef int MSIRECORD ;
typedef TYPE_3__ MSIFEATURE ;
typedef int const* LPWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int const* FUNC_3 (int *,int) ;
 int FUNC_4 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int const*) ;
 int FUNC_7 (char*,int,int,int) ;
 int VAR_3 ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (TYPE_6__*,int const*,int const**) ;
 int FUNC_10 (int *) ;
 int const* FUNC_11 (TYPE_1__*,int ,int) ;
 TYPE_2__* FUNC_12 (TYPE_1__*,int const*) ;
 int const* FUNC_13 (int const*,int const**) ;
 int FUNC_14 (TYPE_6__*,int ,int ) ;
 int FUNC_15 (int const*) ;
 TYPE_3__* FUNC_16 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_17 (int const*,int ) ;
 int const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_18( msi_dialog *VAR_10, const WCHAR *VAR_11,
                                 const WCHAR *VAR_12, MSIRECORD *VAR_13 )
{
    msi_control* VAR_14;

    VAR_14 = FUNC_12( VAR_10, VAR_11 );
    if (!VAR_14)
        return;
    if( !FUNC_17( VAR_12, VAR_9 ) )
    {
        const WCHAR *VAR_15, *VAR_16 = ((void*)0);
        WCHAR *VAR_17, *VAR_18 = ((void*)0);

        VAR_15 = FUNC_3( VAR_13 , 1 );
        VAR_17 = FUNC_13( VAR_15, &VAR_16 );
        FUNC_9( VAR_10->package, VAR_16, &VAR_18 );
        if (VAR_18) VAR_16 = VAR_18;
        else VAR_16 = VAR_5;

        FUNC_6( VAR_14->hwnd, VAR_16 );

        FUNC_15( VAR_17 );
        FUNC_15( VAR_18 );
        FUNC_10( ((void*)0) );
    }
    else if( !FUNC_17( VAR_12, VAR_6 ) )
    {
        DWORD VAR_19, VAR_20, VAR_21, VAR_22;

        VAR_19 = FUNC_2( VAR_13, 1 );
        VAR_20 = FUNC_2( VAR_13, 2 );
        VAR_21 = FUNC_2( VAR_13, 3 );

        FUNC_7("progress: func %u val1 %u val2 %u\n", VAR_19, VAR_20, VAR_21);

        VAR_22 = VAR_20 / 512;
        switch (VAR_19)
        {
        case 0:
            FUNC_5( VAR_14->hwnd, VAR_2, 0, FUNC_1(0,100) );
            if (VAR_21)
            {
                VAR_14->progress_max = VAR_22 ? VAR_22 : 100;
                VAR_14->progress_current = VAR_22;
                VAR_14->progress_backwards = VAR_3;
                FUNC_5( VAR_14->hwnd, VAR_1, 100, 0 );
            }
            else
            {
                VAR_14->progress_max = VAR_22 ? VAR_22 : 100;
                VAR_14->progress_current = 0;
                VAR_14->progress_backwards = VAR_0;
                FUNC_5( VAR_14->hwnd, VAR_1, 0, 0 );
            }
            break;
        case 1:
            if (VAR_21) VAR_10->package->action_progress_increment = VAR_20;
            else VAR_10->package->action_progress_increment = 0;
            break;
        case 2:
            if (VAR_14->progress_backwards)
            {
                if (VAR_22 >= VAR_14->progress_current) VAR_14->progress_current -= VAR_22;
                else VAR_14->progress_current = 0;
            }
            else
            {
                if (VAR_14->progress_current + VAR_22 < VAR_14->progress_max) VAR_14->progress_current += VAR_22;
                else VAR_14->progress_current = VAR_14->progress_max;
            }
            FUNC_5( VAR_14->hwnd, VAR_1, FUNC_4(100, VAR_14->progress_current, VAR_14->progress_max), 0 );
            break;
        case 3:
            VAR_14->progress_max += VAR_22;
            break;
        default:
            FUNC_0("Unknown progress message %u\n", VAR_19);
            break;
        }
    }
    else if ( !FUNC_17( VAR_12, VAR_7 ) )
    {
        MSIFEATURE *VAR_23 = FUNC_16( VAR_14 );
        if (VAR_23) FUNC_14( VAR_10->package, VAR_14->property, VAR_23->Directory );
    }
    else if ( !FUNC_17( VAR_12, VAR_8 ) )
    {
        BOOL VAR_24 = VAR_14->attributes & VAR_4;
        LPWSTR VAR_25 = FUNC_11( VAR_10, VAR_14->property, VAR_24 );
        if (!VAR_25) return;
        FUNC_6( VAR_14->hwnd, VAR_25 );
        FUNC_15(VAR_25);
    }
    else
    {
        FUNC_0("Attribute %s not being set\n", FUNC_8(VAR_12));
        return;
    }
}
