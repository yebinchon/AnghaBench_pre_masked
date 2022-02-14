
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wfd ;
struct TYPE_7__ {scalar_t__ len; int data; } ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
struct TYPE_8__ {int name; TYPE_1__ output; TYPE_4__ input; TYPE_4__ patch; } ;
typedef TYPE_2__ patch_data ;
struct TYPE_9__ {int member_0; scalar_t__ nFileSizeLow; } ;
typedef TYPE_3__ WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,TYPE_3__*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*,int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (char*,int ,scalar_t__,int ) ;
 int FUNC_10 (char*,TYPE_4__*) ;
 int FUNC_11 (char*,int ,scalar_t__) ;
 int FUNC_12 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_13 (char*,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_14(patch_data* VAR_7)
{
    char VAR_8[VAR_5], VAR_9[VAR_5], VAR_10[VAR_5];
    BOOL VAR_11;
    DWORD VAR_12;
    HANDLE VAR_13, VAR_14, VAR_15;
    WIN32_FIND_DATAA VAR_16 = { sizeof(VAR_16) };

    if (!FUNC_6(VAR_6, "MPO", 0, VAR_10))
    {
        FUNC_12(0, "GetTempFileNameA failed %lu, %s\n", FUNC_5(), VAR_7->name);
        return;
    }
    FUNC_2(VAR_10);

    if (!FUNC_10(VAR_8, &VAR_7->patch))
        return;
    if (!FUNC_10(VAR_9, &VAR_7->input))
    {
        FUNC_2(VAR_8);
        return;
    }




    VAR_13 = FUNC_13(VAR_8, VAR_3);
    VAR_14 = FUNC_13(VAR_9, VAR_3);
    VAR_11 = FUNC_8(VAR_13, VAR_14, 0);
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);

    FUNC_12(VAR_11, "TestApplyPatchToFileA failed %lu, %s\n", FUNC_5(), VAR_7->name);

    FUNC_9(VAR_8, VAR_7->patch.data, VAR_7->patch.len, VAR_7->name);
    FUNC_9(VAR_9, VAR_7->input.data, VAR_7->input.len, VAR_7->name);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);


    if (!FUNC_11(VAR_8, VAR_7->patch.data, VAR_7->patch.len -1))
        return;
    if (!FUNC_10(VAR_9, &VAR_7->input))
    {
        FUNC_2(VAR_8);
        return;
    }
    VAR_13 = FUNC_13(VAR_8, VAR_3);
    VAR_14 = FUNC_13(VAR_9, VAR_3);
    VAR_11 = FUNC_8(VAR_13, VAR_14, 0);
    VAR_12 = FUNC_5();
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    FUNC_12(!VAR_11, "TestApplyPatchToFileA succeeded, %s\n", VAR_7->name);
    FUNC_12(VAR_12 == VAR_1, "TestApplyPatchToFileA GetLastError %lx, %s\n", VAR_12, VAR_7->name);

    FUNC_9(VAR_8, VAR_7->patch.data, VAR_7->patch.len - 1, VAR_7->name);
    FUNC_9(VAR_9, VAR_7->input.data, VAR_7->input.len, VAR_7->name);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);

    if (!FUNC_10(VAR_8, &VAR_7->patch))
        return;
    if (!FUNC_11(VAR_9, VAR_7->input.data, VAR_7->input.len -1))
    {
        FUNC_2(VAR_8);
        return;
    }
    VAR_13 = FUNC_13(VAR_8, VAR_3);
    VAR_14 = FUNC_13(VAR_9, VAR_3);
    VAR_11 = FUNC_8(VAR_13, VAR_14, 0);
    VAR_12 = FUNC_5();
    FUNC_1(VAR_13);
    FUNC_1(VAR_14);
    FUNC_12(!VAR_11, "TestApplyPatchToFileA succeeded, %s\n", VAR_7->name);
    FUNC_12(VAR_12 == VAR_2, "TestApplyPatchToFileA GetLastError %lx, %s\n", VAR_12, VAR_7->name);

    FUNC_9(VAR_8, VAR_7->patch.data, VAR_7->patch.len, VAR_7->name);
    FUNC_9(VAR_9, VAR_7->input.data, VAR_7->input.len -1, VAR_7->name);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);

    if (!FUNC_10(VAR_8, &VAR_7->patch))
        return;
    if (!FUNC_10(VAR_9, &VAR_7->input))
    {
        FUNC_2(VAR_8);
        return;
    }
    VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_10, VAR_0);

    FUNC_12(VAR_11, "ApplyPatchToFileA failed %lu, %s\n", FUNC_5(), VAR_7->name);

    FUNC_9(VAR_8, VAR_7->patch.data, VAR_7->patch.len, VAR_7->name);
    FUNC_9(VAR_9, VAR_7->input.data, VAR_7->input.len, VAR_7->name);

    VAR_15 = FUNC_4(VAR_10, &VAR_16);
    FUNC_12(VAR_15 == VAR_4 || VAR_16.nFileSizeLow == 0, "Got a (non-empty) file, %s\n", VAR_7->name);
    if (VAR_15 != VAR_4)
        FUNC_3(VAR_15);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);
    FUNC_2(VAR_10);

    if (!FUNC_10(VAR_8, &VAR_7->patch))
        return;
    if (!FUNC_10(VAR_9, &VAR_7->input))
    {
        FUNC_2(VAR_8);
        return;
    }
    VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_10, 0);
    FUNC_12(VAR_11, "ApplyPatchToFileA failed %lu, %s\n", FUNC_5(), VAR_7->name);

    FUNC_9(VAR_8, VAR_7->patch.data, VAR_7->patch.len, VAR_7->name);
    FUNC_9(VAR_9, VAR_7->input.data, VAR_7->input.len, VAR_7->name);

    FUNC_9(VAR_10, VAR_7->output.data, VAR_7->output.len, VAR_7->name);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);
    FUNC_2(VAR_10);
}
