
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {int* flags; scalar_t__ depth_size; scalar_t__ stencil_size; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_format *VAR_4,
        const struct wined3d_format *VAR_5)
{
    if (VAR_4 == VAR_5)
        return VAR_1;
    if ((VAR_4->flags[VAR_3] & VAR_2)
            != (VAR_5->flags[VAR_3] & VAR_2))
        return VAR_0;
    if (VAR_4->depth_size < VAR_5->depth_size)
        return VAR_0;


    if (VAR_5->stencil_size && VAR_5->stencil_size != VAR_4->stencil_size)
        return VAR_0;
    return VAR_1;
}
