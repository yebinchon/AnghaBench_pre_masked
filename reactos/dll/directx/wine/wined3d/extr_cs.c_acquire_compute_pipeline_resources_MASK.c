
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int * unordered_access_view; int * shader; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct wined3d_state const*,unsigned int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_state *VAR_2)
{
    FUNC_0(VAR_2, 1u << VAR_1);
    FUNC_1(VAR_2->shader[VAR_1],
            VAR_2->unordered_access_view[VAR_0]);
}
