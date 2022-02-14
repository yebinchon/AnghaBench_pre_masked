
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lval; int dval; int tref; TYPE_2__* ext; int sval; } ;
struct TYPE_6__ {int type; TYPE_1__ u; struct TYPE_6__* ref; struct TYPE_6__* ext2; } ;
typedef TYPE_2__ expr_t ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const expr_t *VAR_0, const expr_t *VAR_1)
{
    int VAR_2;

    if (VAR_0->type != VAR_1->type)
        return VAR_0->type - VAR_1->type;

    switch (VAR_0->type)
    {
        case 140:
        case 153:
        case 131:
            return VAR_0->u.lval - VAR_1->u.lval;
        case 157:
            return VAR_0->u.dval - VAR_1->u.dval;
        case 152:
        case 133:
        case 129:
        case 160:
            return FUNC_1(VAR_0->u.sval, VAR_1->u.sval);
        case 159:
            VAR_2 = FUNC_2(VAR_0->ref, VAR_1->ref);
            if (VAR_2 != 0)
                return VAR_2;
            VAR_2 = FUNC_2(VAR_0->u.ext, VAR_1->u.ext);
            if (VAR_2 != 0)
                return VAR_2;
            return FUNC_2(VAR_0->ext2, VAR_1->ext2);
        case 139:
        case 163:
        case 165:
        case 132:
        case 144:
        case 143:
        case 158:
        case 136:
        case 135:
        case 145:
        case 162:
        case 146:
        case 148:
        case 128:
        case 156:
        case 151:
        case 155:
        case 150:
        case 154:
        case 149:
            VAR_2 = FUNC_2(VAR_0->ref, VAR_1->ref);
            if (VAR_2 != 0)
                return VAR_2;
            return FUNC_2(VAR_0->u.ext, VAR_1->u.ext);
        case 161:
            VAR_2 = FUNC_0(VAR_0->u.tref, VAR_1->u.tref);
            if (VAR_2 != 0)
                return VAR_2;

        case 141:
        case 142:
        case 137:
        case 164:
        case 147:
        case 138:
            return FUNC_2(VAR_0->ref, VAR_1->ref);
        case 134:
            return FUNC_0(VAR_0->u.tref, VAR_1->u.tref);
        case 130:
            return 0;
    }
    return -1;
}
