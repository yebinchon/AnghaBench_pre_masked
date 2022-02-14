
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvenc_data {int session; } ;
struct nv_texture {TYPE_2__* tex; scalar_t__ res; scalar_t__ mapped_res; } ;
struct TYPE_6__ {int (* nvEncUnregisterResource ) (int ,scalar_t__) ;int (* nvEncUnmapInputResource ) (int ,scalar_t__) ;} ;
struct TYPE_5__ {TYPE_1__* lpVtbl; } ;
struct TYPE_4__ {int (* Release ) (TYPE_2__*) ;} ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct nvenc_data *VAR_1, struct nv_texture *VAR_2)
{
 if (VAR_2->res) {
  if (VAR_2->mapped_res) {
   VAR_0.nvEncUnmapInputResource(VAR_1->session,
         VAR_2->mapped_res);
  }
  VAR_0.nvEncUnregisterResource(VAR_1->session, VAR_2->res);
  VAR_2->tex->lpVtbl->Release(VAR_2->tex);
 }
}
