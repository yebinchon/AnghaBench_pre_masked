
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ encoding; scalar_t__ ii; int di; TYPE_2__* subject; } ;
typedef TYPE_1__ setTypeIterator ;
struct TYPE_7__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_2__ robj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;

setTypeIterator *FUNC_3(robj *VAR_2) {
    setTypeIterator *VAR_3 = FUNC_2(sizeof(setTypeIterator));
    VAR_3->subject = VAR_2;
    VAR_3->encoding = VAR_2->encoding;
    if (VAR_3->encoding == VAR_0) {
        VAR_3->di = FUNC_0(VAR_2->ptr);
    } else if (VAR_3->encoding == VAR_1) {
        VAR_3->ii = 0;
    } else {
        FUNC_1("Unknown set encoding");
    }
    return VAR_3;
}
