
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct location {scalar_t__ kind; int reg; unsigned long offset; } ;
struct TYPE_16__ {int size; int ptr; } ;
struct TYPE_17__ {unsigned long uvalue; TYPE_5__ block; } ;
struct attribute {int form; TYPE_6__ u; } ;
typedef enum location_error { ____Placeholder_location_error } location_error ;
struct TYPE_18__ {int data; int end_data; int word_size; } ;
typedef TYPE_7__ dwarf2_traverse_context_t ;
struct TYPE_19__ {TYPE_4__* module; } ;
typedef TYPE_8__ dwarf2_parse_context_t ;
typedef int dwarf2_debug_info_t ;
struct TYPE_15__ {int pool; TYPE_3__** format_info; } ;
struct TYPE_13__ {TYPE_1__* dwarf2_info; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
struct TYPE_12__ {int word_size; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_7__*,struct location*,int *,struct location const*) ;
 int FUNC_2 (TYPE_8__*,int const*,unsigned long,struct attribute*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (unsigned int*,int,unsigned int) ;
 unsigned int* FUNC_4 (int *,int) ;

__attribute__((used)) static BOOL FUNC_5(dwarf2_parse_context_t* VAR_8,
                                         const dwarf2_debug_info_t* VAR_9,
                                         unsigned long VAR_10,
                                         struct location* VAR_11,
                                         const struct location* VAR_12)
{
    struct attribute VAR_13;

    if (!FUNC_2(VAR_8, VAR_9, VAR_10, &VAR_13)) return VAR_1;

    switch (VAR_13.form)
    {
    case 133: case 132:
    case 128: case 129:
        VAR_11->kind = VAR_4;
        VAR_11->reg = 0;
        VAR_11->offset = VAR_13.u.uvalue;
        return VAR_2;
    case 131: case 130:
        VAR_11->kind = VAR_6;
        VAR_11->reg = VAR_3;
        VAR_11->offset = VAR_13.u.uvalue;
        return VAR_2;
    case 137:
    case 136:
    case 135:
    case 134:
        break;
    default: FUNC_0("Unsupported yet form %lx\n", VAR_13.form);
        return VAR_1;
    }



    if (VAR_13.u.block.size)
    {
        dwarf2_traverse_context_t VAR_14;
        enum location_error VAR_15;

        VAR_14.data = VAR_13.u.block.ptr;
        VAR_14.end_data = VAR_13.u.block.ptr + VAR_13.u.block.size;
        VAR_14.word_size = VAR_8->module->format_info[VAR_0]->u.dwarf2_info->word_size;

        VAR_15 = FUNC_1(&VAR_14, VAR_11, ((void*)0), VAR_12);
        if (VAR_15 < 0)
        {
            VAR_11->kind = VAR_7;
            VAR_11->reg = VAR_15;
        }
        else if (VAR_11->kind == VAR_5)
        {
            unsigned* VAR_16 = FUNC_4(&VAR_8->module->pool,
                                         sizeof(unsigned) + VAR_13.u.block.size);
            *VAR_16 = VAR_13.u.block.size;
            FUNC_3(VAR_16 + 1, VAR_13.u.block.ptr, VAR_13.u.block.size);

            VAR_11->offset = (unsigned long)VAR_16;



        }
    }
    return VAR_2;
}
