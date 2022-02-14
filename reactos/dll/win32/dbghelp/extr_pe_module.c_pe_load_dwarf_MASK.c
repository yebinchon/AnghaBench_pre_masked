
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


struct TYPE_12__ {scalar_t__ BaseOfImage; } ;
struct module {TYPE_4__ module; TYPE_3__** format_info; } ;
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
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct module*,scalar_t__,int *,struct image_file_map*) ;

__attribute__((used)) static BOOL FUNC_2(struct module* VAR_1)
{
    struct image_file_map* VAR_2 = &VAR_1->format_info[VAR_0]->u.pe_info->fmap;
    BOOL VAR_3;

    VAR_3 = FUNC_1(VAR_1,
                       VAR_1->module.BaseOfImage - VAR_2->u.pe.ntheader.OptionalHeader.ImageBase,
                       ((void*)0),
                       VAR_2);
    FUNC_0("%s the DWARF debug info\n", VAR_3 ? "successfully loaded" : "failed to load");

    return VAR_3;
}
