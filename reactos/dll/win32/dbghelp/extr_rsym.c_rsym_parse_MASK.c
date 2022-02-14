
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sparse_array {int dummy; } ;
struct pool {int dummy; } ;
struct TYPE_6__ {char CVSig; void* Publics; void* SourceIndexed; void* TypeInfo; void* GlobalSymbols; void* LineNumbers; int SymType; } ;
struct module {TYPE_1__ module; } ;
struct TYPE_7__ {scalar_t__ Address; struct TYPE_7__* next; int func; } ;
typedef TYPE_2__ rsym_func_entry_t ;
struct TYPE_8__ {char const* File; int Source; } ;
typedef TYPE_3__ rsym_file_entry_t ;
typedef scalar_t__ ULONG ;
struct TYPE_10__ {scalar_t__ Address; int FileOffset; int FunctionOffset; int SourceLine; } ;
struct TYPE_9__ {int SymbolsOffset; int StringsOffset; int SymbolsLength; int StringsLength; } ;
typedef TYPE_4__ ROSSYM_HEADER ;
typedef TYPE_5__ ROSSYM_ENTRY ;
typedef char CHAR ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct pool*) ;
 int FUNC_3 (struct pool*,int) ;
 int FUNC_4 (struct module*,int ) ;
 int FUNC_5 (struct module*,int *,char const*) ;
 void* FUNC_6 (struct sparse_array*,int,struct pool*) ;
 void* FUNC_7 (struct sparse_array*,int) ;
 int FUNC_8 (struct sparse_array*,int,int) ;
 int FUNC_9 (struct module*,int ,int ,int ,scalar_t__) ;
 int FUNC_10 (struct module*,int *,char const*,scalar_t__,int ,int *) ;
 int FUNC_11 (struct module*,int *,char const*,void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (char const*) ;

BOOL FUNC_13(struct module* VAR_3, unsigned long VAR_4,
                 const void* VAR_5, int VAR_6)
{
    const ROSSYM_HEADER* VAR_7;
    const ROSSYM_ENTRY* VAR_8, *VAR_9, *VAR_10;
    const CHAR* VAR_11;

    struct pool VAR_12;
    struct sparse_array VAR_13, VAR_14;
    rsym_func_entry_t* VAR_15 = ((void*)0);


    VAR_7 = VAR_5;

    if (VAR_7->SymbolsOffset < sizeof(ROSSYM_HEADER)
        || VAR_7->StringsOffset < VAR_7->SymbolsOffset + VAR_7->SymbolsLength
        || VAR_6 < VAR_7->StringsOffset + VAR_7->StringsLength
        || 0 != (VAR_7->SymbolsLength % sizeof(ROSSYM_ENTRY)))
    {
        FUNC_0("Invalid ROSSYM_HEADER\n");
        return VAR_0;
    }

    VAR_8 = (const ROSSYM_ENTRY *)((const char*)VAR_5 + VAR_7->SymbolsOffset);
    VAR_9 = VAR_8 + VAR_7->SymbolsLength / sizeof(ROSSYM_ENTRY);
    VAR_11 = (const CHAR*)VAR_5 + VAR_7->StringsOffset;

    FUNC_3(&VAR_12, 65536);
    FUNC_8(&VAR_13, sizeof(rsym_file_entry_t), 64);
    FUNC_8(&VAR_14, sizeof(rsym_func_entry_t), 128);

    for (VAR_10 = VAR_8; VAR_10 != VAR_9; VAR_10++)
    {
        ULONG VAR_16 = VAR_4 + VAR_10->Address;
        if (!VAR_10->FileOffset)
        {
            rsym_func_entry_t* VAR_17 = FUNC_7(&VAR_14, VAR_10->FunctionOffset);


            if (!VAR_17 || VAR_17->Address != VAR_16)
            {
                const char* VAR_18 = VAR_11 + VAR_10->FunctionOffset;
                if (!FUNC_1(VAR_18))
                {

                    ULONG VAR_19 = sizeof(ULONG);
                    if (FUNC_12(VAR_18))
                        VAR_16 = VAR_10->Address;

                    FUNC_11(VAR_3, ((void*)0), VAR_18, VAR_0, VAR_16, VAR_19);
                }
                else
                {

                }
            }
        }
        else
        {
            rsym_file_entry_t* VAR_20 = FUNC_7(&VAR_13, VAR_10->FileOffset);
            rsym_func_entry_t* VAR_21 = FUNC_7(&VAR_14, VAR_10->FunctionOffset);

            if (!VAR_20)
            {
                VAR_20 = FUNC_6(&VAR_13, VAR_10->FileOffset, &VAR_12);
                VAR_20->File = VAR_11 + VAR_10->FileOffset;
                VAR_20->Source = FUNC_5(VAR_3, ((void*)0), VAR_11 + VAR_10->FileOffset);
            }

            if (!VAR_21)
            {
                VAR_21 = FUNC_6(&VAR_14, VAR_10->FunctionOffset, &VAR_12);
                VAR_21->func = FUNC_10(VAR_3, ((void*)0), VAR_11 + VAR_10->FunctionOffset,
                    VAR_16, 0, ((void*)0));
                VAR_21->Address = VAR_16;
                VAR_21->next = VAR_15;
                VAR_15 = VAR_21;
            }


            FUNC_9(VAR_3, VAR_21->func, VAR_20->Source, VAR_10->SourceLine, VAR_16 - VAR_21->Address);
        }
    }

    while (VAR_15)
    {

        FUNC_4(VAR_3, VAR_15->func);
        VAR_15 = VAR_15->next;
    }

    VAR_3->module.SymType = VAR_1;
    VAR_3->module.CVSig = 'R' | ('S' << 8) | ('Y' << 16) | ('M' << 24);
    VAR_3->module.LineNumbers = VAR_2;
    VAR_3->module.GlobalSymbols = VAR_2;
    VAR_3->module.TypeInfo = VAR_0;
    VAR_3->module.SourceIndexed = VAR_2;
    VAR_3->module.Publics = VAR_2;

    FUNC_2(&VAR_12);

    return VAR_2;
}
