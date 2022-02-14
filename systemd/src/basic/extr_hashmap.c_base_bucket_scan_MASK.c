
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct hashmap_base_entry {int key; } ;
typedef scalar_t__ dib_raw_t ;
struct TYPE_10__ {TYPE_1__* hash_ops; } ;
struct TYPE_9__ {scalar_t__ (* compare ) (int ,void const*) ;} ;
typedef TYPE_2__ HashmapBase ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct hashmap_base_entry* FUNC_1 (TYPE_2__*,unsigned int) ;
 unsigned int FUNC_2 (TYPE_2__*,unsigned int,scalar_t__) ;
 scalar_t__* FUNC_3 (TYPE_2__*) ;
 unsigned int FUNC_4 (TYPE_2__*) ;
 unsigned int FUNC_5 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_6 (int ,void const*) ;

__attribute__((used)) static unsigned FUNC_7(HashmapBase *VAR_2, unsigned VAR_3, const void *VAR_4) {
        struct hashmap_base_entry *VAR_5;
        unsigned VAR_6, VAR_7;
        dib_raw_t *VAR_8 = FUNC_3(VAR_2);

        FUNC_0(VAR_3 < FUNC_4(VAR_2));

        for (VAR_7 = 0; ; VAR_7++) {
                if (VAR_8[VAR_3] == VAR_0)
                        return VAR_1;

                VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_8[VAR_3]);

                if (VAR_6 < VAR_7)
                        return VAR_1;
                if (VAR_6 == VAR_7) {
                        VAR_5 = FUNC_1(VAR_2, VAR_3);
                        if (VAR_2->hash_ops->compare(VAR_5->key, VAR_4) == 0)
                                return VAR_3;
                }

                VAR_3 = FUNC_5(VAR_2, VAR_3);
        }
}
