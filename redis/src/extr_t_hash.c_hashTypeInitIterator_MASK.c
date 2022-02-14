
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_7__ {scalar_t__ encoding; int di; int * vptr; int * fptr; TYPE_1__* subject; } ;
typedef TYPE_2__ hashTypeIterator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;

hashTypeIterator *FUNC_3(robj *VAR_2) {
    hashTypeIterator *VAR_3 = FUNC_2(sizeof(hashTypeIterator));
    VAR_3->subject = VAR_2;
    VAR_3->encoding = VAR_2->encoding;

    if (VAR_3->encoding == VAR_1) {
        VAR_3->fptr = ((void*)0);
        VAR_3->vptr = ((void*)0);
    } else if (VAR_3->encoding == VAR_0) {
        VAR_3->di = FUNC_0(VAR_2->ptr);
    } else {
        FUNC_1("Unknown hash encoding");
    }
    return VAR_3;
}
