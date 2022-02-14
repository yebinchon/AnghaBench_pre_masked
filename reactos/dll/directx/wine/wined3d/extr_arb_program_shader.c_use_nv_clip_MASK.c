
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int quirks; scalar_t__* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_gl_info *VAR_2)
{
    return VAR_2->supported[VAR_0]
            && !(VAR_2->quirks & VAR_1);
}
