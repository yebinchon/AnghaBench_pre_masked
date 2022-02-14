
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_2__ {scalar_t__ excludedSubtrees; scalar_t__ permittedSubtrees; } ;
typedef TYPE_1__ NAME_CONSTRAINTS ;
typedef int BIO ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int const*,scalar_t__,int *,int,char*) ;

__attribute__((used)) static int FUNC_2(const X509V3_EXT_METHOD *VAR_0, void *VAR_1,
                                BIO *VAR_2, int VAR_3)
{
    NAME_CONSTRAINTS *VAR_4 = VAR_1;
    FUNC_1(VAR_0, VAR_4->permittedSubtrees,
                            VAR_2, VAR_3, "Permitted");
    if (VAR_4->permittedSubtrees && VAR_4->excludedSubtrees)
        FUNC_0(VAR_2, "\n");
    FUNC_1(VAR_0, VAR_4->excludedSubtrees,
                            VAR_2, VAR_3, "Excluded");
    return 1;
}
