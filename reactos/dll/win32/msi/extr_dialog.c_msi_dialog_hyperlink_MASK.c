
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_4__ {int hwnd; int handler; int attributes; } ;
typedef TYPE_1__ msi_control ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_5__ {int mask; scalar_t__* szUrl; void* stateMask; void* state; scalar_t__ iLink; } ;
typedef int MSIRECORD ;
typedef int LPARAM ;
typedef TYPE_2__ LITEM ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_3 (int *,int *,int ,int) ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__*,int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static UINT FUNC_6( msi_dialog *VAR_13, MSIRECORD *VAR_14 )
{
    msi_control *VAR_15;
    DWORD VAR_16 = VAR_9 | VAR_11 | VAR_10;
    const WCHAR *VAR_17 = FUNC_1( VAR_14, 10 );
    int VAR_18 = FUNC_5( VAR_17 );
    LITEM VAR_19;

    VAR_15 = FUNC_3( VAR_13, VAR_14, VAR_8, VAR_16 );
    if (!VAR_15)
        return VAR_0;

    VAR_15->attributes = FUNC_0( VAR_14, 8 );
    VAR_15->handler = VAR_12;

    VAR_19.mask = VAR_2 | VAR_3 | VAR_4;
    VAR_19.iLink = 0;
    VAR_19.state = VAR_5;
    VAR_19.stateMask = VAR_5;
    if (VAR_18 < VAR_7) FUNC_4( VAR_19.szUrl, VAR_17 );
    else VAR_19.szUrl[0] = 0;

    FUNC_2( VAR_15->hwnd, VAR_6, 0, (LPARAM)&VAR_19 );

    return VAR_1;
}
