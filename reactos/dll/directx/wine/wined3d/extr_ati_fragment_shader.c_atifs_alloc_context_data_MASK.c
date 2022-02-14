
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {struct atifs_context_private_data* fragment_pipe_data; } ;
struct atifs_context_private_data {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct atifs_context_private_data* FUNC_0 (int) ;

__attribute__((used)) static BOOL FUNC_1(struct wined3d_context *VAR_2)
{
    struct atifs_context_private_data *VAR_3;

    if (!(VAR_3 = FUNC_0(sizeof(*VAR_3))))
        return VAR_0;
    VAR_2->fragment_pipe_data = VAR_3;
    return VAR_1;
}
