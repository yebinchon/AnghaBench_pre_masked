
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int action_t ;
struct TYPE_5__ {int key; int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(bool VAR_2) {
    if (VAR_0 == 0) {
        return;
    }

    if (VAR_2) {
        for (uint8_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {




            FUNC_1(VAR_1[VAR_3]);
            FUNC_2();

        }
    }

    VAR_0 = 0;
}
