
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * messageTime; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;


 int * FUNC_0 () ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(OSSL_CMP_PKIHEADER *VAR_0)
{
    if (!FUNC_2(VAR_0 != ((void*)0)))
        return 0;
    if (VAR_0->messageTime == ((void*)0)
            && (VAR_0->messageTime = FUNC_0()) == ((void*)0))
        return 0;
    return FUNC_1(VAR_0->messageTime, FUNC_3(((void*)0))) != ((void*)0);
}
