
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {scalar_t__ id; scalar_t__ typeless_id; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_format *VAR_1)
{
    return VAR_1->id == VAR_1->typeless_id && VAR_1->id != VAR_0;
}
