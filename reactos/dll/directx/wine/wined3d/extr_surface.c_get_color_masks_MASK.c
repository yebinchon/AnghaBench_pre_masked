
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {unsigned int red_size; unsigned int red_offset; unsigned int green_size; unsigned int green_offset; unsigned int blue_size; unsigned int blue_offset; } ;
typedef unsigned int DWORD ;



__attribute__((used)) static void FUNC_0(const struct wined3d_format *VAR_0, DWORD *VAR_1)
{
    VAR_1[0] = ((1u << VAR_0->red_size) - 1) << VAR_0->red_offset;
    VAR_1[1] = ((1u << VAR_0->green_size) - 1) << VAR_0->green_offset;
    VAR_1[2] = ((1u << VAR_0->blue_size) - 1) << VAR_0->blue_offset;
}
