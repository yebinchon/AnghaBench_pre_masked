
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* full_map; int full_count; int hMap; } ;
struct TYPE_4__ {TYPE_1__ pe; } ;
struct image_file_map {TYPE_2__ u; } ;
typedef int IMAGE_NT_HEADERS ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int ,int ,int ,int ,int ) ;
 int * FUNC_1 (void*) ;

__attribute__((used)) static void* FUNC_2(struct image_file_map* VAR_2, IMAGE_NT_HEADERS** VAR_3)
{
    if (!VAR_2->u.pe.full_map)
    {
        VAR_2->u.pe.full_map = FUNC_0(VAR_2->u.pe.hMap, VAR_0, 0, 0, 0);
    }
    if (VAR_2->u.pe.full_map)
    {
        if (VAR_3) *VAR_3 = FUNC_1(VAR_2->u.pe.full_map);
        VAR_2->u.pe.full_count++;
        return VAR_2->u.pe.full_map;
    }
    return VAR_1;
}
