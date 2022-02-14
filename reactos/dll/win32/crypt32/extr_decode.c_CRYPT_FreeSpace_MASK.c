
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* pfnFree ) (int ) ;} ;
typedef int LPVOID ;
typedef TYPE_1__ CRYPT_DECODE_PARA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const CRYPT_DECODE_PARA *VAR_0, LPVOID VAR_1)
{
    if (VAR_0 && VAR_0->pfnFree)
        VAR_0->pfnFree(VAR_1);
    else
        FUNC_0(VAR_1);
}
