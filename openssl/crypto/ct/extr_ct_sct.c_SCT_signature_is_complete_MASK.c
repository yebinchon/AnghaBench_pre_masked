
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sig_len; int * sig; } ;
typedef TYPE_1__ SCT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

int FUNC_1(const SCT *VAR_1)
{
    return FUNC_0(VAR_1) != VAR_0 &&
        VAR_1->sig != ((void*)0) && VAR_1->sig_len > 0;
}
