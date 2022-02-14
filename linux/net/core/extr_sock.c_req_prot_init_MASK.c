
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock_ops {int slab; int obj_size; int slab_name; } ;
struct proto {int slab_flags; int name; struct request_sock_ops* rsk_prot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int,int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(const struct proto *VAR_3)
{
 struct request_sock_ops *VAR_4 = VAR_3->rsk_prot;

 if (!VAR_4)
  return 0;

 VAR_4->slab_name = FUNC_0(VAR_1, "request_sock_%s",
     VAR_3->name);
 if (!VAR_4->slab_name)
  return -VAR_0;

 VAR_4->slab = FUNC_1(VAR_4->slab_name,
        VAR_4->obj_size, 0,
        VAR_2 | VAR_3->slab_flags,
        ((void*)0));

 if (!VAR_4->slab) {
  FUNC_2("%s: Can't create request sock SLAB cache!\n",
   VAR_3->name);
  return -VAR_0;
 }
 return 0;
}
