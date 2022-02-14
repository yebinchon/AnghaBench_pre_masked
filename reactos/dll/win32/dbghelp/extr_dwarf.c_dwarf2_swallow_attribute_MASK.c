
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {unsigned int word_size; unsigned int data; } ;
typedef TYPE_1__ dwarf2_traverse_context_t ;
struct TYPE_11__ {int form; int attribute; } ;
typedef TYPE_2__ dwarf2_abbrev_entry_attr_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 unsigned int FUNC_4 (TYPE_1__*) ;
 unsigned int FUNC_5 (TYPE_1__*) ;
 unsigned int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(dwarf2_traverse_context_t* VAR_0,
                                     const dwarf2_abbrev_entry_attr_t* VAR_1)
{
    unsigned VAR_2;

    FUNC_1("(attr:0x%lx,form:0x%lx)\n", VAR_1->attribute, VAR_1->form);

    switch (VAR_1->form)
    {
    case 138: VAR_2 = 0; break;
    case 133:
    case 148: VAR_2 = VAR_0->word_size; break;
    case 139:
    case 143:
    case 137: VAR_2 = 1; break;
    case 142:
    case 136: VAR_2 = 2; break;
    case 141:
    case 135:
    case 129: VAR_2 = 4; break;
    case 140:
    case 134: VAR_2 = 8; break;
    case 131:
    case 132:
    case 128: VAR_2 = FUNC_3(VAR_0); break;
    case 130: VAR_2 = FUNC_7((const char*)VAR_0->data) + 1; break;
    case 147: VAR_2 = FUNC_2(VAR_0); break;
    case 146: VAR_2 = FUNC_4(VAR_0); break;
    case 145: VAR_2 = FUNC_5(VAR_0); break;
    case 144: VAR_2 = FUNC_6(VAR_0); break;
    default:
        FUNC_0("Unhandled attribute form %lx\n", VAR_1->form);
        return;
    }
    VAR_0->data += VAR_2;
}
