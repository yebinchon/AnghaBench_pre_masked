
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; } ;
struct symt_function {TYPE_1__ symt; } ;
struct msc_debug_info {int module; } ;
struct codeview_lt2blk_lines {unsigned int nlines; TYPE_2__* l; int start; int seg; int file_offset; int size; } ;
struct codeview_linetab2_file {int offset; } ;
struct codeview_linetab2 {int header; int size_of_block; } ;
struct TYPE_4__ {int lineno; int offset; } ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;




 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ,int ,int) ;
 int FUNC_2 (struct msc_debug_info const*,int ,int ) ;
 struct codeview_linetab2* FUNC_3 (struct codeview_linetab2 const*) ;
 unsigned int FUNC_4 (int ,int *,char const*) ;
 int FUNC_5 (int ,struct symt_function*,unsigned int,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(const struct msc_debug_info* VAR_1, const BYTE* VAR_2, DWORD VAR_3,
                                    const char* VAR_4, DWORD VAR_5)
{
    unsigned VAR_6;
    DWORD_PTR VAR_7;
    const struct codeview_linetab2* VAR_8;
    const struct codeview_linetab2* VAR_9 = ((void*)0);
    const struct codeview_lt2blk_lines* VAR_10;
    const struct codeview_linetab2_file*VAR_11;
    unsigned VAR_12;
    struct symt_function* VAR_13;


    VAR_8 = (const struct codeview_linetab2*)VAR_2;
    while ((const BYTE*)(VAR_8 + 1) < VAR_2 + VAR_3)
    {
        if (VAR_8->header == 129)
        {
            VAR_9 = VAR_8;
            break;
        }
        VAR_8 = FUNC_3(VAR_8);
    }
    if (!VAR_9)
    {
        FUNC_0("No LT2_FILES_BLOCK found\n");
        return;
    }

    VAR_8 = (const struct codeview_linetab2*)VAR_2;
    while ((const BYTE*)(VAR_8 + 1) < VAR_2 + VAR_3)
    {

        switch (VAR_8->header)
        {
        case 128:

            if (VAR_8->size_of_block < sizeof (struct codeview_lt2blk_lines)) break;
            VAR_10 = (const struct codeview_lt2blk_lines*)VAR_8;

            VAR_7 = FUNC_2(VAR_1, VAR_10->seg, VAR_10->start);
            FUNC_0("block from %04x:%08x #%x (%x lines)\n",
                  VAR_10->seg, VAR_10->start, VAR_10->size, VAR_10->nlines);
            VAR_11 = (const struct codeview_linetab2_file*)((const char*)VAR_9 + 8 + VAR_10->file_offset);

            VAR_12 = FUNC_4(VAR_1->module, ((void*)0), VAR_4 + VAR_11->offset);
            VAR_13 = (struct symt_function*)FUNC_6(VAR_1->module, VAR_7);

            if (!VAR_13 || VAR_13->symt.tag != VAR_0)
            {
                FUNC_1("--not a func at %04x:%08x %lx tag=%d\n",
                     VAR_10->seg, VAR_10->start, VAR_7, VAR_13 ? VAR_13->symt.tag : -1);
                break;
            }
            for (VAR_6 = 0; VAR_6 < VAR_10->nlines; VAR_6++)
            {
                FUNC_5(VAR_1->module, VAR_13, VAR_12,
                                   VAR_10->l[VAR_6].lineno ^ 0x80000000,
                                   VAR_10->l[VAR_6].offset);
            }
            break;
        case 129:
            break;
        default:
            FUNC_0("Block end %x\n", VAR_8->header);
            VAR_8 = (const struct codeview_linetab2*)((const char*)VAR_2 + VAR_3);
            continue;
        }
        VAR_8 = FUNC_3(VAR_8);
    }
}
