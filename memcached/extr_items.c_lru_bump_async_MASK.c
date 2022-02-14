
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int hv; int * it; } ;
typedef TYPE_1__ lru_bump_entry ;
struct TYPE_5__ {int mutex; int dropped; int buf; } ;
typedef TYPE_2__ lru_bump_buf ;
typedef int item ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(lru_bump_buf *VAR_0, item *VAR_1, uint32_t VAR_2) {
    bool VAR_3 = 1;
    FUNC_5(VAR_1);
    FUNC_2(&VAR_0->mutex);
    lru_bump_entry *VAR_4 = (lru_bump_entry *) FUNC_1(VAR_0->buf, sizeof(lru_bump_entry));
    if (VAR_4 != ((void*)0)) {
        VAR_4->it = VAR_1;
        VAR_4->hv = VAR_2;
        if (FUNC_0(VAR_0->buf, sizeof(lru_bump_entry)) == 0) {
            VAR_3 = 0;
            VAR_0->dropped++;
        }
    } else {
        VAR_3 = 0;
        VAR_0->dropped++;
    }
    if (!VAR_3) {
        FUNC_4(VAR_1);
    }
    FUNC_3(&VAR_0->mutex);
    return VAR_3;
}
