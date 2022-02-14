
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_3(const struct wined3d_gl_info *VAR_3)
{
    return VAR_3->supported[VAR_0]
            && (FUNC_0(VAR_1) || FUNC_1(VAR_1) || FUNC_2(VAR_2));
}
