
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fccIOProc; int dwFlags; scalar_t__ pchBuffer; scalar_t__ pchEndRead; scalar_t__ pchNext; int lBufOffset; scalar_t__ cchBuffer; } ;
struct TYPE_4__ {TYPE_2__ info; int ioProc; } ;
typedef TYPE_1__ WINE_MMIO ;
typedef int UINT ;
typedef int MMRESULT ;
typedef int LPARAM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static MMRESULT FUNC_1(WINE_MMIO* VAR_8, UINT VAR_9)
{
    if (VAR_8->info.cchBuffer && (VAR_8->info.fccIOProc != VAR_1)) {

 if (VAR_8->info.dwFlags & VAR_4) {

     FUNC_0(VAR_8->ioProc, &VAR_8->info, VAR_2, VAR_8->info.lBufOffset, VAR_7, VAR_0);
     FUNC_0(VAR_8->ioProc, &VAR_8->info, VAR_3,
                         (LPARAM)VAR_8->info.pchBuffer,
                         VAR_8->info.pchNext - VAR_8->info.pchBuffer, VAR_0);
 }
 if (VAR_9 & VAR_5)
     VAR_8->info.pchNext = VAR_8->info.pchEndRead = VAR_8->info.pchBuffer;
    }
    VAR_8->info.dwFlags &= ~VAR_4;

    return VAR_6;
}
