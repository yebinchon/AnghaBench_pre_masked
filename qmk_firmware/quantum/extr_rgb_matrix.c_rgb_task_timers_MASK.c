
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ any_key_hit; } ;
struct TYPE_3__ {size_t count; scalar_t__* tick; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void) {

    uint16_t VAR_5 = FUNC_0(VAR_4);
    VAR_4 = FUNC_1();
    if (VAR_2.any_key_hit < VAR_1) {
        if (VAR_1 - VAR_5 < VAR_2.any_key_hit) {
            VAR_2.any_key_hit = VAR_1;
        } else {
            VAR_2.any_key_hit += VAR_5;
        }
    }
}
