
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {scalar_t__* textures; } ;
typedef enum wined3d_texture_op { ____Placeholder_wined3d_texture_op } wined3d_texture_op ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

BOOL FUNC_0(const struct wined3d_state *VAR_9, int VAR_10,
        enum wined3d_texture_op VAR_11, DWORD VAR_12, DWORD VAR_13, DWORD VAR_14)
{
    if (VAR_11 == VAR_4)
        return VAR_0;
    if (VAR_9->textures[VAR_10])
        return VAR_0;

    if ((VAR_12 & VAR_2) == VAR_3
            && VAR_11 != VAR_8)
        return VAR_1;
    if ((VAR_13 & VAR_2) == VAR_3
            && VAR_11 != VAR_7)
        return VAR_1;
    if ((VAR_14 & VAR_2) == VAR_3
            && (VAR_11 == VAR_6 || VAR_11 == VAR_5))
        return VAR_1;

    return VAR_0;
}
