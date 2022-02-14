
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cAttr; int * rgAttr; } ;
typedef TYPE_1__ CRYPT_ATTRIBUTES ;
typedef int CRYPT_ATTRIBUTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int *,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static BOOL FUNC_2(CRYPT_ATTRIBUTES *VAR_1,
 const CRYPT_ATTRIBUTE *VAR_2)
{
    BOOL VAR_3 = VAR_0;

    VAR_1->rgAttr = FUNC_1(VAR_1->rgAttr,
     (VAR_1->cAttr + 1) * sizeof(CRYPT_ATTRIBUTE));
    if (VAR_1->rgAttr)
    {
        VAR_3 = FUNC_0(&VAR_1->rgAttr[VAR_1->cAttr], VAR_2);
        if (VAR_3)
            VAR_1->cAttr++;
    }
    return VAR_3;
}
