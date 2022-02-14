
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {int fbo_entry_count; } ;
struct fbo_entry {int entry; scalar_t__ id; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct wined3d_context*,scalar_t__) ;
 int FUNC_2 (struct fbo_entry*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_0, struct fbo_entry *VAR_1)
{
    if (VAR_1->id)
    {
        FUNC_0("Destroy FBO %u.\n", VAR_1->id);
        FUNC_1(VAR_0, VAR_1->id);
    }
    --VAR_0->fbo_entry_count;
    FUNC_3(&VAR_1->entry);
    FUNC_2(VAR_1);
}
