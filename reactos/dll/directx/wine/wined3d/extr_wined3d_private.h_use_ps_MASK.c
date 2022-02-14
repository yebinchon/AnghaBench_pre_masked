
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int * shader; } ;
typedef int BOOL ;


 size_t VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_state *VAR_1)
{
    return !!VAR_1->shader[VAR_0];
}
