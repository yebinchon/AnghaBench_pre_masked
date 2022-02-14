
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_25__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_39__ {scalar_t__ path; } ;
struct TYPE_30__ {int nSize; int iType; } ;
struct TYPE_31__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_29__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_32__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_33__ {int nChars; int offString; int fOptions; int offDx; TYPE_1__ rcl; TYPE_2__ ptlReference; } ;
struct TYPE_38__ {scalar_t__ iGraphicsMode; double exScale; double eyScale; TYPE_23__ emr; TYPE_25__ rclBounds; TYPE_3__ emrtext; } ;
struct TYPE_37__ {int hdc; } ;
struct TYPE_36__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_35__ {scalar_t__ cx; int cy; } ;
struct TYPE_34__ {scalar_t__ tmDescent; } ;
struct TYPE_28__ {int textAlign; scalar_t__ GraphicsMode; } ;
typedef TYPE_4__ TEXTMETRICW ;
typedef TYPE_5__ SIZE ;
typedef TYPE_6__ RECT ;
typedef TYPE_7__* PHYSDEV ;
typedef scalar_t__ const* LPCWSTR ;
typedef scalar_t__ INT ;
typedef double FLOAT ;
typedef TYPE_8__ EMREXTTEXTOUTW ;
typedef TYPE_9__ EMFDRV_PDEVICE ;
typedef int DWORD ;
typedef TYPE_10__ DC ;
typedef int BOOL ;


 int FUNC_0 (TYPE_7__*,TYPE_25__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_23__*) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__ const*,int,TYPE_5__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (int ,TYPE_5__*) ;
 int FUNC_9 (int ,TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ,TYPE_8__*) ;



 int const VAR_5 ;

 int const VAR_6 ;
 int FUNC_12 (char*,int ,int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (scalar_t__ const*,int) ;
 TYPE_9__* FUNC_14 (TYPE_7__*) ;
 TYPE_10__* FUNC_15 (TYPE_7__*) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (char*,scalar_t__ const*,int) ;
 int FUNC_18 (TYPE_6__ const*) ;

BOOL FUNC_19( PHYSDEV VAR_9, INT VAR_10, INT VAR_11, UINT VAR_12, const RECT *VAR_13,
                        LPCWSTR VAR_14, UINT VAR_15, const INT *VAR_16 )
{
    EMFDRV_PDEVICE *VAR_17 = FUNC_14( VAR_9 );

    DC *VAR_18 = FUNC_15( VAR_9 );

    EMREXTTEXTOUTW *VAR_19;
    DWORD VAR_20;
    BOOL VAR_21;
    int VAR_22 = 0;
    int VAR_23 = 0;




    const UINT VAR_24 = VAR_18->textAlign;
    const INT VAR_25 = VAR_18->GraphicsMode;

    FLOAT VAR_26, VAR_27;

    VAR_20 = sizeof(*VAR_19) + ((VAR_15+1) & ~1) * sizeof(WCHAR) + VAR_15 * sizeof(INT);

    FUNC_12("%s %s count %d nSize = %d\n", FUNC_13(VAR_14, VAR_15),
           FUNC_18(VAR_13), VAR_15, VAR_20);
    VAR_19 = FUNC_10(FUNC_4(), VAR_2, VAR_20);

    if (VAR_25 == VAR_1)
    {
        const INT VAR_28 = FUNC_2( VAR_9->hdc, VAR_4 );
        const INT VAR_29 = FUNC_2( VAR_9->hdc, VAR_3 );
        const INT VAR_30 = FUNC_2( VAR_9->hdc, VAR_8 );
        const INT VAR_31 = FUNC_2( VAR_9->hdc, VAR_7 );
        SIZE VAR_32, VAR_33;

        FUNC_8( VAR_9->hdc, &VAR_33 );
        FUNC_9( VAR_9->hdc, &VAR_32 );
        VAR_26 = 100.0 * ((FLOAT)VAR_28 / (FLOAT)VAR_29) /
                          ((FLOAT)VAR_32.cx / (FLOAT)VAR_33.cx);
        VAR_27 = 100.0 * ((FLOAT)VAR_30 / (FLOAT)VAR_31) /
                          ((FLOAT)VAR_32.cy / (FLOAT)VAR_33.cy);
    }
    else
    {
        VAR_26 = 0.0;
        VAR_27 = 0.0;
    }

    VAR_19->emr.iType = VAR_0;
    VAR_19->emr.nSize = VAR_20;
    VAR_19->iGraphicsMode = VAR_25;
    VAR_19->exScale = VAR_26;
    VAR_19->eyScale = VAR_27;
    VAR_19->emrtext.ptlReference.x = VAR_10;
    VAR_19->emrtext.ptlReference.y = VAR_11;
    VAR_19->emrtext.nChars = VAR_15;
    VAR_19->emrtext.offString = sizeof(*VAR_19);
    FUNC_17((char*)VAR_19 + VAR_19->emrtext.offString, VAR_14, VAR_15 * sizeof(WCHAR));
    VAR_19->emrtext.fOptions = VAR_12;
    if(!VAR_13) {
        VAR_19->emrtext.rcl.left = VAR_19->emrtext.rcl.top = 0;
        VAR_19->emrtext.rcl.right = VAR_19->emrtext.rcl.bottom = -1;
    } else {
        VAR_19->emrtext.rcl.left = VAR_13->left;
        VAR_19->emrtext.rcl.top = VAR_13->top;
        VAR_19->emrtext.rcl.right = VAR_13->right;
        VAR_19->emrtext.rcl.bottom = VAR_13->bottom;
    }

    VAR_19->emrtext.offDx = VAR_19->emrtext.offString + ((VAR_15+1) & ~1) * sizeof(WCHAR);
    if(VAR_16) {
        UINT VAR_34;
        SIZE VAR_35;
        FUNC_17((char*)VAR_19 + VAR_19->emrtext.offDx, VAR_16, VAR_15 * sizeof(INT));
        for (VAR_34 = 0; VAR_34 < VAR_15; VAR_34++) {
            VAR_23 += VAR_16[VAR_34];
        }
        if (FUNC_6( VAR_9->hdc, VAR_14, VAR_15, &VAR_35 ))
            VAR_22 = VAR_35.cy;
    }
    else {
        UINT VAR_36;
        INT *VAR_37 = (INT *)((char*)VAR_19 + VAR_19->emrtext.offDx);
        SIZE VAR_38;
        for (VAR_36 = 0; VAR_36 < VAR_15; VAR_36++) {
            if (FUNC_6( VAR_9->hdc, VAR_14 + VAR_36, 1, &VAR_38 )) {
                VAR_37[VAR_36] = VAR_38.cx;
                VAR_23 += VAR_38.cx;
                VAR_22 = FUNC_16(VAR_22, VAR_38.cy);
            }
        }
    }

    if (VAR_17->path)
    {
        VAR_19->rclBounds.left = VAR_19->rclBounds.top = 0;
        VAR_19->rclBounds.right = VAR_19->rclBounds.bottom = -1;
        goto no_bounds;
    }


    switch (VAR_24 & (VAR_5 | 128 | 129)) {
    case 129: {
        VAR_19->rclBounds.left = VAR_10 - (VAR_23 / 2) - 1;
        VAR_19->rclBounds.right = VAR_10 + (VAR_23 / 2) + 1;
        break;
    }
    case 128: {
        VAR_19->rclBounds.left = VAR_10 - VAR_23 - 1;
        VAR_19->rclBounds.right = VAR_10;
        break;
    }
    default: {
        VAR_19->rclBounds.left = VAR_10;
        VAR_19->rclBounds.right = VAR_10 + VAR_23 + 1;
    }
    }

    switch (VAR_24 & (VAR_6 | 130 | 131)) {
    case 131: {
        TEXTMETRICW VAR_39;
        if (!FUNC_7( VAR_9->hdc, &VAR_39 ))
            VAR_39.tmDescent = 0;


        VAR_19->rclBounds.top = VAR_11 - VAR_22 - 1;
        VAR_19->rclBounds.bottom = VAR_11 + VAR_39.tmDescent + 1;
        break;
    }
    case 130: {
        VAR_19->rclBounds.top = VAR_11 - VAR_22 - 1;
        VAR_19->rclBounds.bottom = VAR_11;
        break;
    }
    default: {
        VAR_19->rclBounds.top = VAR_11;
        VAR_19->rclBounds.bottom = VAR_11 + VAR_22 + 1;
    }
    }
    FUNC_0( VAR_9, &VAR_19->rclBounds );

no_bounds:
    VAR_21 = FUNC_1( VAR_9, &VAR_19->emr );
    FUNC_11( FUNC_4(), 0, VAR_19 );
    return VAR_21;
}
