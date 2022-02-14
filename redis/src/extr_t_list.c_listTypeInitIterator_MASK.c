
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_7__ {scalar_t__ encoding; unsigned char direction; TYPE_1__* subject; int * iter; } ;
typedef TYPE_2__ listTypeIterator ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int,long) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;

listTypeIterator *FUNC_3(robj *VAR_4, long VAR_5,
                                       unsigned char VAR_6) {
    listTypeIterator *VAR_7 = FUNC_2(sizeof(listTypeIterator));
    VAR_7->subject = VAR_4;
    VAR_7->encoding = VAR_4->encoding;
    VAR_7->direction = VAR_6;
    VAR_7->iter = ((void*)0);


    int VAR_8 =
        VAR_6 == VAR_2 ? VAR_1 : VAR_0;
    if (VAR_7->encoding == VAR_3) {
        VAR_7->iter = FUNC_0(VAR_7->subject->ptr,
                                             VAR_8, VAR_5);
    } else {
        FUNC_1("Unknown list encoding");
    }
    return VAR_7;
}
