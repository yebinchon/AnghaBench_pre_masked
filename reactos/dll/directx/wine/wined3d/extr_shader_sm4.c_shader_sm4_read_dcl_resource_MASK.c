
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_sm4_data {int dummy; } ;
struct TYPE_3__ {void* resource_data_type; int reg; void* resource_type; } ;
struct TYPE_4__ {TYPE_1__ semantic; } ;
struct wined3d_shader_instruction {scalar_t__ flags; TYPE_2__ declaration; } ;
typedef enum wined3d_sm4_resource_type { ____Placeholder_wined3d_sm4_resource_type } wined3d_sm4_resource_type ;
typedef enum wined3d_sm4_data_type { ____Placeholder_wined3d_sm4_data_type } wined3d_sm4_data_type ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (void**) ;
 int FUNC_1 (char*,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void** VAR_9 ;
 void** VAR_10 ;
 int FUNC_2 (struct wined3d_sm4_data*,scalar_t__ const**,scalar_t__ const*,int,int *) ;

__attribute__((used)) static void FUNC_3(struct wined3d_shader_instruction *VAR_11,
        DWORD VAR_12, DWORD VAR_13, const DWORD *VAR_14, unsigned int VAR_15,
        struct wined3d_sm4_data *VAR_16)
{
    enum wined3d_sm4_resource_type VAR_17;
    enum wined3d_sm4_data_type VAR_18;
    enum wined3d_data_type VAR_19;
    DWORD VAR_20;

    VAR_17 = (VAR_13 & VAR_5) >> VAR_6;
    if (!VAR_17 || (VAR_17 >= FUNC_0(VAR_10)))
    {
        FUNC_1("Unhandled resource type %#x.\n", VAR_17);
        VAR_11->declaration.semantic.resource_type = VAR_3;
    }
    else
    {
        VAR_11->declaration.semantic.resource_type = VAR_10[VAR_17];
    }
    VAR_19 = VAR_12 == VAR_4 ? VAR_1 : VAR_2;
    FUNC_2(VAR_16, &VAR_14, &VAR_14[VAR_15], VAR_19, &VAR_11->declaration.semantic.reg);

    VAR_20 = *VAR_14++;
    if ((VAR_20 & 0xfff0) != (VAR_20 & 0xf) * 0x1110)
        FUNC_1("Components (%#x) have different data types.\n", VAR_20);
    VAR_18 = VAR_20 & 0xf;

    if (!VAR_18 || (VAR_18 >= FUNC_0(VAR_9)))
    {
        FUNC_1("Unhandled data type %#x.\n", VAR_18);
        VAR_11->declaration.semantic.resource_data_type = VAR_0;
    }
    else
    {
        VAR_11->declaration.semantic.resource_data_type = VAR_9[VAR_18];
    }

    if (VAR_19 == VAR_2)
        VAR_11->flags = (VAR_13 & VAR_7) >> VAR_8;
}
