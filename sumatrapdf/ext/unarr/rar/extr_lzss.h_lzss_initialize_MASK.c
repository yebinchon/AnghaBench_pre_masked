
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; scalar_t__ position; int window; } ;
typedef TYPE_1__ LZSS ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline bool FUNC_3(LZSS *VAR_0, int VAR_1) {
    VAR_0->window = FUNC_1(VAR_1);
    if (!VAR_0->window)
        return 0;

    VAR_0->mask = VAR_1 - 1;
    FUNC_2(VAR_0->window, 0, FUNC_0(VAR_0));
    VAR_0->position = 0;
    return 1;
}
