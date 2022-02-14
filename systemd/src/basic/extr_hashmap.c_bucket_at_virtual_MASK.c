
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
struct hashmap_base_entry {int dummy; } ;
struct TYPE_3__ {struct hashmap_base_entry b; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
typedef int HashmapBase ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 struct hashmap_base_entry* FUNC_1 (int *,unsigned int) ;
 TYPE_2__* FUNC_2 (struct swap_entries*,unsigned int) ;

__attribute__((used)) static struct hashmap_base_entry *FUNC_3(HashmapBase *VAR_2, struct swap_entries *VAR_3,
                                                    unsigned VAR_4) {
        if (VAR_4 < VAR_0)
                return FUNC_1(VAR_2, VAR_4);

        if (VAR_4 < VAR_1)
                return &FUNC_2(VAR_3, VAR_4)->p.b;

        FUNC_0("Invalid index");
}
