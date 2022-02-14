
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct process {int dummy; } ;
struct TYPE_19__ {int ModuleName; } ;
struct module {TYPE_4__ module; TYPE_3__** format_info; } ;
struct image_file_map {int dummy; } ;
struct TYPE_24__ {int PointerToRawData; scalar_t__ Type; } ;
struct TYPE_23__ {scalar_t__ DataType; scalar_t__ Data; } ;
struct TYPE_21__ {int Characteristics; int SizeOfOptionalHeader; int NumberOfSections; int TimeDateStamp; } ;
struct TYPE_20__ {TYPE_10__* DataDirectory; } ;
struct TYPE_22__ {TYPE_6__ FileHeader; TYPE_5__ OptionalHeader; } ;
struct TYPE_17__ {TYPE_1__* pe_info; } ;
struct TYPE_18__ {TYPE_2__ u; } ;
struct TYPE_16__ {struct image_file_map fmap; } ;
struct TYPE_15__ {int Size; int VirtualAddress; } ;
typedef int IMAGE_SECTION_HEADER ;
typedef TYPE_7__ IMAGE_NT_HEADERS ;
typedef TYPE_8__ IMAGE_DEBUG_MISC ;
typedef TYPE_9__ IMAGE_DEBUG_DIRECTORY ;
typedef TYPE_10__ IMAGE_DATA_DIRECTORY ;
typedef int BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__* FUNC_1 (TYPE_7__*,void*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct process const*,struct module*,char const*,int ) ;
 int FUNC_4 (struct process const*,struct module*,void*,int const*,int ,TYPE_9__ const*,int) ;
 void* FUNC_5 (struct image_file_map*,TYPE_7__**) ;
 int FUNC_6 (struct image_file_map*) ;

__attribute__((used)) static BOOL FUNC_7(const struct process* VAR_6, struct module* VAR_7)
{
    struct image_file_map* VAR_8 = &VAR_7->format_info[VAR_0]->u.pe_info->fmap;
    BOOL VAR_9 = VAR_1;
    const IMAGE_DATA_DIRECTORY* VAR_10;
    const IMAGE_DEBUG_DIRECTORY*VAR_11 = ((void*)0);
    int VAR_12;
    void* VAR_13;
    IMAGE_NT_HEADERS* VAR_14;

    if (!(VAR_13 = FUNC_5(VAR_8, &VAR_14))) return VAR_1;

    VAR_10 = VAR_14->OptionalHeader.DataDirectory + VAR_4;
    VAR_12 = VAR_10->Size / sizeof(IMAGE_DEBUG_DIRECTORY);
    if (!VAR_12) goto done;

    VAR_11 = FUNC_1(VAR_14, VAR_13, VAR_10->VirtualAddress, ((void*)0));
    if (VAR_14->FileHeader.Characteristics & VAR_5)
    {

        const IMAGE_DEBUG_MISC* VAR_15 = (const IMAGE_DEBUG_MISC*)
            ((const char*)VAR_13 + VAR_11->PointerToRawData);

        if (VAR_12 != 1 || VAR_11->Type != VAR_3 ||
            VAR_15->DataType != VAR_2)
        {
            FUNC_0("-Debug info stripped, but no .DBG file in module %s\n",
                FUNC_2(VAR_7->module.ModuleName));
        }
        else
        {
            VAR_9 = FUNC_3(VAR_6, VAR_7, (const char*)VAR_15->Data, VAR_14->FileHeader.TimeDateStamp);
        }
    }
    else
    {
        const IMAGE_SECTION_HEADER *VAR_16 = (const IMAGE_SECTION_HEADER*)((const char*)&VAR_14->OptionalHeader + VAR_14->FileHeader.SizeOfOptionalHeader);

        VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_13, VAR_16,
                                      VAR_14->FileHeader.NumberOfSections, VAR_11, VAR_12);
    }
done:
    FUNC_6(VAR_8);
    return VAR_9;
}
