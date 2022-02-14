
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {scalar_t__ target; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_texture *VAR_7, DWORD VAR_8)
{
    if (VAR_8 == VAR_4)
        return VAR_3;
    if (VAR_8 != VAR_5 && VAR_8 != VAR_6)
        return VAR_0;
    return VAR_7->target == VAR_1 || VAR_7->target == VAR_2;
}
