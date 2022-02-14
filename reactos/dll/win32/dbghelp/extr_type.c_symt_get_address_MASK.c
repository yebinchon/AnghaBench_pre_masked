
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symt_thunk {int address; } ;
struct symt_public {int address; } ;
struct TYPE_6__ {int offset; } ;
struct symt_hierarchy_point {TYPE_3__ loc; struct symt* parent; } ;
struct symt_function {int address; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_5__ {TYPE_1__ var; } ;
struct symt_data {TYPE_2__ u; int kind; } ;
struct symt_compiland {int address; } ;
struct symt {int tag; } ;
typedef int ULONG64 ;
typedef int BOOL ;




 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

BOOL FUNC_2(const struct symt* VAR_2, ULONG64* VAR_3)
{
    switch (VAR_2->tag)
    {
    case 134:
        switch (((const struct symt_data*)VAR_2)->kind)
        {
        case 136:
        case 137:
            *VAR_3 = ((const struct symt_data*)VAR_2)->u.var.offset;
            break;
        default: return VAR_0;
        }
        break;
    case 131:
        *VAR_3 = ((const struct symt_function*)VAR_2)->address;
        break;
    case 129:
        *VAR_3 = ((const struct symt_public*)VAR_2)->address;
        break;
    case 132:
    case 133:
    case 130:
        if (!((const struct symt_hierarchy_point*)VAR_2)->parent ||
            !FUNC_2(((const struct symt_hierarchy_point*)VAR_2)->parent, VAR_3))
            return VAR_0;
        *VAR_3 += ((const struct symt_hierarchy_point*)VAR_2)->loc.offset;
        break;
    case 128:
        *VAR_3 = ((const struct symt_thunk*)VAR_2)->address;
        break;
    case 135:
        *VAR_3 = ((const struct symt_compiland*)VAR_2)->address;
        break;
    default:
        FUNC_0("Unsupported sym-tag %s for get-address\n", FUNC_1(VAR_2->tag));
        return VAR_0;
    }
    return VAR_1;
}
