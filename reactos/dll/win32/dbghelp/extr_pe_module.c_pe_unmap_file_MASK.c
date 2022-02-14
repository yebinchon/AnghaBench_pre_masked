
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct image_section_map {scalar_t__ sidx; struct image_file_map* fmap; } ;
struct TYPE_5__ {scalar_t__ NumberOfSections; } ;
struct TYPE_6__ {TYPE_1__ FileHeader; } ;
struct TYPE_7__ {void* sect; int * hMap; scalar_t__ strtable; scalar_t__ full_count; TYPE_2__ ntheader; } ;
struct TYPE_8__ {TYPE_3__ pe; } ;
struct image_file_map {TYPE_4__ u; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (struct image_file_map*) ;
 int FUNC_4 (struct image_section_map*) ;

__attribute__((used)) static void FUNC_5(struct image_file_map* VAR_0)
{
    if (VAR_0->u.pe.hMap != 0)
    {
        struct image_section_map VAR_1;
        VAR_1.fmap = VAR_0;
        for (VAR_1.sidx = 0; VAR_1.sidx < VAR_0->u.pe.ntheader.FileHeader.NumberOfSections; VAR_1.sidx++)
        {
            FUNC_4(&VAR_1);
        }
        while (VAR_0->u.pe.full_count) FUNC_3(VAR_0);
        FUNC_2(FUNC_1(), 0, VAR_0->u.pe.sect);
        FUNC_2(FUNC_1(), 0, (void*)VAR_0->u.pe.strtable);
        FUNC_0(VAR_0->u.pe.hMap);
        VAR_0->u.pe.hMap = ((void*)0);
    }
}
