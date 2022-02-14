
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {unsigned int* flags; } ;


 unsigned int FUNC_0 (unsigned int*) ;

__attribute__((used)) static void FUNC_1(struct wined3d_format *VAR_0, unsigned int VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->flags); ++VAR_2)
        VAR_0->flags[VAR_2] &= ~VAR_1;
}
