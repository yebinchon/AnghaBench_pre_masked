
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* dwarf2_info; } ;
struct module_format {TYPE_3__ u; } ;
struct TYPE_9__ {int word_size; int const* end_data; int const* data; } ;
typedef TYPE_4__ dwarf2_traverse_context_t ;
struct TYPE_6__ {int size; int const* address; } ;
struct TYPE_7__ {int word_size; TYPE_1__ debug_loc; } ;
typedef unsigned long DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (int const*,int ) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static BOOL FUNC_3(const struct module_format* VAR_2, const BYTE* VAR_3,
                                  unsigned long VAR_4, dwarf2_traverse_context_t* VAR_5)
{
    DWORD_PTR VAR_6, VAR_7;
    const BYTE* VAR_8 = VAR_3;
    DWORD VAR_9;

    while (VAR_8 < VAR_2->u.dwarf2_info->debug_loc.address + VAR_2->u.dwarf2_info->debug_loc.size)
    {
        VAR_6 = FUNC_1(VAR_8, VAR_2->u.dwarf2_info->word_size); VAR_8 += VAR_2->u.dwarf2_info->word_size;
        VAR_7 = FUNC_1(VAR_8, VAR_2->u.dwarf2_info->word_size); VAR_8 += VAR_2->u.dwarf2_info->word_size;
        if (!VAR_6 && !VAR_7) break;
        VAR_9 = FUNC_2(VAR_8); VAR_8 += 2;

        if (VAR_6 <= VAR_4 && VAR_4 < VAR_7)
        {
            VAR_5->data = VAR_8;
            VAR_5->end_data = VAR_8 + VAR_9;
            VAR_5->word_size = VAR_2->u.dwarf2_info->word_size;
            return VAR_1;
        }
        VAR_8 += VAR_9;
    }
    FUNC_0("Couldn't find ip in location list\n");
    return VAR_0;
}
