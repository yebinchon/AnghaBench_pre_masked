
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wine_trailerW ;
struct TYPE_5__ {scalar_t__ build; scalar_t__ revision; int minor; int major; } ;
struct assembly_identity {char* language; TYPE_1__ version; int public_key; int name; int arch; } ;
typedef int lookup_fmtW ;
typedef int buffer ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {char* FileName; int FileNameLength; scalar_t__ NextEntryOffset; } ;
struct TYPE_6__ {scalar_t__ Information; } ;
typedef TYPE_2__ IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_3__ FILE_BOTH_DIR_INFORMATION ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,TYPE_2__*,char*,int,int ,int ,int *,int ) ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char const*,int) ;
 int VAR_3 ;
 int FUNC_9 (char*,char const*,int ,int ,int ,int ,int ,char const*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 (int ) ;
 char* VAR_4 ;

__attribute__((used)) static WCHAR *FUNC_13( HANDLE VAR_5, struct assembly_identity *VAR_6 )
{
    static const WCHAR VAR_7[] =
        {'%','s','_','%','s','_','%','s','_','%','u','.','%','u','.','*','.','*','_',
         '%','s','_','*','.','m','a','n','i','f','e','s','t',0};
    static const WCHAR VAR_8[] = {'d','e','a','d','b','e','e','f','.','m','a','n','i','f','e','s','t'};

    WCHAR *VAR_9, *VAR_10 = ((void*)0);
    UNICODE_STRING VAR_11;
    IO_STATUS_BLOCK VAR_12;
    const WCHAR *VAR_13 = VAR_6->language;
    unsigned int VAR_14 = 0, VAR_15;
    char VAR_16[8192];

    if (!(VAR_9 = FUNC_2( FUNC_4(), 0,
                                    (FUNC_12(VAR_6->arch) + FUNC_12(VAR_6->name)
                                     + FUNC_12(VAR_6->public_key) + 20) * sizeof(WCHAR)
                                    + sizeof(VAR_7) )))
        return ((void*)0);

    if (!VAR_13 || !FUNC_11( VAR_13, VAR_3 )) VAR_13 = VAR_4;
    FUNC_9( VAR_9, VAR_7, VAR_6->arch, VAR_6->name, VAR_6->public_key,
              VAR_6->version.major, VAR_6->version.minor, VAR_13 );
    FUNC_5( &VAR_11, VAR_9 );

    if (!FUNC_1( VAR_5, 0, ((void*)0), ((void*)0), &VAR_12, VAR_16, sizeof(VAR_16),
                               VAR_1, VAR_0, &VAR_11, VAR_2 ))
    {
        ULONG VAR_17 = VAR_6->version.build, VAR_18 = VAR_6->version.revision;
        FILE_BOTH_DIR_INFORMATION *VAR_19;
        WCHAR *VAR_20;
        ULONG VAR_21, VAR_22;

        VAR_15 = (ULONG)VAR_12.Information;

        for (;;)
        {
            if (VAR_14 >= VAR_15)
            {
                if (FUNC_1( VAR_5, 0, ((void*)0), ((void*)0), &VAR_12, VAR_16, sizeof(VAR_16),
                                          VAR_1, VAR_0, &VAR_11, VAR_0 ))
                    break;
                VAR_15 = (ULONG)VAR_12.Information;
                VAR_14 = 0;
            }
            VAR_19 = (FILE_BOTH_DIR_INFORMATION*)(VAR_16 + VAR_14);

            if (VAR_19->NextEntryOffset) VAR_14 += VAR_19->NextEntryOffset;
            else VAR_14 = VAR_15;

            VAR_20 = (WCHAR *)VAR_19->FileName + (FUNC_10(VAR_9, '*') - VAR_9);
            VAR_21 = FUNC_6(VAR_20);
            if (VAR_21 < VAR_17) continue;
            VAR_20 = FUNC_10(VAR_20, '.') + 1;
            VAR_22 = FUNC_6(VAR_20);
            if (VAR_21 == VAR_17 && VAR_22 < VAR_18) continue;
            VAR_20 = FUNC_10(VAR_20, '_') + 1;
            VAR_20 = FUNC_10(VAR_20, '_') + 1;
            if (VAR_19->FileNameLength - (VAR_20 - VAR_19->FileName) * sizeof(WCHAR) == sizeof(VAR_8) &&
                !FUNC_8( VAR_20, VAR_8, sizeof(VAR_8) / sizeof(WCHAR) ))
            {


                if (VAR_10) continue;
            }
            else
            {
                VAR_17 = VAR_21;
                VAR_18 = VAR_22;
            }
            VAR_6->version.build = VAR_21;
            VAR_6->version.revision = VAR_22;
            FUNC_3( FUNC_4(), 0, VAR_10 );
            if ((VAR_10 = FUNC_2( FUNC_4(), 0, VAR_19->FileNameLength + sizeof(WCHAR) )))
            {
                FUNC_7( VAR_10, VAR_19->FileName, VAR_19->FileNameLength );
                VAR_10[VAR_19->FileNameLength/sizeof(WCHAR)] = 0;
            }
        }
    }
    else FUNC_0("no matching file for %S\n", VAR_9);
    FUNC_3( FUNC_4(), 0, VAR_9 );
    return VAR_10;
}
