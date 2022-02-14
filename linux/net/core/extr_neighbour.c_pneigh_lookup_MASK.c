
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pneigh_entry {struct pneigh_entry* next; struct net_device* dev; int key; int net; scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct neigh_table {unsigned int key_len; int lock; struct pneigh_entry** phash_buckets; scalar_t__ (* pconstructor ) (struct pneigh_entry*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct pneigh_entry* FUNC_1 (struct pneigh_entry*,struct net*,void const*,unsigned int,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pneigh_entry*) ;
 struct pneigh_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,void const*,unsigned int) ;
 size_t FUNC_7 (void const*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct pneigh_entry*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct net*) ;
 int FUNC_13 (int *) ;

struct pneigh_entry * FUNC_14(struct neigh_table *VAR_1,
        struct net *VAR_2, const void *VAR_3,
        struct net_device *VAR_4, int VAR_5)
{
 struct pneigh_entry *VAR_6;
 unsigned int VAR_7 = VAR_1->key_len;
 u32 VAR_8 = FUNC_7(VAR_3, VAR_7);

 FUNC_8(&VAR_1->lock);
 VAR_6 = FUNC_1(VAR_1->phash_buckets[VAR_8],
         VAR_2, VAR_3, VAR_7, VAR_4);
 FUNC_9(&VAR_1->lock);

 if (VAR_6 || !VAR_5)
  goto out;

 FUNC_0();

 VAR_6 = FUNC_5(sizeof(*VAR_6) + VAR_7, VAR_0);
 if (!VAR_6)
  goto out;

 VAR_6->protocol = 0;
 FUNC_12(&VAR_6->net, VAR_2);
 FUNC_6(VAR_6->key, VAR_3, VAR_7);
 VAR_6->dev = VAR_4;
 if (VAR_4)
  FUNC_2(VAR_4);

 if (VAR_1->pconstructor && VAR_1->pconstructor(VAR_6)) {
  if (VAR_4)
   FUNC_3(VAR_4);
  FUNC_4(VAR_6);
  VAR_6 = ((void*)0);
  goto out;
 }

 FUNC_11(&VAR_1->lock);
 VAR_6->next = VAR_1->phash_buckets[VAR_8];
 VAR_1->phash_buckets[VAR_8] = VAR_6;
 FUNC_13(&VAR_1->lock);
out:
 return VAR_6;
}
