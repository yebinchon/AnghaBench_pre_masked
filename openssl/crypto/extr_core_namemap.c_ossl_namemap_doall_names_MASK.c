
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int number; void (* fn ) (char const*,void*) ;void* data; } ;
struct TYPE_5__ {int lock; int namenum; } ;
typedef TYPE_1__ OSSL_NAMEMAP ;
typedef TYPE_2__ DOALL_NAMES_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

void FUNC_3(const OSSL_NAMEMAP *VAR_1, int VAR_2,
                              void (*VAR_3)(const char *VAR_4, void *VAR_5),
                              void *VAR_6)
{
    DOALL_NAMES_DATA VAR_7;

    VAR_7.number = VAR_2;
    VAR_7.fn = VAR_3;
    VAR_7.data = VAR_6;
    FUNC_0(VAR_1->lock);
    FUNC_2(VAR_1->namenum, VAR_0,
                                            &VAR_7);
    FUNC_1(VAR_1->lock);
}
