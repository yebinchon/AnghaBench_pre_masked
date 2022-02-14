
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct zswap_tree {int lock; int rbroot; } ;
struct zswap_header {int dummy; } ;
struct zswap_entry {int handle; TYPE_1__* pool; int length; int value; } ;
struct page {int dummy; } ;
struct crypto_comp {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_2__ {int zpool; int tfm; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_comp*,int *,int ,int *,unsigned int*) ;
 struct crypto_comp** FUNC_2 (int ) ;
 int * FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 struct zswap_entry* FUNC_11 (int *,int ) ;
 int FUNC_12 (struct zswap_tree*,struct zswap_entry*) ;
 int FUNC_13 (int *,int ) ;
 struct zswap_tree** VAR_2 ;

__attribute__((used)) static int FUNC_14(unsigned VAR_3, pgoff_t VAR_4,
    struct page *VAR_5)
{
 struct zswap_tree *VAR_6 = VAR_2[VAR_3];
 struct zswap_entry *VAR_7;
 struct crypto_comp *VAR_8;
 u8 *VAR_9, *VAR_10;
 unsigned int VAR_11;
 int VAR_12;


 FUNC_6(&VAR_6->lock);
 VAR_7 = FUNC_11(&VAR_6->rbroot, VAR_4);
 if (!VAR_7) {

  FUNC_7(&VAR_6->lock);
  return -1;
 }
 FUNC_7(&VAR_6->lock);

 if (!VAR_7->length) {
  VAR_10 = FUNC_3(VAR_5);
  FUNC_13(VAR_10, VAR_7->value);
  FUNC_4(VAR_10);
  goto freeentry;
 }


 VAR_11 = VAR_0;
 VAR_9 = FUNC_9(VAR_7->pool->zpool, VAR_7->handle, VAR_1);
 if (FUNC_8(VAR_7->pool->zpool))
  VAR_9 += sizeof(struct zswap_header);
 VAR_10 = FUNC_3(VAR_5);
 VAR_8 = *FUNC_2(VAR_7->pool->tfm);
 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_7->length, VAR_10, &VAR_11);
 FUNC_5(VAR_7->pool->tfm);
 FUNC_4(VAR_10);
 FUNC_10(VAR_7->pool->zpool, VAR_7->handle);
 FUNC_0(VAR_12);

freeentry:
 FUNC_6(&VAR_6->lock);
 FUNC_12(VAR_6, VAR_7);
 FUNC_7(&VAR_6->lock);

 return 0;
}
