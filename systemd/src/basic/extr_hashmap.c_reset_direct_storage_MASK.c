
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hashmap_type_info {int entry_size; int n_direct_buckets; } ;
typedef int dib_raw_t ;
struct TYPE_4__ {int storage; } ;
struct TYPE_5__ {size_t type; TYPE_1__ direct; int has_indirect; } ;
typedef TYPE_2__ HashmapBase ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct hashmap_type_info* VAR_1 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static void FUNC_3(HashmapBase *VAR_2) {
        const struct hashmap_type_info *VAR_3 = &VAR_1[VAR_2->type];
        void *VAR_4;

        FUNC_0(!VAR_2->has_indirect);

        VAR_4 = FUNC_1(VAR_2->direct.storage, 0, VAR_3->entry_size * VAR_3->n_direct_buckets);
        FUNC_2(VAR_4, VAR_0, sizeof(dib_raw_t) * VAR_3->n_direct_buckets);
}
