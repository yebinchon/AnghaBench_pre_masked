
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ state; scalar_t__* TargetPath; } ;
struct TYPE_6__ {int need_reboot_at_end; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFILE ;
typedef scalar_t__* LPWSTR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__*,int ,int ,scalar_t__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__* FUNC_10 (int) ;
 int FUNC_11 (scalar_t__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__* FUNC_12 (scalar_t__*) ;
 int FUNC_13 (scalar_t__*) ;
 scalar_t__* FUNC_14 (scalar_t__*,char) ;
 int VAR_10 ;

__attribute__((used)) static UINT FUNC_15(MSIPACKAGE *VAR_11, MSIFILE *VAR_12, LPWSTR VAR_13)
{
    UINT VAR_14;

    FUNC_6("Copying %s to %s\n", FUNC_9(VAR_13), FUNC_9(VAR_12->TargetPath));

    VAR_14 = FUNC_8(VAR_12, VAR_13);
    if (VAR_14 == VAR_4)
        return VAR_14;

    if (VAR_14 == VAR_1 && VAR_12->state == VAR_9)
    {
        FUNC_6("overwriting existing file\n");
        return VAR_4;
    }
    else if (VAR_14 == VAR_0)
    {
        FUNC_5(VAR_12->TargetPath, VAR_7);

        VAR_14 = FUNC_8(VAR_12, VAR_13);
        FUNC_6("Overwriting existing file: %d\n", VAR_14);
    }
    if (VAR_14 == VAR_3 || VAR_14 == VAR_5)
    {
        WCHAR *VAR_15, *VAR_16, *VAR_17;
        DWORD VAR_18;

        FUNC_6("file in use, scheduling rename operation\n");

        if (!(VAR_16 = FUNC_12( VAR_12->TargetPath ))) return VAR_2;
        if ((VAR_17 = FUNC_14(VAR_16, '\\'))) *VAR_17 = 0;
        VAR_18 = FUNC_13( VAR_16 ) + 16;
        if (!(VAR_15 = FUNC_10(VAR_18 * sizeof(WCHAR))))
        {
            FUNC_11( VAR_16 );
            return VAR_2;
        }
        if (!FUNC_3( VAR_16, VAR_10, 0, VAR_15 )) VAR_15[0] = 0;
        FUNC_11( VAR_16 );

        if (FUNC_0(VAR_13, VAR_15, VAR_6) &&
            FUNC_4(VAR_12->TargetPath, ((void*)0), VAR_8) &&
            FUNC_4(VAR_15, VAR_12->TargetPath, VAR_8))
        {
            VAR_11->need_reboot_at_end = 1;
            VAR_14 = VAR_4;
        }
        else
        {
            VAR_14 = FUNC_2();
            FUNC_7("failed to schedule rename operation: %d)\n", VAR_14);
            FUNC_1( VAR_15 );
        }
        FUNC_11(VAR_15);
    }

    return VAR_14;
}
