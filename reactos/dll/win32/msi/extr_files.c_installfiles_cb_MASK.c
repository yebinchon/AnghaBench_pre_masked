
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Directory; } ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ Attributes; TYPE_2__* Component; int TargetPath; int disk_id; } ;
typedef scalar_t__ PVOID ;
typedef int MSIPACKAGE ;
typedef TYPE_1__ MSIFILE ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BOOL FUNC_6(MSIPACKAGE *VAR_7, LPCWSTR VAR_8, DWORD VAR_9,
                            LPWSTR *VAR_10, DWORD *VAR_11, PVOID VAR_12)
{
    MSIFILE *VAR_13 = *(MSIFILE **)VAR_12;

    if (VAR_9 == VAR_1)
    {
        if (!(VAR_13 = FUNC_2( VAR_7, VAR_13->disk_id, VAR_8 )))
        {
            FUNC_0("unknown file in cabinet (%s)\n", FUNC_1(VAR_8));
            return VAR_0;
        }
        if (VAR_13->state != VAR_5 && VAR_13->state != VAR_6)
            return VAR_0;

        if (!FUNC_4( VAR_13->Component ))
        {
            FUNC_3( VAR_7, VAR_13->Component->Directory );
        }
        *VAR_10 = FUNC_5( VAR_13->TargetPath );
        *VAR_11 = VAR_13->Attributes;
        *(MSIFILE **)VAR_12 = VAR_13;
    }
    else if (VAR_9 == VAR_2)
    {
        if (!FUNC_4( VAR_13->Component )) VAR_13->state = VAR_4;
    }

    return VAR_3;
}
