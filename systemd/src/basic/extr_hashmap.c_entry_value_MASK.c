
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct plain_hashmap_entry {void* value; } ;
struct hashmap_base_entry {scalar_t__ key; } ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ HashmapBase ;





 int FUNC_0 (char*) ;

__attribute__((used)) static void *FUNC_1(HashmapBase *VAR_0, struct hashmap_base_entry *VAR_1) {
        switch (VAR_0->type) {

        case 129:
        case 130:
                return ((struct plain_hashmap_entry*)VAR_1)->value;

        case 128:
                return (void*) VAR_1->key;

        default:
                FUNC_0("Unknown hashmap type");
        }
}
