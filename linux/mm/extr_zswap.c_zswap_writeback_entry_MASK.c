
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int swp_entry_t ;
struct zswap_tree {int lock; int rbroot; } ;
struct zswap_header {int swpentry; } ;
struct zswap_entry {scalar_t__ offset; TYPE_1__* pool; int length; } ;
struct zpool {int dummy; } ;
struct writeback_control {int sync_mode; } ;
struct page {int dummy; } ;
struct crypto_comp {int dummy; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {int tfm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_3 (struct page*,struct writeback_control*,int ) ;
 int FUNC_4 (struct crypto_comp*,int *,int ,int *,unsigned int*) ;
 int VAR_5 ;
 struct crypto_comp** FUNC_5 (int ) ;
 int * FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 size_t FUNC_13 (int ) ;
 struct zswap_header* FUNC_14 (struct zpool*,unsigned long,int ) ;
 int FUNC_15 (struct zpool*,unsigned long) ;
 struct zswap_entry* FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (struct zswap_tree*,struct zswap_entry*) ;
 int FUNC_18 (int ,struct page**) ;
 struct zswap_entry* FUNC_19 (int *,scalar_t__) ;
 struct zswap_tree** VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_20(struct zpool *VAR_8, unsigned long VAR_9)
{
 struct zswap_header *VAR_10;
 swp_entry_t VAR_11;
 struct zswap_tree *VAR_12;
 pgoff_t VAR_13;
 struct zswap_entry *VAR_14;
 struct page *VAR_15;
 struct crypto_comp *VAR_16;
 u8 *VAR_17, *VAR_18;
 unsigned int VAR_19;
 int VAR_20;
 struct writeback_control VAR_21 = {
  .sync_mode = VAR_3,
 };


 VAR_10 = FUNC_14(VAR_8, VAR_9, VAR_4);
 VAR_11 = VAR_10->swpentry;
 VAR_12 = VAR_6[FUNC_13(VAR_11)];
 VAR_13 = FUNC_12(VAR_11);


 FUNC_10(&VAR_12->lock);
 VAR_14 = FUNC_16(&VAR_12->rbroot, VAR_13);
 if (!VAR_14) {

  FUNC_11(&VAR_12->lock);
  FUNC_15(VAR_8, VAR_9);
  return 0;
 }
 FUNC_11(&VAR_12->lock);
 FUNC_0(VAR_13 != VAR_14->offset);


 switch (FUNC_18(VAR_11, &VAR_15)) {
 case 129:
  VAR_20 = -VAR_1;
  goto fail;

 case 130:

  FUNC_9(VAR_15);
  VAR_20 = -VAR_0;
  goto fail;

 case 128:

  VAR_19 = VAR_2;
  VAR_17 = (u8 *)VAR_10 + sizeof(struct zswap_header);
  VAR_18 = FUNC_6(VAR_15);
  VAR_16 = *FUNC_5(VAR_14->pool->tfm);
  VAR_20 = FUNC_4(VAR_16, VAR_17, VAR_14->length,
          VAR_18, &VAR_19);
  FUNC_8(VAR_14->pool->tfm);
  FUNC_7(VAR_18);
  FUNC_0(VAR_20);
  FUNC_0(VAR_19 != VAR_2);


  FUNC_2(VAR_15);
 }


 FUNC_1(VAR_15);


 FUNC_3(VAR_15, &VAR_21, VAR_5);
 FUNC_9(VAR_15);
 VAR_7++;

 FUNC_10(&VAR_12->lock);

 FUNC_17(VAR_12, VAR_14);
 if (VAR_14 == FUNC_19(&VAR_12->rbroot, VAR_13))
  FUNC_17(VAR_12, VAR_14);
 FUNC_11(&VAR_12->lock);

 goto end;
fail:
 FUNC_10(&VAR_12->lock);
 FUNC_17(VAR_12, VAR_14);
 FUNC_11(&VAR_12->lock);

end:
 FUNC_15(VAR_8, VAR_9);
 return VAR_20;
}
