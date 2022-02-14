
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamHC_t ;
typedef int BYTE ;


 int FUNC_0 (int *,int const*) ;
 TYPE_1__* FUNC_1 (void*,int) ;

int FUNC_2(void* VAR_0, char* VAR_1)
{
    LZ4_streamHC_t* const VAR_2 = FUNC_1(VAR_0, sizeof(*VAR_2));
    if (VAR_2 == ((void*)0)) return 1;
    FUNC_0 (&VAR_2->internal_donotuse, (const BYTE*)VAR_1);
    return 0;
}
