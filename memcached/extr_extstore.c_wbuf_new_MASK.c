
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t free; size_t size; int * buf; int * buf_pos; } ;
typedef TYPE_1__ _store_wbuf ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (size_t) ;

__attribute__((used)) static _store_wbuf *FUNC_3(size_t VAR_0) {
    _store_wbuf *VAR_1 = FUNC_0(1, sizeof(_store_wbuf));
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_1->buf = FUNC_2(VAR_0);
    if (VAR_1->buf == ((void*)0)) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    VAR_1->buf_pos = VAR_1->buf;
    VAR_1->free = VAR_0;
    VAR_1->size = VAR_0;
    return VAR_1;
}
