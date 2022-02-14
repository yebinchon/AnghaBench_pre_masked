
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {unsigned int pow2_height; } ;


 unsigned int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct wined3d_texture *VAR_0,
        unsigned int VAR_1)
{
    return FUNC_0(1, VAR_0->pow2_height >> VAR_1);
}
