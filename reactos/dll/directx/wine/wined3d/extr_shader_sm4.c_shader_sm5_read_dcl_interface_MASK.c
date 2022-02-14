
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_4__ {int array_size; int table_count; int body_count; int index; } ;
struct TYPE_3__ {TYPE_2__ fp; } ;
struct wined3d_shader_instruction {TYPE_1__ declaration; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int const VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct wined3d_shader_instruction *VAR_2,
        DWORD VAR_3, DWORD VAR_4, const DWORD *VAR_5, unsigned int VAR_6,
        struct wined3d_sm4_data *VAR_7)
{
    VAR_2->declaration.fp.index = *VAR_5++;
    VAR_2->declaration.fp.body_count = *VAR_5++;
    VAR_2->declaration.fp.array_size = *VAR_5 >> VAR_0;
    VAR_2->declaration.fp.table_count = *VAR_5++ & VAR_1;
    FUNC_0("Ignoring set of function tables (count %u).\n", VAR_2->declaration.fp.table_count);
}
