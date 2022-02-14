
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int reg; int offset; int kind; } ;
struct TYPE_23__ {TYPE_1__ frame; int * func; int * ctx; } ;
typedef TYPE_3__ dwarf2_subprogram_t ;
typedef int dwarf2_parse_context_t ;
struct TYPE_24__ {TYPE_2__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_22__ {int tag; int entry_code; } ;
 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *,TYPE_4__*) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (int *,TYPE_4__*) ;
 int FUNC_12 (int *,TYPE_4__*,int ) ;
 int FUNC_13 (int *,TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_15 (int *,TYPE_4__*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_16(dwarf2_parse_context_t* VAR_5,
                                  dwarf2_debug_info_t* VAR_6)
{
    switch (VAR_6->abbrev->tag)
    {
    case 132:
        FUNC_11(VAR_5, VAR_6);
        break;
    case 145:
        FUNC_3(VAR_5, VAR_6);
        break;
    case 138:
        FUNC_7(VAR_5, VAR_6);
        break;
    case 144:
        FUNC_12(VAR_5, VAR_6, VAR_0);
        break;
    case 135:
        FUNC_12(VAR_5, VAR_6, VAR_1);
        break;
    case 131:
        FUNC_12(VAR_5, VAR_6, VAR_2);
        break;
    case 146:
        FUNC_2(VAR_5, VAR_6);
        break;
    case 143:
        FUNC_4(VAR_5, VAR_6);
        break;
    case 128:
        FUNC_15(VAR_5, VAR_6);
        break;
    case 130:
        FUNC_13(VAR_5, VAR_6);
        break;
    case 136:
        FUNC_8(VAR_5, VAR_6);
        break;
    case 142:
        FUNC_5(VAR_5, VAR_6);
        break;
    case 134:
        FUNC_9(VAR_5, VAR_6);
        break;
    case 133:
        FUNC_10(VAR_5, VAR_6);
        break;
    case 129:
        {
            dwarf2_subprogram_t VAR_7;

            VAR_7.ctx = VAR_5;
            VAR_7.func = ((void*)0);
            VAR_7.frame.kind = VAR_4;
            VAR_7.frame.offset = 0;
            VAR_7.frame.reg = VAR_3;
            FUNC_14(&VAR_7, ((void*)0), VAR_6);
        }
        break;
    case 139:
        FUNC_6(VAR_5, VAR_6);
        break;

    case 140:
    case 141:
    case 137:
        break;
    default:
        FUNC_0("Unhandled Tag type 0x%lx at %s, for %lu\n",
              VAR_6->abbrev->tag, FUNC_1(VAR_5), VAR_6->abbrev->entry_code);
    }
}
