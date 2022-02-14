
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


struct TYPE_17__ {scalar_t__ uvalue; } ;
struct attribute {TYPE_6__ u; } ;
struct TYPE_18__ {scalar_t__ data; scalar_t__ end_data; int word_size; } ;
typedef TYPE_7__ dwarf2_traverse_context_t ;
struct TYPE_19__ {TYPE_5__* module; TYPE_1__* sections; } ;
typedef TYPE_8__ dwarf2_parse_context_t ;
typedef int dwarf2_debug_info_t ;
struct TYPE_16__ {TYPE_4__** format_info; } ;
struct TYPE_14__ {TYPE_2__* dwarf2_info; } ;
struct TYPE_15__ {TYPE_3__ u; } ;
struct TYPE_13__ {int word_size; } ;
struct TYPE_12__ {scalar_t__ address; scalar_t__ size; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_8__*,int const*,int ,struct attribute*) ;
 unsigned long FUNC_2 (TYPE_7__*) ;
 size_t VAR_7 ;

__attribute__((used)) static BOOL FUNC_3(dwarf2_parse_context_t* VAR_8, const dwarf2_debug_info_t* VAR_9,
                              unsigned long* VAR_10, unsigned long* VAR_11)
{
    struct attribute VAR_12;

    if (FUNC_1(VAR_8, VAR_9, VAR_3, &VAR_12))
    {
        dwarf2_traverse_context_t VAR_13;
        unsigned long VAR_14, VAR_15;

        VAR_13.data = VAR_8->sections[VAR_7].address + VAR_12.u.uvalue;
        VAR_13.end_data = VAR_8->sections[VAR_7].address +
            VAR_8->sections[VAR_7].size;
        VAR_13.word_size = VAR_8->module->format_info[VAR_0]->u.dwarf2_info->word_size;

        *VAR_10 = VAR_6;
        *VAR_11 = 0;
        while (VAR_13.data + 2 * VAR_13.word_size < VAR_13.end_data)
        {
            VAR_14 = FUNC_2(&VAR_13);
            VAR_15 = FUNC_2(&VAR_13);
            if (VAR_14 == 0 && VAR_15 == 0) break;
            if (VAR_14 == VAR_6) FUNC_0("unsupported yet (base address selection)\n");
            if (VAR_14 < *VAR_10) *VAR_10 = VAR_14;
            if (VAR_15 > *VAR_11) *VAR_11 = VAR_15;
        }
        if (*VAR_10 == VAR_6 || *VAR_11 == 0) {FUNC_0("no entry found\n"); return VAR_4;}
        if (*VAR_10 == *VAR_11) {FUNC_0("entry found, but low=high\n"); return VAR_4;}

        return VAR_5;
    }
    else
    {
        struct attribute VAR_16;
        struct attribute VAR_17;

        if (!FUNC_1(VAR_8, VAR_9, VAR_2, &VAR_16) ||
            !FUNC_1(VAR_8, VAR_9, VAR_1, &VAR_17))
            return VAR_4;
        *VAR_10 = VAR_16.u.uvalue;
        *VAR_11 = VAR_17.u.uvalue;
        return VAR_5;
    }
}
