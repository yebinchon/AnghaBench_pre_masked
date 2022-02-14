
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * full_map; scalar_t__ full_count; } ;
struct TYPE_4__ {TYPE_1__ pe; } ;
struct image_file_map {TYPE_2__ u; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct image_file_map* VAR_0)
{
    if (VAR_0->u.pe.full_count && !--VAR_0->u.pe.full_count)
    {
        FUNC_0(VAR_0->u.pe.full_map);
        VAR_0->u.pe.full_map = ((void*)0);
    }
}
