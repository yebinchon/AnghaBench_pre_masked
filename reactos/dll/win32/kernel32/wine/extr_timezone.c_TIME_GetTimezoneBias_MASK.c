
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ StandardBias; scalar_t__ DaylightBias; int Bias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef int LONG ;
typedef int FILETIME ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL
FUNC_1(const TIME_ZONE_INFORMATION *VAR_5, FILETIME *VAR_6, BOOL VAR_7, LONG *VAR_8)
{
    LONG VAR_9 = VAR_5->Bias;
    DWORD VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7);

    if( VAR_10 == VAR_2)
        return VAR_0;
    if (VAR_10 == VAR_1)
        VAR_9 += VAR_5->DaylightBias;
    else if (VAR_10 == VAR_3)
        VAR_9 += VAR_5->StandardBias;
    *VAR_8 = VAR_9;
    return VAR_4;
}
