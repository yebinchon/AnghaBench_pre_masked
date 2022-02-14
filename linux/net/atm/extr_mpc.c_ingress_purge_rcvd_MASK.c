
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpoa_client {TYPE_4__* in_ops; int ingress_lock; TYPE_3__* dev; } ;
struct TYPE_5__ {int in_dst_ip; } ;
struct TYPE_6__ {TYPE_1__ in_info; } ;
struct k_message {int ip_mask; TYPE_2__ content; } ;
typedef int in_cache_entry ;
typedef int __be32 ;
struct TYPE_8__ {int * (* get_with_mask ) (int ,struct mpoa_client*,int ) ;int (* put ) (int *) ;int (* remove_entry ) (int *,struct mpoa_client*) ;} ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (char*,int ,int *) ;
 int * FUNC_2 (int ,struct mpoa_client*,int ) ;
 int FUNC_3 (int *,struct mpoa_client*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,struct mpoa_client*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct k_message *VAR_0, struct mpoa_client *VAR_1)
{
 __be32 VAR_2 = VAR_0->content.in_info.in_dst_ip;
 __be32 VAR_3 = VAR_0->ip_mask;
 in_cache_entry *VAR_4 = VAR_1->in_ops->get_with_mask(VAR_2, VAR_1, VAR_3);

 if (VAR_4 == ((void*)0)) {
  FUNC_1("(%s) purge for a non-existing entry, ip = %pI4\n",
   VAR_1->dev->name, &VAR_2);
  return;
 }

 do {
  FUNC_0("(%s) removing an ingress entry, ip = %pI4\n",
   VAR_1->dev->name, &VAR_2);
  FUNC_6(&VAR_1->ingress_lock);
  VAR_1->in_ops->remove_entry(VAR_4, VAR_1);
  FUNC_7(&VAR_1->ingress_lock);
  VAR_1->in_ops->put(VAR_4);
  VAR_4 = VAR_1->in_ops->get_with_mask(VAR_2, VAR_1, VAR_3);
 } while (VAR_4 != ((void*)0));
}
