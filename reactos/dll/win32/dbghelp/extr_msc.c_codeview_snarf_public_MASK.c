
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int len; int id; } ;
struct TYPE_22__ {int symtype; int offset; int segment; int name; } ;
struct TYPE_21__ {int symtype; int offset; int segment; int p_name; } ;
struct TYPE_20__ {int symtype; int offset; int segment; int p_name; } ;
struct TYPE_19__ {int symtype; int offset; int segment; int name; } ;
struct TYPE_18__ {int symtype; int offset; int segment; int p_name; } ;
struct TYPE_17__ {int symtype; int offset; int segment; int p_name; } ;
struct TYPE_16__ {int offset; int segment; int symtype; int name; } ;
struct TYPE_15__ {int offset; int segment; int p_name; } ;
struct TYPE_14__ {int offset; int segment; int symtype; int p_name; } ;
union codeview_symbol {TYPE_10__ generic; TYPE_9__ thread_v3; TYPE_8__ thread_v2; TYPE_7__ thread_v1; TYPE_6__ data_v3; TYPE_5__ data_v2; TYPE_4__ data_v1; TYPE_3__ public_v3; TYPE_2__ public_v2; TYPE_1__ public_v1; } ;
struct symt_compiland {int dummy; } ;
struct msc_debug_info {TYPE_11__* module; } ;
struct TYPE_13__ {void* sortlist_valid; } ;
typedef int BYTE ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (struct msc_debug_info const*,struct symt_compiland*,int ,int ,int ,int ,int,void*,void*) ;
 int FUNC_2 (struct msc_debug_info const*,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_11__*,struct symt_compiland*,int ,int,int,...) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static BOOL FUNC_5(const struct msc_debug_info* VAR_5, const BYTE* VAR_6,
                                  int VAR_7, int VAR_8)

{
    int VAR_9, VAR_10;
    struct symt_compiland* VAR_11 = ((void*)0);





    for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9 += VAR_10)
    {
        const union codeview_symbol* VAR_12 = (const union codeview_symbol*)(VAR_6 + VAR_9);
        VAR_10 = VAR_12->generic.len + 2;
        if (VAR_9 + VAR_10 > VAR_8) break;
        if (!VAR_12->generic.id || VAR_10 < 4) break;
        if (VAR_10 & 3) FUNC_0("unpadded len %u\n", VAR_10);

        switch (VAR_12->generic.id)
        {
 case 130:
            if (!(VAR_4 & VAR_1))
            {
                FUNC_3(VAR_5->module, VAR_11,
                                FUNC_4(&VAR_12->public_v1.p_name),
                                VAR_12->public_v1.symtype == VAR_2,
                                FUNC_2(VAR_5, VAR_12->public_v1.segment, VAR_12->public_v1.offset), 1);
            }
            break;
 case 129:
            if (!(VAR_4 & VAR_1))
            {
                FUNC_3(VAR_5->module, VAR_11,
                                FUNC_4(&VAR_12->public_v2.p_name),
                                VAR_12->public_v3.symtype == VAR_2,
                                FUNC_2(VAR_5, VAR_12->public_v2.segment, VAR_12->public_v2.offset), 1);
            }
     break;

        case 128:
            if (!(VAR_4 & VAR_1))
            {
                FUNC_3(VAR_5->module, VAR_11,
                                VAR_12->public_v3.name,
                                VAR_12->public_v3.symtype == VAR_2,
                                FUNC_2(VAR_5, VAR_12->public_v3.segment, VAR_12->public_v3.offset), 1);
            }
            break;
        case 132:
        case 131:
            break;




 case 146:
 case 140:
            FUNC_1(VAR_5, VAR_11, FUNC_4(&VAR_12->data_v1.p_name),
                                  VAR_12->data_v1.segment, VAR_12->data_v1.offset, VAR_12->data_v1.symtype,
                                  VAR_12->generic.id == 140, VAR_0, VAR_0);
     break;
 case 145:
 case 139:
            FUNC_1(VAR_5, VAR_11, FUNC_4(&VAR_12->data_v2.p_name),
                                  VAR_12->data_v2.segment, VAR_12->data_v2.offset, VAR_12->data_v2.symtype,
                                  VAR_12->generic.id == 139, VAR_0, VAR_0);
     break;
 case 144:
 case 138:
            FUNC_1(VAR_5, VAR_11, VAR_12->data_v3.name,
                                  VAR_12->data_v3.segment, VAR_12->data_v3.offset, VAR_12->data_v3.symtype,
                                  VAR_12->generic.id == 138, VAR_0, VAR_0);
     break;


 case 143:
 case 136:
            FUNC_1(VAR_5, VAR_11, FUNC_4(&VAR_12->thread_v1.p_name),
                                  VAR_12->thread_v1.segment, VAR_12->thread_v1.offset, VAR_12->thread_v1.symtype,
                                  VAR_12->generic.id == 136, VAR_3, VAR_0);
     break;
 case 142:
 case 135:
            FUNC_1(VAR_5, VAR_11, FUNC_4(&VAR_12->thread_v2.p_name),
                                  VAR_12->thread_v2.segment, VAR_12->thread_v2.offset, VAR_12->thread_v2.symtype,
                                  VAR_12->generic.id == 135, VAR_3, VAR_0);
     break;
 case 141:
 case 134:
            FUNC_1(VAR_5, VAR_11, VAR_12->thread_v3.name,
                                  VAR_12->thread_v3.segment, VAR_12->thread_v3.offset, VAR_12->thread_v3.symtype,
                                  VAR_12->generic.id == 134, VAR_3, VAR_0);
     break;






 case 133:
 case 147:
 case 137:
            VAR_10 += (((const char*)VAR_12)[VAR_10] + 1 + 3) & ~3;
            break;
        }
        VAR_5->module->sortlist_valid = VAR_3;
    }
    VAR_5->module->sortlist_valid = VAR_0;
    return VAR_3;
}
