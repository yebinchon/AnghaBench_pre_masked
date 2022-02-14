
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_4__ {scalar_t__ alloc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int const*,int) ;

int
FUNC_1(xmlBufferPtr VAR_1, const xmlChar *VAR_2) {
    if (VAR_1 == ((void*)0))
        return(-1);
    if (VAR_1->alloc == VAR_0) return -1;
    if (VAR_2 == ((void*)0)) return -1;
    return FUNC_0(VAR_1, VAR_2, -1);
}
