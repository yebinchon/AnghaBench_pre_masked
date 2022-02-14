
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {int fbo_destroy_list; } ;
struct fbo_entry {int entry; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_context *VAR_0, struct fbo_entry *VAR_1)
{
    FUNC_1(&VAR_1->entry);
    FUNC_0(&VAR_0->fbo_destroy_list, &VAR_1->entry);
}
