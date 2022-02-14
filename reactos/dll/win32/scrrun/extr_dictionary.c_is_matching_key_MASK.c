
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keyitem_pair {scalar_t__ hash; int const key; } ;
typedef int dictionary ;
typedef int VARIANT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,int const*) ;

__attribute__((used)) static BOOL FUNC_2(const dictionary *VAR_1, const struct keyitem_pair *VAR_2, const VARIANT *VAR_3, DWORD VAR_4)
{
    if (FUNC_0(VAR_3) && FUNC_0(&VAR_2->key)) {
        if (VAR_4 != VAR_2->hash)
            return VAR_0;

        return FUNC_1(VAR_1, VAR_3, &VAR_2->key) == 0;
    }

    if ((FUNC_0(VAR_3) && !FUNC_0(&VAR_2->key)) ||
        (!FUNC_0(VAR_3) && FUNC_0(&VAR_2->key)))
        return VAR_0;


    return VAR_4 == VAR_2->hash;
}
