
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int buffer ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_13__ {scalar_t__ fccIOProc; int dwFlags; int hmmio; scalar_t__* adwInfo; } ;
struct TYPE_12__ {int count; int * pIOProc; } ;
struct TYPE_11__ {TYPE_3__* ioProc; TYPE_4__ info; int dwFileSize; void* bBufferLoaded; void* bTmpIOProc; } ;
struct TYPE_10__ {scalar_t__ fccIOProc; void* wErrorRet; scalar_t__* adwInfo; scalar_t__ cchBuffer; int * pchBuffer; int * pIOProc; } ;
typedef TYPE_1__ MMIOINFO ;
typedef TYPE_2__* LPWINE_MMIO ;
typedef scalar_t__ LPSTR ;
typedef int LPARAM ;
typedef int HMMIO ;
typedef int HANDLE ;
typedef int DWORD ;
typedef void* BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int,char*,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;
 void* FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_6 (scalar_t__,int *,int ,void*) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 void* FUNC_8 (TYPE_2__*,int *,scalar_t__,int ) ;
 void* VAR_11 ;
 int FUNC_9 (char*,scalar_t__,TYPE_1__*,int,char*) ;
 void* VAR_12 ;
 int FUNC_10 (int) ;
 void* FUNC_11 (TYPE_3__*,TYPE_4__*,int ,int ,int ,void*) ;
 int FUNC_12 (scalar_t__,char*) ;

__attribute__((used)) static HMMIO FUNC_13(LPSTR VAR_13, MMIOINFO* VAR_14, DWORD VAR_15, BOOL VAR_16)
{
    LPWINE_MMIO VAR_17;
    MMIOINFO VAR_18;

    FUNC_9("('%s', %p, %08X, %s);\n", VAR_13, VAR_14, VAR_15, VAR_16 ? "unicode" : "ansi");

    if (!VAR_14) {
        VAR_14 = &VAR_18;

 VAR_18.fccIOProc = 0;
 VAR_18.pIOProc = ((void*)0);
 VAR_18.pchBuffer = ((void*)0);
 VAR_18.cchBuffer = 0;
        VAR_16 = VAR_0;
    }

    if (VAR_15 & (VAR_10|VAR_8)) {
 char VAR_19[VAR_4];

 if (!VAR_13)
     return (HMMIO)VAR_0;
 if (FUNC_2(VAR_13, sizeof(VAR_19), VAR_19, ((void*)0)) >= sizeof(VAR_19))
     return (HMMIO)VAR_0;
 if ((VAR_15 & VAR_8) && (FUNC_0(VAR_19) == VAR_3))
     return (HMMIO)VAR_0;
 FUNC_12(VAR_13, VAR_19);
 return (HMMIO)VAR_12;
    }

    if ((VAR_17 = FUNC_3()) == ((void*)0))
 return 0;


    if (VAR_14->fccIOProc == 0 && VAR_14->pIOProc == ((void*)0)) {
 VAR_17->info.fccIOProc = FUNC_7(VAR_13);

 if (VAR_17->info.fccIOProc == 0)
     VAR_17->info.fccIOProc = VAR_1;
 if (!(VAR_17->ioProc = FUNC_5(VAR_17->info.fccIOProc))) {

     VAR_17->info.fccIOProc = VAR_1;
     if (!(VAR_17->ioProc = FUNC_5(VAR_17->info.fccIOProc)))
  goto error2;
 }
 VAR_17->bTmpIOProc = VAR_0;
    }

    else if (VAR_14->pIOProc == ((void*)0)) {
 VAR_17->info.fccIOProc = VAR_14->fccIOProc;
 if (!(VAR_17->ioProc = FUNC_5(VAR_17->info.fccIOProc))) goto error2;
 VAR_17->bTmpIOProc = VAR_0;
    }

    else {
 VAR_17->info.fccIOProc = VAR_14->fccIOProc;
 FUNC_6(VAR_17->info.fccIOProc, VAR_14->pIOProc,
                           VAR_9, VAR_16);
 if (!(VAR_17->ioProc = FUNC_5(VAR_17->info.fccIOProc))) goto error2;
 FUNC_10(VAR_17->ioProc->pIOProc == VAR_14->pIOProc);
 VAR_17->bTmpIOProc = VAR_12;
    }

    VAR_17->ioProc->count++;
    VAR_17->info.dwFlags = VAR_15;

    if (VAR_15 & VAR_6) {
 VAR_14->wErrorRet = FUNC_8(VAR_17, VAR_14->pchBuffer,
     VAR_14->cchBuffer ? VAR_14->cchBuffer : VAR_7, 0);
 if (VAR_14->wErrorRet != VAR_11)
     goto error1;
    } else {
        VAR_14->wErrorRet = FUNC_8(VAR_17, VAR_14->pchBuffer, VAR_14->cchBuffer, 0);
 if (VAR_14->wErrorRet != VAR_11)
     goto error1;
    }

    if (VAR_17->info.fccIOProc == VAR_2 && !(VAR_17->info.dwFlags & VAR_6))
        VAR_17->bBufferLoaded = VAR_12;


    VAR_17->info.adwInfo[0] = VAR_14->adwInfo[0];


    VAR_14->wErrorRet = FUNC_11(VAR_17->ioProc, &VAR_17->info, VAR_5,
                                        (LPARAM)VAR_13, 0, VAR_0);


    VAR_17->dwFileSize = FUNC_1((HANDLE)(ULONG_PTR)VAR_17->info.adwInfo[0], ((void*)0));

    if (VAR_14->wErrorRet == 0)
 return VAR_17->info.hmmio;
 error1:
    if (VAR_17->ioProc) VAR_17->ioProc->count--;
 error2:
    FUNC_4(VAR_17);
    return 0;
}
