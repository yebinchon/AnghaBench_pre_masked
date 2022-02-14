
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hv; int it; } ;
typedef TYPE_1__ lru_bump_entry ;
struct TYPE_5__ {int mutex; int buf; struct TYPE_5__* next; } ;
typedef TYPE_2__ lru_bump_buf ;


 scalar_t__ FUNC_0 (int ,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bool FUNC_8(void) {
    lru_bump_buf *VAR_2;
    lru_bump_entry *VAR_3;
    unsigned int VAR_4;
    unsigned int VAR_5;
    bool VAR_6 = 0;
    FUNC_6(&VAR_1);
    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2=VAR_2->next) {
        FUNC_6(&VAR_2->mutex);
        VAR_3 = (lru_bump_entry *) FUNC_0(VAR_2->buf, &VAR_4);
        FUNC_7(&VAR_2->mutex);

        if (VAR_3 == ((void*)0)) {
            continue;
        }
        VAR_5 = VAR_4;
        VAR_6 = 1;

        while (VAR_5) {
            FUNC_4(VAR_3->hv);
            FUNC_3(VAR_3->it);
            FUNC_2(VAR_3->it);
            FUNC_5(VAR_3->hv);
            VAR_3++;
            VAR_5 -= sizeof(lru_bump_entry);
        }

        FUNC_6(&VAR_2->mutex);
        VAR_3 = (lru_bump_entry *) FUNC_1(VAR_2->buf, VAR_4);
        FUNC_7(&VAR_2->mutex);
    }
    FUNC_7(&VAR_1);
    return VAR_6;
}
