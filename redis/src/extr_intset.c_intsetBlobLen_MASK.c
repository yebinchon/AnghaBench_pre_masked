
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding; int length; } ;
typedef TYPE_1__ intset ;


 int FUNC_0 (int ) ;

size_t FUNC_1(intset *VAR_0) {
    return sizeof(intset)+FUNC_0(VAR_0->length)*FUNC_0(VAR_0->encoding);
}
