
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_buffer {int modified_areas; } ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(const struct wined3d_buffer *VAR_0)
{
    return !!VAR_0->modified_areas;
}
