
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct process {int dummy; } ;
struct TYPE_3__ {int DbgUnmatched; } ;
struct module {TYPE_1__ module; } ;
struct TYPE_4__ {int NumberOfSections; int ExportedNamesSize; int DebugDirectorySize; } ;
typedef TYPE_2__ IMAGE_SEPARATE_DEBUG_HEADER ;
typedef int IMAGE_SECTION_HEADER ;
typedef int IMAGE_DEBUG_DIRECTORY ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int ,int ,int ,int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (struct process const*,struct module*,char const*,int *,int ,int ,char*,int *) ;
 int FUNC_9 (struct process const*,struct module*,int const*,int const*,int,int const*,int) ;

__attribute__((used)) static BOOL FUNC_10(const struct process* VAR_9, struct module* VAR_10,
                             const char* VAR_11, DWORD VAR_12)
{
    char VAR_13[VAR_6];
    HANDLE VAR_14 = VAR_5, VAR_15 = 0;
    const BYTE* VAR_16 = ((void*)0);
    BOOL VAR_17 = VAR_0;

    FUNC_5("Processing DBG file %s\n", FUNC_7(VAR_11));

    if (FUNC_8(VAR_9, VAR_10, VAR_11, ((void*)0), VAR_12, 0, VAR_13, &VAR_10->module.DbgUnmatched) &&
        (VAR_14 = FUNC_1(VAR_13, VAR_4, VAR_3, ((void*)0),
                             VAR_7, VAR_1, ((void*)0))) != VAR_5 &&
        ((VAR_15 = FUNC_2(VAR_14, ((void*)0), VAR_8, 0, 0, ((void*)0))) != 0) &&
        ((VAR_16 = FUNC_4(VAR_15, VAR_2, 0, 0, 0)) != ((void*)0)))
    {
        const IMAGE_SEPARATE_DEBUG_HEADER* VAR_18;
        const IMAGE_SECTION_HEADER* VAR_19;
        const IMAGE_DEBUG_DIRECTORY* VAR_20;

        VAR_18 = (const IMAGE_SEPARATE_DEBUG_HEADER*)VAR_16;

        VAR_19 = (const IMAGE_SECTION_HEADER*)(VAR_18 + 1);

        VAR_20 = (const IMAGE_DEBUG_DIRECTORY*)
            (VAR_16 + sizeof(*VAR_18) +
             VAR_18->NumberOfSections * sizeof(IMAGE_SECTION_HEADER) +
             VAR_18->ExportedNamesSize);

        VAR_17 = FUNC_9(VAR_9, VAR_10, VAR_16, VAR_19,
                                      VAR_18->NumberOfSections, VAR_20,
                                      VAR_18->DebugDirectorySize / sizeof(*VAR_20));
    }
    else
        FUNC_3("Couldn't find .DBG file %s (%s)\n", FUNC_7(VAR_11), FUNC_7(VAR_13));

    if (VAR_16) FUNC_6(VAR_16);
    if (VAR_15) FUNC_0(VAR_15);
    if (VAR_14 != VAR_5) FUNC_0(VAR_14);
    return VAR_17;
}
