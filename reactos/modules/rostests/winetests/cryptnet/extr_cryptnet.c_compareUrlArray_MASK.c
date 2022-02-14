
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cUrl; int * rgwszUrl; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CRYPT_URL_ARRAY ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,size_t,...) ;

__attribute__((used)) static void FUNC_2(const CRYPT_URL_ARRAY *VAR_0,
 const CRYPT_URL_ARRAY *VAR_1)
{
    FUNC_1(VAR_0->cUrl == VAR_1->cUrl, "Expected %d URLs, got %d\n",
     VAR_0->cUrl, VAR_1->cUrl);
    if (VAR_0->cUrl == VAR_1->cUrl)
    {
        DWORD VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1->cUrl; VAR_2++)
            FUNC_1(!FUNC_0(VAR_0->rgwszUrl[VAR_2], VAR_1->rgwszUrl[VAR_2]),
             "%d: unexpected URL\n", VAR_2);
    }
}
