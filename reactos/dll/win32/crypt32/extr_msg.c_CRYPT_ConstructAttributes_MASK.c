
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cAttr; int * rgAttr; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CRYPT_ATTRIBUTES ;
typedef int CRYPT_ATTRIBUTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static BOOL FUNC_3(CRYPT_ATTRIBUTES *VAR_2,
 const CRYPT_ATTRIBUTES *VAR_3)
{
    BOOL VAR_4 = VAR_1;

    VAR_2->cAttr = VAR_3->cAttr;
    if (VAR_2->cAttr)
    {
        VAR_2->rgAttr = FUNC_1(VAR_2->cAttr * sizeof(CRYPT_ATTRIBUTE));
        if (VAR_2->rgAttr)
        {
            DWORD VAR_5;

            FUNC_2(VAR_2->rgAttr, 0, VAR_2->cAttr * sizeof(CRYPT_ATTRIBUTE));
            for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_2->cAttr; VAR_5++)
                VAR_4 = FUNC_0(&VAR_2->rgAttr[VAR_5], &VAR_3->rgAttr[VAR_5]);
        }
        else
            VAR_4 = VAR_0;
    }
    else
        VAR_2->rgAttr = ((void*)0);
    return VAR_4;
}
