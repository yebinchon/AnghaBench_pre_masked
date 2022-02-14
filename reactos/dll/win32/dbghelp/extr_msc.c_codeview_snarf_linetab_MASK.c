
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tag; } ;
struct symt_function {unsigned long address; unsigned long size; TYPE_1__ symt; } ;
struct startend {unsigned long start; } ;
struct p_string {int dummy; } ;
struct msc_debug_info {int module; } ;
struct codeview_linetab_block {unsigned long* offsets; size_t num_lines; int seg; } ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long,unsigned long,int) ;
 unsigned long FUNC_1 (struct msc_debug_info const*,int ,unsigned long) ;
 unsigned int FUNC_2 (int ,int *,char const*) ;
 int FUNC_3 (int ,struct symt_function*,unsigned int,unsigned short const,unsigned long) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;
 char const* FUNC_5 (struct p_string const*) ;

__attribute__((used)) static void FUNC_6(const struct msc_debug_info* VAR_1, const BYTE* VAR_2,
                                   int VAR_3, BOOL VAR_4)
{
    const BYTE* VAR_5 = VAR_2;
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    unsigned int VAR_10;
    const unsigned int* VAR_11;
    const unsigned int* VAR_12;
    const unsigned short* VAR_13;
    const struct startend* VAR_14;
    unsigned VAR_15;
    unsigned long VAR_16, VAR_17;
    struct symt_function* VAR_18;
    const struct codeview_linetab_block* VAR_19;

    VAR_6 = *(const short*)VAR_2;
    VAR_11 = (const unsigned int*)(VAR_2 + 2 * sizeof(short));

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    {
        VAR_5 = VAR_2 + VAR_11[VAR_8];
        VAR_7 = *(const short*)VAR_5;
        VAR_12 = (const unsigned int*)(VAR_5 + 2 * sizeof(short));
        VAR_14 = (const struct startend*)(VAR_12 + VAR_7);




        if (VAR_4)
            VAR_15 = FUNC_2(VAR_1->module, ((void*)0), FUNC_5((const struct p_string*)(VAR_14 + VAR_7)));
        else
            VAR_15 = FUNC_2(VAR_1->module, ((void*)0), (const char*)(VAR_14 + VAR_7));

        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
            VAR_19 = (const struct codeview_linetab_block*)(VAR_2 + *VAR_12++);
            VAR_13 = (const unsigned short*)&VAR_19->offsets[VAR_19->num_lines];
            VAR_17 = FUNC_1(VAR_1, VAR_19->seg, VAR_14[VAR_9].start);
            if (!VAR_17) continue;
            for (VAR_18 = ((void*)0), VAR_10 = 0; VAR_10 < VAR_19->num_lines; VAR_10++)
            {

                VAR_16 = VAR_17 + VAR_19->offsets[VAR_10] - VAR_14[VAR_9].start;



                if (!VAR_18 || VAR_16 >= VAR_18->address + VAR_18->size)
                {
                    VAR_18 = (struct symt_function*)FUNC_4(VAR_1->module, VAR_16);

                    if (!VAR_18 || VAR_18->symt.tag != VAR_0)
                    {
                        FUNC_0("--not a func at %04x:%08x %lx tag=%d\n",
                             VAR_19->seg, VAR_19->offsets[VAR_10], VAR_16, VAR_18 ? VAR_18->symt.tag : -1);
                        VAR_18 = ((void*)0);
                        break;
                    }
                }
                FUNC_3(VAR_1->module, VAR_18, VAR_15,
                                   VAR_13[VAR_10], VAR_16 - VAR_18->address);
            }
 }
    }
}
