
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {int lowest_disabled_stage; } ;
typedef int BOOL ;



__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_context *VAR_0)
{
    return VAR_0->lowest_disabled_stage < 7;
}
