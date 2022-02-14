
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct module {int dummy; } ;
struct frame_info {int fde_encoding; unsigned long ip; } ;
struct TYPE_7__ {unsigned char* data; unsigned char* end_data; int word_size; } ;
typedef TYPE_1__ dwarf2_traverse_context_t ;
typedef unsigned long DWORD_PTR ;
typedef unsigned char BYTE ;
typedef scalar_t__ BOOL ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_1 (TYPE_1__*,int) ;
 unsigned int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct frame_info*) ;

__attribute__((used)) static BOOL FUNC_4(unsigned long VAR_3, struct module* VAR_4, DWORD_PTR VAR_5,
                           dwarf2_traverse_context_t* VAR_6, dwarf2_traverse_context_t* VAR_7,
                           struct frame_info* VAR_8, BOOL VAR_9)
{
    const unsigned char* VAR_10;
    const unsigned char* VAR_11;
    const unsigned char* VAR_12 = (const unsigned char*)~0;
    unsigned VAR_13, VAR_14;
    unsigned long VAR_15, VAR_16;
    unsigned VAR_17;
    const BYTE* VAR_18 = VAR_6->data;

    VAR_17 = VAR_9 ? 0 : VAR_0;

    while (VAR_6->data + 2 * 4 < VAR_6->end_data)
    {
        if (FUNC_2(VAR_6))
        {
            VAR_6->data -= 4;
            break;
        }
    }
    for (; VAR_6->data + 2 * 4 < VAR_6->end_data; VAR_6->data = VAR_10)
    {

        VAR_13 = FUNC_2(VAR_6);
        if (VAR_13 == 0xffffffff) FUNC_0("Unsupported yet 64-bit CIEs\n");
        VAR_10 = VAR_6->data + VAR_13;
        VAR_14 = FUNC_2(VAR_6);
        if (VAR_14 == VAR_17)
        {
            VAR_12 = VAR_6->data - 8;

            if (!FUNC_3(VAR_6, VAR_8)) return VAR_1;
            VAR_7->data = VAR_6->data;
            VAR_7->end_data = VAR_10;
            VAR_7->word_size = VAR_6->word_size;
            continue;
        }
        VAR_11 = (VAR_9) ? VAR_6->data - VAR_14 - 4 : VAR_18 + VAR_14;
        if (VAR_11 != VAR_12)
        {
            VAR_12 = VAR_11;
            VAR_7->data = VAR_11;
            VAR_7->word_size = VAR_6->word_size;
            VAR_7->end_data = VAR_11 + 4;
            VAR_7->end_data = VAR_11 + 4 + FUNC_2(VAR_7);
            if (FUNC_2(VAR_7) != VAR_17)
            {
                FUNC_0("wrong CIE pointer at %x from FDE %x\n",
                      (unsigned)(VAR_11 - VAR_18),
                      (unsigned)(VAR_6->data - VAR_18));
                return VAR_1;
            }
            if (!FUNC_3(VAR_7, VAR_8)) return VAR_1;
        }
        VAR_15 = VAR_5 + FUNC_1(VAR_6, VAR_8->fde_encoding);
        VAR_16 = FUNC_1(VAR_6, VAR_8->fde_encoding & 0x0F);

        if (VAR_3 >= VAR_15 && VAR_3 < VAR_15 + VAR_16)
        {

            VAR_6->end_data = VAR_10;

            VAR_8->ip = VAR_15;
            return VAR_2;
        }
    }
    return VAR_1;
}
