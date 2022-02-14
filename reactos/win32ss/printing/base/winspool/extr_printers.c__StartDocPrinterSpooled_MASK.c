
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int JobId; int Path; } ;
struct TYPE_12__ {int pDocName; scalar_t__ pDatatype; } ;
struct TYPE_11__ {int pDocument; scalar_t__ pDatatype; } ;
struct TYPE_10__ {scalar_t__ hSPLFile; int dwJobID; } ;
typedef TYPE_1__* PSPOOLER_HANDLE ;
typedef TYPE_2__* PJOB_INFO_1W ;
typedef TYPE_3__* PDOC_INFO_1W ;
typedef int * PBYTE ;
typedef TYPE_4__* PADDJOB_INFO_1W ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *,int ,int ,int *) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int,int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int ,int,int *,int ) ;
 int VAR_8 ;

__attribute__((used)) static DWORD
FUNC_7(PSPOOLER_HANDLE VAR_9, PDOC_INFO_1W VAR_10, PADDJOB_INFO_1W VAR_11)
{
    DWORD VAR_12;
    DWORD VAR_13;
    PJOB_INFO_1W VAR_14 = ((void*)0);


    VAR_9->hSPLFile = FUNC_0(VAR_11->Path, VAR_6, VAR_4 | VAR_5, ((void*)0), VAR_0, 0, ((void*)0));
    if (VAR_9->hSPLFile == VAR_7)
    {
        VAR_13 = FUNC_3();
        FUNC_1("CreateFileW failed for \"%S\" with error %lu!\n", VAR_11->Path, VAR_13);
        goto Cleanup;
    }


    FUNC_2((HANDLE)VAR_9, VAR_11->JobId, 1, ((void*)0), 0, &VAR_12);
    if (FUNC_3() != VAR_1)
    {
        VAR_13 = FUNC_3();
        FUNC_1("GetJobW failed with error %lu!\n", VAR_13);
        goto Cleanup;
    }


    VAR_14 = FUNC_4(VAR_8, 0, VAR_12);
    if (!VAR_14)
    {
        VAR_13 = VAR_2;
        FUNC_1("HeapAlloc failed!\n");
        goto Cleanup;
    }


    if (!FUNC_2((HANDLE)VAR_9, VAR_11->JobId, 1, (PBYTE)VAR_14, VAR_12, &VAR_12))
    {
        VAR_13 = FUNC_3();
        FUNC_1("GetJobW failed with error %lu!\n", VAR_13);
        goto Cleanup;
    }


    if (VAR_10->pDatatype)
        VAR_14->pDatatype = VAR_10->pDatatype;

    VAR_14->pDocument = VAR_10->pDocName;


    if (!FUNC_6((HANDLE)VAR_9, VAR_11->JobId, 1, (PBYTE)VAR_14, 0))
    {
        VAR_13 = FUNC_3();
        FUNC_1("SetJobW failed with error %lu!\n", VAR_13);
        goto Cleanup;
    }


    VAR_9->dwJobID = VAR_11->JobId;
    VAR_13 = VAR_3;

Cleanup:
    if (VAR_14)
        FUNC_5(VAR_8, 0, VAR_14);

    return VAR_13;
}
