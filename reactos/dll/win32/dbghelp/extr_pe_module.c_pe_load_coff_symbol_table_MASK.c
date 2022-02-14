
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct symt_compiland {int dummy; } ;
struct TYPE_14__ {void* Publics; void* SourceIndexed; void* TypeInfo; void* GlobalSymbols; void* LineNumbers; int SymType; scalar_t__ BaseOfImage; } ;
struct module {TYPE_10__ module; TYPE_3__** format_info; } ;
struct TYPE_20__ {int NumberOfSymbols; int PointerToSymbolTable; int NumberOfSections; } ;
struct TYPE_21__ {TYPE_4__ FileHeader; } ;
struct TYPE_22__ {TYPE_5__ ntheader; } ;
struct TYPE_23__ {TYPE_6__ pe; } ;
struct image_file_map {TYPE_7__ u; } ;
struct TYPE_24__ {int Long; scalar_t__ Short; } ;
struct TYPE_25__ {TYPE_8__ Name; int ShortName; } ;
struct TYPE_18__ {TYPE_1__* pe_info; } ;
struct TYPE_19__ {TYPE_2__ u; } ;
struct TYPE_17__ {struct image_file_map fmap; } ;
struct TYPE_16__ {scalar_t__ VirtualAddress; } ;
struct TYPE_15__ {scalar_t__ StorageClass; int SectionNumber; int NumberOfAuxSymbols; scalar_t__ Value; TYPE_9__ N; } ;
typedef TYPE_11__ IMAGE_SYMBOL ;
typedef TYPE_12__ IMAGE_SECTION_HEADER ;
typedef int HMODULE ;
typedef void* BOOL ;


 size_t VAR_0 ;
 void* VAR_1 ;
 TYPE_12__* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 char* FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (struct image_file_map*,int *) ;
 int FUNC_4 (struct image_file_map*) ;
 int FUNC_5 (struct module*,int *,char const*) ;
 struct symt_compiland* FUNC_6 (struct module*,int ,int ) ;
 int FUNC_7 (struct module*,struct symt_compiland*,char const*,void*,scalar_t__,int) ;

__attribute__((used)) static BOOL FUNC_8(struct module* VAR_8)
{
    struct image_file_map* VAR_9 = &VAR_8->format_info[VAR_0]->u.pe_info->fmap;
    const IMAGE_SYMBOL* VAR_10;
    int VAR_11, VAR_12, VAR_13;
    const char* VAR_14;
    char VAR_15[9];
    const char* VAR_16;
    const char* VAR_17 = ((void*)0);
    struct symt_compiland* VAR_18 = ((void*)0);
    const IMAGE_SECTION_HEADER* VAR_19;
    const char* VAR_20;

    VAR_12 = VAR_9->u.pe.ntheader.FileHeader.NumberOfSymbols;
    if (!VAR_9->u.pe.ntheader.FileHeader.PointerToSymbolTable || !VAR_12)
        return VAR_6;
    if (!(VAR_20 = FUNC_3(VAR_9, ((void*)0)))) return VAR_1;
    VAR_10 = (const IMAGE_SYMBOL*)((const char*)VAR_20 + VAR_9->u.pe.ntheader.FileHeader.PointerToSymbolTable);

    VAR_14 = (const char*)&VAR_10[VAR_12];
    VAR_19 = FUNC_0(FUNC_1((HMODULE)VAR_20));

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11+= VAR_13, VAR_10 += VAR_13)
    {
        if (VAR_10->StorageClass == VAR_3)
        {
            VAR_17 = (const char*)(VAR_10 + 1);
            VAR_18 = ((void*)0);
        }
        if (VAR_10->StorageClass == VAR_2 &&
            VAR_10->SectionNumber > 0 && VAR_10->SectionNumber <= VAR_9->u.pe.ntheader.FileHeader.NumberOfSections)
        {
            if (VAR_10->N.Name.Short)
            {
                VAR_16 = FUNC_2(VAR_15, VAR_10->N.ShortName, 8);
                VAR_15[8] = '\0';
            }
            else VAR_16 = VAR_14 + VAR_10->N.Name.Long;
            if (VAR_16[0] == '_') VAR_16++;

            if (!VAR_18 && VAR_17)
                VAR_18 = FUNC_6(VAR_8, 0,
                                               FUNC_5(VAR_8, ((void*)0), VAR_17));

            if (!(VAR_7 & VAR_4))
                FUNC_7(VAR_8, VAR_18, VAR_16, VAR_1,
                                VAR_8->module.BaseOfImage + VAR_19[VAR_10->SectionNumber - 1].VirtualAddress +
                                    VAR_10->Value,
                                1);
        }
        VAR_13 = VAR_10->NumberOfAuxSymbols + 1;
    }
    VAR_8->module.SymType = VAR_5;
    VAR_8->module.LineNumbers = VAR_1;
    VAR_8->module.GlobalSymbols = VAR_1;
    VAR_8->module.TypeInfo = VAR_1;
    VAR_8->module.SourceIndexed = VAR_1;
    VAR_8->module.Publics = VAR_6;
    FUNC_4(VAR_9);

    return VAR_6;
}
