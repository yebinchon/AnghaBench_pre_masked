
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t len; int buffer; } ;
typedef int BUFFER_OVERFLOW_EOF ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,size_t,size_t) ;
 int FUNC_3 (int ,size_t) ;

void FUNC_4(BUFFER *VAR_2, size_t VAR_3) {
    FUNC_0(VAR_2);

    size_t VAR_4 = VAR_2->size - VAR_2->len;

    if(VAR_4 >= VAR_3) return;

    size_t VAR_5 = VAR_3 - VAR_4;
    if(VAR_5 < VAR_1) VAR_5 = VAR_1;

    FUNC_2(VAR_0, "Increasing data buffer from size %zu to %zu.", VAR_2->size, VAR_2->size + VAR_5);

    VAR_2->buffer = FUNC_3(VAR_2->buffer, VAR_2->size + VAR_5 + sizeof(BUFFER_OVERFLOW_EOF) + 2);
    VAR_2->size += VAR_5;

    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
}
