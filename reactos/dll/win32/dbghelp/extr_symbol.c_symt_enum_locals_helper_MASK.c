
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vector {int dummy; } ;
struct symt_function {int dummy; } ;
struct symt_block {struct vector vchildren; scalar_t__ size; scalar_t__ address; } ;
struct symt {int tag; } ;
struct sym_enum {int dummy; } ;
struct module_pair {TYPE_2__* pcs; } ;
typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ InstructionOffset; } ;
struct TYPE_4__ {TYPE_1__ ctx_frame; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int const*,int) ;






 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct sym_enum const*,struct module_pair*,struct symt_function*,struct symt*) ;
 int * FUNC_6 (struct symt*) ;
 scalar_t__ FUNC_7 (struct vector const*,unsigned int) ;
 unsigned int FUNC_8 (struct vector const*) ;

__attribute__((used)) static BOOL FUNC_9(struct module_pair* VAR_4,
                                    const WCHAR* VAR_5, const struct sym_enum* VAR_6,
                                    struct symt_function* VAR_7, const struct vector* VAR_8)
{
    struct symt* VAR_9 = ((void*)0);
    DWORD VAR_10 = VAR_4->pcs->ctx_frame.InstructionOffset;
    unsigned int VAR_11;
    WCHAR* VAR_12;
    BOOL VAR_13;

    for (VAR_11=0; VAR_11<FUNC_8(VAR_8); VAR_11++)
    {
        VAR_9 = *(struct symt**)FUNC_7(VAR_8, VAR_11);
        switch (VAR_9->tag)
        {
        case 133:
            {
                struct symt_block* VAR_14 = (struct symt_block*)VAR_9;
                if (VAR_10 < VAR_14->address || VAR_14->address + VAR_14->size <= VAR_10)
                    continue;
                if (!FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_14->vchildren))
                    return VAR_0;
            }
            break;
        case 131:
            VAR_12 = FUNC_6(VAR_9);
            VAR_13 = FUNC_3(VAR_12, VAR_5,
                                  !(VAR_3 & VAR_1));
            FUNC_2(FUNC_1(), 0, VAR_12);
            if (VAR_13)
            {
                if (FUNC_5(VAR_6, VAR_4, VAR_7, VAR_9)) return VAR_0;
            }
            break;
        case 128:
        case 129:
        case 130:
        case 132:
            break;
        default:
            FUNC_0("Unknown type: %u (%x)\n", VAR_9->tag, VAR_9->tag);
            FUNC_4(0);
        }
    }
    return VAR_2;
}
