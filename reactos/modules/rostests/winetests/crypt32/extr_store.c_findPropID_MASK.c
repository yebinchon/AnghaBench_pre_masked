
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CertPropIDHeader {int cb; int propID; } ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const struct CertPropIDHeader *FUNC_0(const BYTE *VAR_2, DWORD VAR_3,
 DWORD VAR_4)
{
    const struct CertPropIDHeader *VAR_5 = ((void*)0);
    BOOL VAR_6 = VAR_0;

    while (VAR_3 && !VAR_5 && !VAR_6)
    {
        if (VAR_3 < sizeof(struct CertPropIDHeader))
            VAR_6 = VAR_1;
        else
        {
            const struct CertPropIDHeader *VAR_7 =
             (const struct CertPropIDHeader *)VAR_2;

            VAR_3 -= sizeof(struct CertPropIDHeader);
            VAR_2 += sizeof(struct CertPropIDHeader);
            if (VAR_3 < VAR_7->cb)
                VAR_6 = VAR_1;
            else if (VAR_7->propID == VAR_4)
                VAR_5 = VAR_7;
            else
            {
                VAR_2 += VAR_7->cb;
                VAR_3 -= VAR_7->cb;
            }
        }
    }
    return VAR_5;
}
