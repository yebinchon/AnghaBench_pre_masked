
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int subjectInfo ;
typedef int sip ;
struct TYPE_10__ {int * pbData; int cbData; } ;
struct TYPE_9__ {int cbSize; scalar_t__ (* pfGet ) (TYPE_1__*,scalar_t__*,int ,int *,int *) ;void const* pwsFileName; scalar_t__ hFile; int * pgSubjectType; } ;
typedef TYPE_1__ SIP_SUBJECTINFO ;
typedef TYPE_1__ SIP_DISPATCH_INFO ;
typedef int HCRYPTMSG ;
typedef int HCERTSTORE ;
typedef scalar_t__ HANDLE ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ CERT_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,int ,int ,scalar_t__*,int *,int *,int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (void const*,int ,int ,int *,int ,int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (void const*,scalar_t__,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*,scalar_t__) ;
 scalar_t__ FUNC_10 (void const*) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,scalar_t__*,int ,int *,int *) ;
 scalar_t__ FUNC_13 (TYPE_1__*,scalar_t__*,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_14(DWORD VAR_13,
 const void *VAR_14, DWORD VAR_15,
 DWORD *VAR_16, DWORD *VAR_17,
 HCERTSTORE *VAR_18, HCRYPTMSG *VAR_19)
{
    HANDLE VAR_20;
    GUID VAR_21;
    BOOL VAR_22 = VAR_7;

    FUNC_8("%s\n", FUNC_10(VAR_14));

    if (VAR_13 != VAR_4)
    {
        FUNC_9("don't know what to do for type %d embedded signed messages\n",
         VAR_13);
        FUNC_7(VAR_6);
        return VAR_7;
    }
    VAR_20 = FUNC_2(VAR_14, VAR_10, VAR_9,
     ((void*)0), VAR_12, VAR_8, ((void*)0));
    if (VAR_20 != VAR_11)
    {
        VAR_22 = FUNC_6(VAR_14, VAR_20, &VAR_21);
        if (VAR_22)
        {
            SIP_DISPATCH_INFO VAR_23;

            FUNC_11(&VAR_23, 0, sizeof(VAR_23));
            VAR_23.cbSize = sizeof(VAR_23);
            VAR_22 = FUNC_5(&VAR_21, 0, &VAR_23);
            if (VAR_22)
            {
                SIP_SUBJECTINFO VAR_24;
                CERT_BLOB VAR_25;
                DWORD VAR_26;

                FUNC_11(&VAR_24, 0, sizeof(VAR_24));
                VAR_24.cbSize = sizeof(VAR_24);
                VAR_24.pgSubjectType = &VAR_21;
                VAR_24.hFile = VAR_20;
                VAR_24.pwsFileName = VAR_14;
                VAR_22 = VAR_23.pfGet(&VAR_24, &VAR_26, 0, &VAR_25.cbData,
                 ((void*)0));
                if (VAR_22)
                {
                    VAR_25.pbData = FUNC_3(VAR_25.cbData);
                    if (VAR_25.pbData)
                    {
                        VAR_22 = VAR_23.pfGet(&VAR_24, &VAR_26, 0,
                         &VAR_25.cbData, VAR_25.pbData);
                        if (VAR_22)
                        {
                            VAR_22 = FUNC_0(
                             VAR_3, &VAR_25,
                             VAR_0,
                             VAR_2,
                             VAR_16, ((void*)0), ((void*)0),
                             VAR_18, VAR_19);
                            if (VAR_22 && VAR_17)
                                *VAR_17 = VAR_1;
                        }
                        FUNC_4(VAR_25.pbData);
                    }
                    else
                    {
                        FUNC_7(VAR_5);
                        VAR_22 = VAR_7;
                    }
                }
            }
        }
        FUNC_1(VAR_20);
    }
    FUNC_8("returning %d\n", VAR_22);
    return VAR_22;
}
