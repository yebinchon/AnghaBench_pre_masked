
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proto {int slab_flags; int * slab; int rsk_prot; TYPE_1__* twsk_prot; int node; int name; int usersize; int useroffset; int obj_size; } ;
struct TYPE_2__ {int * twsk_slab_name; int * twsk_slab; int twsk_obj_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proto*) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,int,int *) ;
 int * FUNC_4 (int ,int ,int ,int,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct proto*) ;

int FUNC_12(struct proto *VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_0;

 if (VAR_7) {
  VAR_6->slab = FUNC_4(VAR_6->name,
     VAR_6->obj_size, 0,
     VAR_3 | VAR_2 |
     VAR_6->slab_flags,
     VAR_6->useroffset, VAR_6->usersize,
     ((void*)0));

  if (VAR_6->slab == ((void*)0)) {
   FUNC_9("%s: Can't create sock SLAB cache!\n",
    VAR_6->name);
   goto out;
  }

  if (FUNC_11(VAR_6))
   goto out_free_request_sock_slab;

  if (VAR_6->twsk_prot != ((void*)0)) {
   VAR_6->twsk_prot->twsk_slab_name = FUNC_1(VAR_1, "tw_sock_%s", VAR_6->name);

   if (VAR_6->twsk_prot->twsk_slab_name == ((void*)0))
    goto out_free_request_sock_slab;

   VAR_6->twsk_prot->twsk_slab =
    FUNC_3(VAR_6->twsk_prot->twsk_slab_name,
        VAR_6->twsk_prot->twsk_obj_size,
        0,
        VAR_2 |
        VAR_6->slab_flags,
        ((void*)0));
   if (VAR_6->twsk_prot->twsk_slab == ((void*)0))
    goto out_free_timewait_sock_slab_name;
  }
 }

 FUNC_7(&VAR_5);
 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8) {
  FUNC_8(&VAR_5);
  goto out_free_timewait_sock_slab_name;
 }
 FUNC_6(&VAR_6->node, &VAR_4);
 FUNC_8(&VAR_5);
 return VAR_8;

out_free_timewait_sock_slab_name:
 if (VAR_7 && VAR_6->twsk_prot)
  FUNC_2(VAR_6->twsk_prot->twsk_slab_name);
out_free_request_sock_slab:
 if (VAR_7) {
  FUNC_10(VAR_6->rsk_prot);

  FUNC_5(VAR_6->slab);
  VAR_6->slab = ((void*)0);
 }
out:
 return VAR_8;
}
