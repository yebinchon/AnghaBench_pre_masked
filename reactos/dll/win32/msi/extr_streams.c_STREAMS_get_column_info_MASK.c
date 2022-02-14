
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_2__ {scalar_t__ num_cols; } ;
typedef TYPE_1__ MSISTREAMSVIEW ;
typedef int LPCWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,scalar_t__,int *,scalar_t__*,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_10, UINT VAR_11, LPCWSTR *VAR_12,
                                     UINT *VAR_13, BOOL *VAR_14, LPCWSTR *VAR_15 )
{
    MSISTREAMSVIEW *VAR_16 = (MSISTREAMSVIEW *)VAR_10;

    FUNC_0("(%p, %d, %p, %p, %p, %p)\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

    if (!VAR_11 || VAR_11 > VAR_16->num_cols)
        return VAR_0;

    switch (VAR_11)
    {
    case 1:
        if (VAR_12) *VAR_12 = VAR_8;
        if (VAR_13) *VAR_13 = VAR_5 | VAR_6 | VAR_3;
        break;

    case 2:
        if (VAR_12) *VAR_12 = VAR_7;
        if (VAR_13) *VAR_13 = VAR_5 | VAR_6 | VAR_4;
        break;
    }
    if (VAR_15) *VAR_15 = VAR_9;
    if (VAR_14) *VAR_14 = VAR_2;
    return VAR_1;
}
