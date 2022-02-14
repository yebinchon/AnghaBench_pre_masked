
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct process {int search_path; } ;
struct TYPE_12__ {scalar_t__ ImageBase; int CheckSum; int SizeOfImage; } ;
struct TYPE_10__ {int TimeDateStamp; } ;
struct TYPE_13__ {TYPE_3__ OptionalHeader; TYPE_1__ FileHeader; } ;
struct TYPE_14__ {TYPE_4__ ntheader; } ;
struct TYPE_15__ {TYPE_5__ pe; } ;
struct TYPE_17__ {TYPE_6__ u; } ;
struct pe_module_info {TYPE_8__ fmap; } ;
struct TYPE_16__ {struct pe_module_info* pe_info; } ;
struct module_format {TYPE_7__ u; int * loc_compute; int remove; struct module* module; } ;
struct TYPE_11__ {int SymType; } ;
struct module {scalar_t__ reloc_delta; TYPE_2__ module; struct module_format** format_info; } ;
typedef char WCHAR ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD64 ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char const*,int ,char*,int *,int *) ;
 int FUNC_4 () ;
 struct module_format* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,struct module_format*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char const*) ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 struct module* FUNC_9 (struct process*,char*,int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_10 (struct process*,struct module*) ;
 scalar_t__ FUNC_11 (int *,TYPE_8__*,int ) ;
 int VAR_8 ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (char*,char const*) ;

struct module* FUNC_14(struct process* VAR_9, const WCHAR* VAR_10,
                                     HANDLE VAR_11, DWORD64 VAR_12, DWORD VAR_13)
{
    struct module* VAR_14 = ((void*)0);
    BOOL VAR_15 = VAR_2;
    struct module_format* VAR_16;
    WCHAR VAR_17[VAR_3];

    VAR_17[0] = '\0';
    if (!VAR_11)
    {
        FUNC_7(VAR_10);

        if ((VAR_11 = FUNC_3(VAR_10, VAR_9->search_path, VAR_17, ((void*)0), ((void*)0))) == ((void*)0))
            return ((void*)0);
        VAR_15 = VAR_6;
    }
    else if (VAR_10) FUNC_13(VAR_17, VAR_10);
    else if (VAR_7 & VAR_4)
        FUNC_2("Trouble ahead (no module name passed in deferred mode)\n");
    if (!(VAR_16 = FUNC_5(FUNC_4(), 0, sizeof(struct module_format) + sizeof(struct pe_module_info))))
        return ((void*)0);
    VAR_16->u.pe_info = (struct pe_module_info*)(VAR_16 + 1);
    if (FUNC_11(VAR_11, &VAR_16->u.pe_info->fmap, VAR_1))
    {
        if (!VAR_12) VAR_12 = VAR_16->u.pe_info->fmap.u.pe.ntheader.OptionalHeader.ImageBase;
        if (!VAR_13) VAR_13 = VAR_16->u.pe_info->fmap.u.pe.ntheader.OptionalHeader.SizeOfImage;

        VAR_14 = FUNC_9(VAR_9, VAR_17, VAR_1, VAR_2, VAR_12, VAR_13,
                            VAR_16->u.pe_info->fmap.u.pe.ntheader.FileHeader.TimeDateStamp,
                            VAR_16->u.pe_info->fmap.u.pe.ntheader.OptionalHeader.CheckSum);
        if (VAR_14)
        {
            VAR_16->module = VAR_14;
            VAR_16->remove = VAR_8;
            VAR_16->loc_compute = ((void*)0);

            VAR_14->format_info[VAR_0] = VAR_16;
            if (VAR_7 & VAR_4)
                VAR_14->module.SymType = VAR_5;
            else
                FUNC_10(VAR_9, VAR_14);
            VAR_14->reloc_delta = VAR_12 - VAR_16->u.pe_info->fmap.u.pe.ntheader.OptionalHeader.ImageBase;
        }
        else
        {
            FUNC_1("could not load the module '%s'\n", FUNC_8(VAR_17));
            FUNC_12(&VAR_16->u.pe_info->fmap);
        }
    }
    if (!VAR_14) FUNC_6(FUNC_4(), 0, VAR_16);

    if (VAR_15) FUNC_0(VAR_11);

    return VAR_14;
}
