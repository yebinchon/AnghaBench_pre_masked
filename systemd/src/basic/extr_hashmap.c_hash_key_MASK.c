
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * hash_key; } ;
struct TYPE_5__ {TYPE_1__ indirect; scalar_t__ has_indirect; } ;
typedef TYPE_2__ HashmapBase ;


 int * VAR_0 ;

__attribute__((used)) static uint8_t *FUNC_0(HashmapBase *VAR_1) {
        return VAR_1->has_indirect ? VAR_1->indirect.hash_key
                               : VAR_0;
}
