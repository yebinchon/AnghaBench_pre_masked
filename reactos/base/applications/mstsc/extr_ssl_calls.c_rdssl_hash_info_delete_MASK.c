
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_context {scalar_t__ hCryptProv; scalar_t__ hHash; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (void*) ;

void
FUNC_3(void* VAR_0)
{
    struct hash_context *VAR_1 = VAR_0;
    if (!VAR_1)
    {

        return;
    }
    if (VAR_1->hHash)
    {
        FUNC_0(VAR_1->hHash);
    }
    if (VAR_1->hCryptProv)
    {
        FUNC_1(VAR_1->hCryptProv, 0);
    }
    FUNC_2(VAR_0);
}
