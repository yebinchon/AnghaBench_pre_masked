
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_4__ {int lval; double dval; char* sval; TYPE_2__* ext; int tref; } ;
struct TYPE_5__ {int type; TYPE_1__ u; struct TYPE_5__* ref; struct TYPE_5__* ext2; } ;
typedef TYPE_2__ expr_t ;
typedef int FILE ;
 int FUNC_0 (char*,int const*,int*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,int *) ;

void FUNC_3(FILE *VAR_0, const expr_t *VAR_1, int VAR_2,
                int VAR_3, const char *VAR_4,
                const type_t *VAR_5, const char *VAR_6)
{
    switch (VAR_1->type)
    {
    case 130:
        break;
    case 140:
        FUNC_1(VAR_0, "%u", VAR_1->u.lval);
        break;
    case 153:
        FUNC_1(VAR_0, "0x%x", VAR_1->u.lval);
        break;
    case 157:
        FUNC_1(VAR_0, "%#.15g", VAR_1->u.dval);
        break;
    case 131:
        if (VAR_1->u.lval == 0)
            FUNC_1(VAR_0, "FALSE");
        else
            FUNC_1(VAR_0, "TRUE");
        break;
    case 152:
        if (VAR_3 && VAR_4 && VAR_5)
        {
            int VAR_7;
            FUNC_0(VAR_1->u.sval, VAR_5, &VAR_7);
            if (VAR_7)
            {
                FUNC_1(VAR_0, "%s%s", VAR_4, VAR_1->u.sval);
                break;
            }
        }
        FUNC_1(VAR_0, "%s%s", VAR_6, VAR_1->u.sval);
        break;
    case 133:
        FUNC_1(VAR_0, "\"%s\"", VAR_1->u.sval);
        break;
    case 129:
        FUNC_1(VAR_0, "L\"%s\"", VAR_1->u.sval);
        break;
    case 160:
        FUNC_1(VAR_0, "'%s'", VAR_1->u.sval);
        break;
    case 147:
        FUNC_1(VAR_0, "!");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 141:
        FUNC_1(VAR_0, "~");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 138:
        FUNC_1(VAR_0, "+");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 142:
        FUNC_1(VAR_0, "-");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 164:
        FUNC_1(VAR_0, "&");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 137:
        FUNC_1(VAR_0, "*");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 161:
        FUNC_1(VAR_0, "(");
        FUNC_2(VAR_0, VAR_1->u.tref, ((void*)0));
        FUNC_1(VAR_0, ")");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    case 134:
        FUNC_1(VAR_0, "sizeof(");
        FUNC_2(VAR_0, VAR_1->u.tref, ((void*)0));
        FUNC_1(VAR_0, ")");
        break;
    case 136:
    case 135:
    case 144:
    case 143:
    case 158:
    case 165:
    case 132:
    case 163:
    case 139:
    case 146:
    case 148:
    case 128:
    case 156:
    case 151:
    case 155:
    case 150:
    case 154:
    case 149:
        if (VAR_2) FUNC_1(VAR_0, "(");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        switch (VAR_1->type)
        {
        case 136: FUNC_1(VAR_0, " << "); break;
        case 135: FUNC_1(VAR_0, " >> "); break;
        case 144: FUNC_1(VAR_0, " %% "); break;
        case 143: FUNC_1(VAR_0, " * "); break;
        case 158: FUNC_1(VAR_0, " / "); break;
        case 165: FUNC_1(VAR_0, " + "); break;
        case 132: FUNC_1(VAR_0, " - "); break;
        case 163: FUNC_1(VAR_0, " & "); break;
        case 139: FUNC_1(VAR_0, " | "); break;
        case 146: FUNC_1(VAR_0, " || "); break;
        case 148: FUNC_1(VAR_0, " && "); break;
        case 128: FUNC_1(VAR_0, " ^ "); break;
        case 156: FUNC_1(VAR_0, " == "); break;
        case 151: FUNC_1(VAR_0, " != "); break;
        case 155: FUNC_1(VAR_0, " > "); break;
        case 150: FUNC_1(VAR_0, " < "); break;
        case 154: FUNC_1(VAR_0, " >= "); break;
        case 149: FUNC_1(VAR_0, " <= "); break;
        default: break;
        }
        FUNC_3(VAR_0, VAR_1->u.ext, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_2) FUNC_1(VAR_0, ")");
        break;
    case 145:
        if (VAR_2) FUNC_1(VAR_0, "(");
        if (VAR_1->ref->type == 137)
        {
            FUNC_3(VAR_0, VAR_1->ref->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
            FUNC_1(VAR_0, "->");
        }
        else
        {
            FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
            FUNC_1(VAR_0, ".");
        }
        FUNC_3(VAR_0, VAR_1->u.ext, 1, 0, VAR_4, VAR_5, "");
        if (VAR_2) FUNC_1(VAR_0, ")");
        break;
    case 159:
        if (VAR_2) FUNC_1(VAR_0, "(");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        FUNC_1(VAR_0, " ? ");
        FUNC_3(VAR_0, VAR_1->u.ext, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        FUNC_1(VAR_0, " : ");
        FUNC_3(VAR_0, VAR_1->ext2, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_2) FUNC_1(VAR_0, ")");
        break;
    case 162:
        if (VAR_2) FUNC_1(VAR_0, "(");
        FUNC_3(VAR_0, VAR_1->ref, 1, VAR_3, VAR_4, VAR_5, VAR_6);
        FUNC_1(VAR_0, "[");
        FUNC_3(VAR_0, VAR_1->u.ext, 1, 1, VAR_4, VAR_5, VAR_6);
        FUNC_1(VAR_0, "]");
        if (VAR_2) FUNC_1(VAR_0, ")");
        break;
    }
}
