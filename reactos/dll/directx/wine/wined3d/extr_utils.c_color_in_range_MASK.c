
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_color_key {scalar_t__ color_space_low_value; scalar_t__ color_space_high_value; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(const struct wined3d_color_key *VAR_0, DWORD VAR_1)
{


    return VAR_1 >= VAR_0->color_space_low_value
            && VAR_1 <= VAR_0->color_space_high_value;
}
