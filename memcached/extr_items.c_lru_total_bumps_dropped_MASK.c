
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int mutex; scalar_t__ dropped; struct TYPE_3__* next; } ;
typedef TYPE_1__ lru_bump_buf ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static uint64_t FUNC_2(void) {
    uint64_t VAR_2 = 0;
    lru_bump_buf *VAR_3;
    FUNC_0(&VAR_1);
    for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3=VAR_3->next) {
        FUNC_0(&VAR_3->mutex);
        VAR_2 += VAR_3->dropped;
        FUNC_1(&VAR_3->mutex);
    }
    FUNC_1(&VAR_1);
    return VAR_2;
}
