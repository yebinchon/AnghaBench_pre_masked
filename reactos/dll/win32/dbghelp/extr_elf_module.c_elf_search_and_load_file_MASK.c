
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct process {int dummy; } ;
struct TYPE_8__ {scalar_t__ SymType; } ;
struct module {TYPE_4__ module; TYPE_3__** format_info; } ;
struct elf_info {struct module* module; } ;
typedef char WCHAR ;
struct TYPE_6__ {TYPE_1__* elf_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_5__ {int elf_mark; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct process*,char const*,unsigned long,unsigned long,struct elf_info*) ;
 scalar_t__ FUNC_1 (struct process*,char const*,unsigned long,unsigned long,struct elf_info*) ;
 scalar_t__ FUNC_2 (struct process*,char const*,unsigned long,unsigned long,int ,struct elf_info*) ;
 int FUNC_3 (char*) ;
 struct module* FUNC_4 (struct process*,char const*) ;
 int FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static BOOL FUNC_7(struct process* VAR_3, const WCHAR* VAR_4,
                                     unsigned long VAR_5, unsigned long VAR_6,
                                     struct elf_info* VAR_7)
{
    BOOL VAR_8 = VAR_2;
    struct module* VAR_9;
    static const WCHAR VAR_10[] = {'l','i','b','s','t','d','c','+','+','\0'};

    if (VAR_4 == ((void*)0) || *VAR_4 == '\0') return VAR_2;
    if ((VAR_9 = FUNC_4(VAR_3, VAR_4)))
    {
        VAR_7->module = VAR_9;
        VAR_7->module->format_info[VAR_1]->u.elf_info->elf_mark = 1;
        return VAR_9->module.SymType;
    }

    if (FUNC_6(VAR_4, VAR_10)) return VAR_2;
    VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (!VAR_8 && !FUNC_5(VAR_4, '/'))
    {
        VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
                                      FUNC_3("PATH"), VAR_7);
        if (!VAR_8) VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
                                                FUNC_3("LD_LIBRARY_PATH"), VAR_7);
        if (!VAR_8) VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
                                                VAR_0, VAR_7);
        if (!VAR_8) VAR_8 = FUNC_1(VAR_3, VAR_4,
                                                    VAR_5, VAR_6, VAR_7);
    }

    return VAR_8;
}
