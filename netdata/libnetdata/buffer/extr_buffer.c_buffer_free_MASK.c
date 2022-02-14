
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* buffer; int size; } ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BUFFER *VAR_1) {
    if(FUNC_3(!VAR_1)) return;

    FUNC_0(VAR_1);

    FUNC_1(VAR_0, "Freeing web buffer of size %zu.", VAR_1->size);

    FUNC_2(VAR_1->buffer);
    FUNC_2(VAR_1);
}
