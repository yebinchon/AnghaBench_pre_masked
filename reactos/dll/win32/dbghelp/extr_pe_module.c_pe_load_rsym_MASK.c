
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int BaseOfImage; } ;
struct module {TYPE_1__ module; TYPE_4__** format_info; } ;
struct image_section_map {int dummy; } ;
struct image_file_map {int dummy; } ;
struct TYPE_7__ {TYPE_2__* pe_info; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct TYPE_6__ {struct image_file_map fmap; } ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct image_section_map*) ;
 char* FUNC_2 (struct image_section_map*) ;
 int FUNC_3 (struct image_section_map*) ;
 scalar_t__ FUNC_4 (struct image_file_map*,char*,struct image_section_map*) ;
 scalar_t__ FUNC_5 (struct module*,int ,char const*,int ) ;

__attribute__((used)) static BOOL FUNC_6(struct module* VAR_3)
{
    struct image_file_map* VAR_4 = &VAR_3->format_info[VAR_0]->u.pe_info->fmap;
    struct image_section_map VAR_5;
    BOOL VAR_6 = VAR_1;

    if (FUNC_4(VAR_4, ".rossym", &VAR_5))
    {
        const char* VAR_7 = FUNC_2(&VAR_5);
        if (VAR_7 != VAR_2)
        {
            VAR_6 = FUNC_5(VAR_3, VAR_3->module.BaseOfImage,
                             VAR_7, FUNC_1(&VAR_5));
        }
        FUNC_3(&VAR_5);
    }
    FUNC_0("%s the RSYM debug info\n", VAR_6 ? "successfully loaded" : "failed to load");

    return VAR_6;
}
