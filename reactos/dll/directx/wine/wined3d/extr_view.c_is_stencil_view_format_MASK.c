
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {scalar_t__ id; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_format *VAR_2)
{
    return VAR_2->id == VAR_0
            || VAR_2->id == VAR_1;
}
