
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_2__ {scalar_t__ onlyuser; scalar_t__ onlyCA; scalar_t__ indirectCRL; scalar_t__ onlyattr; scalar_t__ onlysomereasons; scalar_t__ distpoint; } ;
typedef TYPE_1__ ISSUING_DIST_POINT ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(const X509V3_EXT_METHOD *VAR_0, void *VAR_1, BIO *VAR_2,
                   int VAR_3)
{
    ISSUING_DIST_POINT *VAR_4 = VAR_1;
    if (VAR_4->distpoint)
        FUNC_1(VAR_2, VAR_4->distpoint, VAR_3);
    if (VAR_4->onlyuser > 0)
        FUNC_0(VAR_2, "%*sOnly User Certificates\n", VAR_3, "");
    if (VAR_4->onlyCA > 0)
        FUNC_0(VAR_2, "%*sOnly CA Certificates\n", VAR_3, "");
    if (VAR_4->indirectCRL > 0)
        FUNC_0(VAR_2, "%*sIndirect CRL\n", VAR_3, "");
    if (VAR_4->onlysomereasons)
        FUNC_2(VAR_2, "Only Some Reasons", VAR_4->onlysomereasons, VAR_3);
    if (VAR_4->onlyattr > 0)
        FUNC_0(VAR_2, "%*sOnly Attribute Certificates\n", VAR_3, "");
    if (!VAR_4->distpoint && (VAR_4->onlyuser <= 0) && (VAR_4->onlyCA <= 0)
        && (VAR_4->indirectCRL <= 0) && !VAR_4->onlysomereasons
        && (VAR_4->onlyattr <= 0))
        FUNC_0(VAR_2, "%*s<EMPTY>\n", VAR_3, "");

    return 1;
}
