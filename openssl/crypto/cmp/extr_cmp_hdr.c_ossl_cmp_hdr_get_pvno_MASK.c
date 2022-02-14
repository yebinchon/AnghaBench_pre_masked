
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {int pvno; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;


 int FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

int FUNC_2(const OSSL_CMP_PKIHEADER *VAR_1)
{
    int64_t VAR_2;

    if (!FUNC_1(VAR_1 != ((void*)0)))
        return -1;
    if (!FUNC_0(&VAR_2, VAR_1->pvno) || VAR_2 < 0 || VAR_2 > VAR_0)
        return -1;
    return (int)VAR_2;
}
