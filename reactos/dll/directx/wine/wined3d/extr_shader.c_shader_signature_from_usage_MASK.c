
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_signature_element {int mask; void* register_idx; int component_type; int sysval_semantic; scalar_t__ stream_idx; void* semantic_idx; int semantic_name; } ;
typedef enum wined3d_decl_usage { ____Placeholder_wined3d_decl_usage } wined3d_decl_usage ;
typedef void* UINT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_signature_element *VAR_1,
        enum wined3d_decl_usage VAR_2, UINT VAR_3, UINT VAR_4, DWORD VAR_5)
{
    VAR_1->semantic_name = FUNC_0(VAR_2);
    VAR_1->semantic_idx = VAR_3;
    VAR_1->stream_idx = 0;
    VAR_1->sysval_semantic = FUNC_1(VAR_2);
    VAR_1->component_type = VAR_0;
    VAR_1->register_idx = VAR_4;
    VAR_1->mask = VAR_5;
}
