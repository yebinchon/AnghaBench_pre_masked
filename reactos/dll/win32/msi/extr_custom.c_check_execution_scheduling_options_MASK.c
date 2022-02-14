
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int InWhatSequence; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_3(MSIPACKAGE *VAR_7, LPCWSTR VAR_8, UINT VAR_9)
{
    if ((VAR_9 & VAR_4) ==
            VAR_4)
    {
        if (!(VAR_7->InWhatSequence & VAR_2 &&
            VAR_7->InWhatSequence & VAR_1))
        {
            FUNC_0("Skipping action due to dbCustomActionTypeClientRepeat option.\n");
            return VAR_0;
        }
    }
    else if (VAR_9 & VAR_5)
    {
        if (VAR_7->InWhatSequence & VAR_2 &&
            VAR_7->InWhatSequence & VAR_1 )
        {
            FUNC_0("Skipping action due to msidbCustomActionTypeFirstSequence option.\n");
            return VAR_0;
        }
    }
    else if (VAR_9 & VAR_6)
    {
        if (FUNC_1(VAR_7, VAR_8))
        {
            FUNC_0("Skipping action due to msidbCustomActionTypeOncePerProcess option.\n");
            return VAR_0;
        }
        else
            FUNC_2(VAR_7, VAR_8);
    }

    return VAR_3;
}
