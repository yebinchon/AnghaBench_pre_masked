
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct image_section_map {int dummy; } ;
struct image_file_map {int dummy; } ;
struct TYPE_4__ {scalar_t__ rva; scalar_t__ size; int const* address; int compressed; } ;
typedef TYPE_1__ dwarf2_section_t ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*,struct image_section_map*) ;
 scalar_t__ FUNC_2 (struct image_file_map*,char const*,struct image_section_map*) ;
 scalar_t__ FUNC_3 (struct image_section_map*) ;
 scalar_t__ FUNC_4 (struct image_section_map*) ;
 scalar_t__ FUNC_5 (struct image_section_map*) ;

__attribute__((used)) static inline BOOL FUNC_6(dwarf2_section_t* VAR_2, struct image_file_map* VAR_3,
                                       const char* VAR_4, const char* VAR_5,
                                       struct image_section_map* VAR_6)
{
    struct image_section_map VAR_7;

    if (!VAR_6) VAR_6 = &VAR_7;

    VAR_2->compressed = VAR_0;
    if (FUNC_2(VAR_3, VAR_4, VAR_6))
    {
        VAR_2->address = (const BYTE*)FUNC_5(VAR_6);
        VAR_2->size = FUNC_4(VAR_6);
        VAR_2->rva = FUNC_3(VAR_6);
        return VAR_1;
    }

    VAR_2->address = ((void*)0);
    VAR_2->size = 0;
    VAR_2->rva = 0;

    if (VAR_5 && FUNC_2(VAR_3, VAR_5, VAR_6))
    {



        FUNC_0("dbghelp not built with zlib, but compressed section found\n" );

    }

    return VAR_0;
}
