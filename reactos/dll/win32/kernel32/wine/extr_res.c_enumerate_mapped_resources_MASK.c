
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource_data {int dummy; } ;
struct TYPE_9__ {int Size; int CodePage; int OffsetToData; } ;
struct TYPE_8__ {scalar_t__ NumberOfNamedEntries; scalar_t__ NumberOfIdEntries; int MinorVersion; int MajorVersion; } ;
struct TYPE_7__ {int OffsetToDirectory; int OffsetToData; int Id; } ;
typedef int QUEUEDUPDATES ;
typedef int LPWSTR ;
typedef int LANGID ;
typedef TYPE_1__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef TYPE_2__ IMAGE_RESOURCE_DIRECTORY ;
typedef TYPE_3__ IMAGE_RESOURCE_DATA_ENTRY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct resource_data*) ;
 int FUNC_2 (char*,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 void* FUNC_3 (void*,scalar_t__,int ,int ) ;
 struct resource_data* FUNC_4 (int ,int ,void*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_1__ const*) ;
 int FUNC_7 (int *,int ,int ,int ,struct resource_data*,int ) ;

__attribute__((used)) static BOOL FUNC_8( QUEUEDUPDATES *VAR_2,
                             void *VAR_3, DWORD VAR_4,
                             const IMAGE_RESOURCE_DIRECTORY *VAR_5 )
{
    const IMAGE_RESOURCE_DIRECTORY *VAR_6, *VAR_7;
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_8, *VAR_9, *VAR_10;
    const IMAGE_RESOURCE_DATA_ENTRY *VAR_11;
    DWORD VAR_12, VAR_13, VAR_14;

    FUNC_2("version (%d.%d) %d named %d id entries\n",
          VAR_5->MajorVersion, VAR_5->MinorVersion, VAR_5->NumberOfNamedEntries, VAR_5->NumberOfIdEntries);

    for (VAR_12 = 0; VAR_12< VAR_5->NumberOfNamedEntries + VAR_5->NumberOfIdEntries; VAR_12++)
    {
        LPWSTR VAR_15;

        VAR_8 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY*)(VAR_5 + 1) + VAR_12;

        VAR_15 = FUNC_6( VAR_5, VAR_8 );

        VAR_6 = (const IMAGE_RESOURCE_DIRECTORY *)((const char *)VAR_5 + VAR_8->OffsetToDirectory);
        for (VAR_13 = 0; VAR_13 < VAR_6->NumberOfNamedEntries + VAR_6->NumberOfIdEntries; VAR_13++)
        {
            LPWSTR VAR_16;

            VAR_9 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY*)(VAR_6 + 1) + VAR_13;

            VAR_16 = FUNC_6( VAR_5, VAR_9 );

            VAR_7 = (const IMAGE_RESOURCE_DIRECTORY *)((const char *)VAR_5 + VAR_9->OffsetToDirectory);
            for (VAR_14 = 0; VAR_14 < VAR_7->NumberOfNamedEntries + VAR_7->NumberOfIdEntries; VAR_14++)
            {
                LANGID VAR_17;
                void *VAR_18;
                struct resource_data *VAR_19;

                VAR_10 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY*)(VAR_7 + 1) + VAR_14;

                VAR_17 = VAR_10->Id;

                VAR_11 = (const IMAGE_RESOURCE_DATA_ENTRY *)((const char *)VAR_5 + VAR_10->OffsetToData);

                VAR_18 = FUNC_3( VAR_3, VAR_4, VAR_11->OffsetToData, VAR_11->Size );

                VAR_19 = FUNC_4( VAR_17, VAR_11->CodePage, VAR_18, VAR_11->Size, VAR_0 );
                if (VAR_19)
                {
                    if (!FUNC_7( VAR_2, VAR_15, VAR_16, VAR_17, VAR_19, VAR_0 ))
                        FUNC_1( FUNC_0(), 0, VAR_19 );
                }
            }
            FUNC_5( VAR_16 );
        }
        FUNC_5( VAR_15 );
    }

    return VAR_1;
}
