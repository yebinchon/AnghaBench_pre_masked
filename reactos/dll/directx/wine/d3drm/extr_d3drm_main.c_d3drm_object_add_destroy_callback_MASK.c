
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct destroy_callback {int entry; void* ctx; scalar_t__ cb; } ;
struct d3drm_object {int destroy_callbacks; } ;
typedef int HRESULT ;
typedef scalar_t__ D3DRMOBJECTCALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct destroy_callback* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

HRESULT FUNC_2(struct d3drm_object *VAR_3, D3DRMOBJECTCALLBACK VAR_4, void *VAR_5)
{
    struct destroy_callback *VAR_6;

    if (!VAR_4)
        return VAR_0;

    if (!(VAR_6 = FUNC_0(sizeof(*VAR_6))))
        return VAR_2;

    VAR_6->cb = VAR_4;
    VAR_6->ctx = VAR_5;

    FUNC_1(&VAR_3->destroy_callbacks, &VAR_6->entry);
    return VAR_1;
}
