
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cchBuffer; scalar_t__ pchNext; scalar_t__ pchBuffer; scalar_t__ pchEndRead; scalar_t__ pchEndWrite; int lDiskOffset; int lBufOffset; } ;
struct TYPE_4__ {int bBufferLoaded; TYPE_2__ info; int ioProc; } ;
typedef TYPE_1__* LPWINE_MMIO ;
typedef int LPARAM ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int ,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static LONG FUNC_2(LPWINE_MMIO VAR_5, int VAR_6)
{
    LONG VAR_7 = VAR_5->info.cchBuffer;

    FUNC_0("bo=%x do=%x of=%lx\n",
   VAR_5->info.lBufOffset, VAR_5->info.lDiskOffset,
   FUNC_1(VAR_5->ioProc, &VAR_5->info, VAR_2, 0, VAR_3, VAR_0));

    VAR_5->info.lBufOffset = VAR_5->info.lDiskOffset;
    VAR_5->info.pchNext = VAR_5->info.pchBuffer;
    VAR_5->info.pchEndRead = VAR_5->info.pchBuffer;
    VAR_5->info.pchEndWrite = VAR_5->info.pchBuffer + VAR_5->info.cchBuffer;

    VAR_5->bBufferLoaded = VAR_4;
    if (VAR_6) {
 VAR_7 = FUNC_1(VAR_5->ioProc, &VAR_5->info, VAR_1,
                            (LPARAM)VAR_5->info.pchBuffer, VAR_7, VAR_0);
 if (VAR_7 > 0)
     VAR_5->info.pchEndRead += VAR_7;
        else
            VAR_5->bBufferLoaded = VAR_0;
    }

    return VAR_7;
}
