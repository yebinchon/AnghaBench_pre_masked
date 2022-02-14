
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int StandardBias; int DaylightBias; int DaylightDate; int StandardDate; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef int LONG ;
typedef int DWORD ;





 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static LONG FUNC_2(const TIME_ZONE_INFORMATION *VAR_0, DWORD VAR_1)
{
    switch (VAR_1)
    {
    case 130:
        if (FUNC_0(&VAR_0->StandardDate, &VAR_0->DaylightDate, sizeof(VAR_0->DaylightDate)) != 0)
            return VAR_0->DaylightBias;


    case 129:
        return VAR_0->StandardBias;

    default:
        FUNC_1("unknown time zone id %d\n", VAR_1);

    case 128:
        return 0;
    }
}
