
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct hashmap_base_entry {int dummy; } ;
struct TYPE_6__ {unsigned int entry_size; } ;
struct TYPE_5__ {size_t type; } ;
typedef TYPE_1__ HashmapBase ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static struct hashmap_base_entry *FUNC_1(HashmapBase *VAR_1, unsigned VAR_2) {
        return (struct hashmap_base_entry*)
                ((uint8_t*) FUNC_0(VAR_1) + VAR_2 * VAR_0[VAR_1->type].entry_size);
}
