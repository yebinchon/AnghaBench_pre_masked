
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; int * chm_file; } ;
typedef TYPE_1__ ITSProtocol ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ITSProtocol *VAR_0)
{
    if(VAR_0->chm_file) {
        FUNC_0(VAR_0->chm_file);
        VAR_0->chm_file = ((void*)0);
    }
    VAR_0->offset = 0;
}
