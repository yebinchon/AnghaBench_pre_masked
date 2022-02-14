
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version; int * sct; int * log_id; } ;
typedef TYPE_1__ SCT ;




 int FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const SCT *VAR_0)
{
    switch (VAR_0->version) {
    case 129:
        return 0;
    case 128:
        return VAR_0->log_id != ((void*)0) && FUNC_0(VAR_0);
    default:
        return VAR_0->sct != ((void*)0);
    }
}
