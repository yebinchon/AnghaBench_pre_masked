
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINTN ;
struct TYPE_4__ {scalar_t__ tries_left; scalar_t__ tries_done; int id; } ;
typedef int INTN ;
typedef TYPE_1__ ConfigEntry ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static INTN FUNC_1(ConfigEntry *VAR_0, ConfigEntry *VAR_1) {
        INTN VAR_2;


        if (VAR_0->tries_left != 0 && VAR_1->tries_left == 0)
                return -1;
        if (VAR_0->tries_left == 0 && VAR_1->tries_left != 0)
                return 1;

        VAR_2 = FUNC_0(VAR_0->id, VAR_1->id);
        if (VAR_2 != 0)
                return VAR_2;

        if (VAR_0->tries_left == (UINTN) -1 ||
            VAR_1->tries_left == (UINTN) -1)
                return 0;


        if (VAR_0->tries_left > VAR_1->tries_left)
                return -1;
        if (VAR_0->tries_left < VAR_1->tries_left)
                return 1;


        if (VAR_0->tries_done < VAR_1->tries_done)
                return -1;
        if (VAR_0->tries_done > VAR_1->tries_done)
                return 1;

        return 0;
}
