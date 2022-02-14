
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WIN_CERTIFICATE ;
struct TYPE_5__ {int dwLength; int bCertificate; int wCertificateType; int wRevision; } ;
typedef TYPE_1__* LPWIN_CERTIFICATE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char const*,int) ;
 scalar_t__ FUNC_2 (int ,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 TYPE_1__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (scalar_t__,TYPE_1__*,int*) ;
 int FUNC_9 (char*,...) ;
 int VAR_9 ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static DWORD FUNC_11(const char *VAR_10, int VAR_11)
{
    HANDLE VAR_12;
    LPWIN_CERTIFICATE VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    BOOL VAR_16;

    VAR_12 = FUNC_2(VAR_9, VAR_2 | VAR_3, VAR_1, ((void*)0), VAR_6, VAR_0, ((void*)0));

    if (VAR_12 == VAR_5)
    {
        FUNC_9("Unable to open %s, skipping test\n", VAR_9);
        return ~0;
    }

    VAR_14 = sizeof(WIN_CERTIFICATE) + VAR_11;
    VAR_13 = FUNC_5(FUNC_4(), VAR_4, VAR_14);

    if (!VAR_13)
    {
        FUNC_9("Unable to allocate memory, skipping test\n");
        FUNC_0(VAR_12);
        return ~0;
    }

    VAR_13->dwLength = VAR_14;
    VAR_13->wRevision = VAR_7;
    VAR_13->wCertificateType = VAR_8;
    FUNC_1(VAR_13->bCertificate, VAR_10, VAR_11);

    VAR_16 = FUNC_8(VAR_12, VAR_13, &VAR_15);
    FUNC_7(VAR_16, "Unable to add certificate to image, error %x\n", FUNC_3());
    FUNC_10("added cert index %d\n", VAR_15);

    FUNC_6(FUNC_4(), 0, VAR_13);
    FUNC_0(VAR_12);
    return VAR_15;
}
