
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct process {int dummy; } ;
struct TYPE_12__ {scalar_t__ BaseOfImage; } ;
struct module {TYPE_4__ module; TYPE_3__** format_info; } ;
struct image_section_map {int dummy; } ;
struct TYPE_13__ {scalar_t__ ImageBase; } ;
struct TYPE_14__ {TYPE_5__ OptionalHeader; } ;
struct TYPE_15__ {TYPE_6__ ntheader; } ;
struct TYPE_16__ {TYPE_7__ pe; } ;
struct image_file_map {TYPE_8__ u; } ;
struct TYPE_10__ {TYPE_1__* pe_info; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
struct TYPE_9__ {struct image_file_map fmap; } ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct image_section_map*) ;
 char* FUNC_2 (struct image_section_map*) ;
 int FUNC_3 (struct image_section_map*) ;
 scalar_t__ FUNC_4 (struct image_file_map*,char*,struct image_section_map*) ;
 int FUNC_5 (struct module*) ;
 scalar_t__ FUNC_6 (struct module*,scalar_t__,char const*,int ,char const*,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_7(const struct process* VAR_3, struct module* VAR_4)
{
    struct image_file_map* VAR_5 = &VAR_4->format_info[VAR_0]->u.pe_info->fmap;
    struct image_section_map VAR_6, VAR_7;
    BOOL VAR_8 = VAR_1;

    if (FUNC_4(VAR_5, ".stab", &VAR_6) && FUNC_4(VAR_5, ".stabstr", &VAR_7))
    {
        const char* VAR_9;
        const char* VAR_10;

        VAR_9 = FUNC_2(&VAR_6);
        VAR_10 = FUNC_2(&VAR_7);
        if (VAR_9 != VAR_2 && VAR_10 != VAR_2)
        {
            VAR_8 = FUNC_6(VAR_4,
                              VAR_4->module.BaseOfImage - VAR_5->u.pe.ntheader.OptionalHeader.ImageBase,
                              VAR_9, FUNC_1(&VAR_6),
                              VAR_10, FUNC_1(&VAR_7),
                              ((void*)0), ((void*)0));
        }
        FUNC_3(&VAR_6);
        FUNC_3(&VAR_7);
        if (VAR_8) FUNC_5(VAR_4);
    }
    FUNC_0("%s the STABS debug info\n", VAR_8 ? "successfully loaded" : "failed to load");

    return VAR_8;
}
