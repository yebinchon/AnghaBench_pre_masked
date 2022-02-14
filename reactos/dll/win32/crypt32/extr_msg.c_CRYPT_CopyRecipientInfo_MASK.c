
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cbData; } ;
struct TYPE_6__ {int Issuer; int SerialNumber; } ;
struct TYPE_5__ {TYPE_4__ Issuer; TYPE_4__ SerialNumber; } ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CERT_ISSUER_SERIAL_NUMBER ;
typedef TYPE_2__ CERT_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_4__*,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,void*,...) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_3(void *VAR_3, DWORD *VAR_4,
 const CERT_ISSUER_SERIAL_NUMBER *VAR_5)
{
    DWORD VAR_6 = sizeof(CERT_INFO);
    BOOL VAR_7;

    FUNC_2("(%p, %d, %p)\n", VAR_3, VAR_3 ? *VAR_4 : 0, VAR_5);

    VAR_6 += VAR_5->SerialNumber.cbData;
    VAR_6 += VAR_5->Issuer.cbData;
    if (!VAR_3)
    {
        *VAR_4 = VAR_6;
        VAR_7 = VAR_2;
    }
    else if (*VAR_4 < VAR_6)
    {
        *VAR_4 = VAR_6;
        FUNC_1(VAR_0);
        VAR_7 = VAR_1;
    }
    else
    {
        LPBYTE VAR_8 = (BYTE *)VAR_3 + sizeof(CERT_INFO);
        CERT_INFO *VAR_9 = VAR_3;

        FUNC_0(&VAR_9->SerialNumber, &VAR_5->SerialNumber, &VAR_8);
        FUNC_0(&VAR_9->Issuer, &VAR_5->Issuer, &VAR_8);
        VAR_7 = VAR_2;
    }
    FUNC_2("returning %d\n", VAR_7);
    return VAR_7;
}
