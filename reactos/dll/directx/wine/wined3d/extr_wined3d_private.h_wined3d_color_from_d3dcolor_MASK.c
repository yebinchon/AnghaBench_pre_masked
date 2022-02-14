
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_color {float r; float g; float b; float a; } ;
typedef int DWORD ;


 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ) ;
 float FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct wined3d_color *VAR_0, DWORD VAR_1)
{
    VAR_0->r = FUNC_3(VAR_1) / 255.0f;
    VAR_0->g = FUNC_2(VAR_1) / 255.0f;
    VAR_0->b = FUNC_1(VAR_1) / 255.0f;
    VAR_0->a = FUNC_0(VAR_1) / 255.0f;
}
