
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_state {int * transforms; } ;
struct wined3d_matrix {int dummy; } ;
struct wined3d_context {scalar_t__ last_was_rhw; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct wined3d_matrix*) ;
 int FUNC_2 (struct wined3d_matrix*,int *,int *) ;

void FUNC_3(const struct wined3d_context *VAR_1, const struct wined3d_state *VAR_2,
        unsigned int VAR_3, struct wined3d_matrix *VAR_4)
{
    if (VAR_1->last_was_rhw)
        FUNC_1(VAR_4);
    else
        FUNC_2(VAR_4, &VAR_2->transforms[VAR_0], &VAR_2->transforms[FUNC_0(VAR_3)]);
}
