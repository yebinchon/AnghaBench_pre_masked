
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int dib_raw_t ;
struct TYPE_7__ {int entry_size; } ;
struct TYPE_6__ {size_t type; } ;
typedef TYPE_1__ HashmapBase ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static dib_raw_t *FUNC_2(HashmapBase *VAR_1) {
        return (dib_raw_t*)
                ((uint8_t*) FUNC_1(VAR_1) + VAR_0[VAR_1->type].entry_size * FUNC_0(VAR_1));
}
