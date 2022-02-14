
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwFlags; int cchBuffer; int lDiskOffset; int lBufOffset; int * pchBuffer; int * pchEndWrite; int * pchEndRead; int * pchNext; } ;
struct TYPE_7__ {int bBufferLoaded; TYPE_1__ info; } ;
typedef TYPE_2__ WINE_MMIO ;
typedef int UINT ;
typedef scalar_t__ MMRESULT ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,TYPE_2__*,void*,int,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static MMRESULT FUNC_6(WINE_MMIO* VAR_5, void* VAR_6, LONG VAR_7,
          UINT VAR_8)
{
    FUNC_4("(%p %p %d %u)\n", VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_7 > 0xFFFF)
 FUNC_5("Untested handling of huge mmio buffers (%d >= 64k)\n", VAR_7);

    if (FUNC_3(VAR_5, 0) != VAR_4)
 return VAR_1;


    if (VAR_5->info.dwFlags & VAR_3) {
        FUNC_2(FUNC_0(), 0, VAR_5->info.pchBuffer);
        VAR_5->info.pchBuffer = ((void*)0);
 VAR_5->info.dwFlags &= ~VAR_3;
    }

    if (VAR_6) {
        VAR_5->info.pchBuffer = VAR_6;
    } else if (VAR_7) {
 if (!(VAR_5->info.pchBuffer = FUNC_1(FUNC_0(), 0, VAR_7)))
     return VAR_2;
 VAR_5->info.dwFlags |= VAR_3;
    } else {
 VAR_5->info.pchBuffer = ((void*)0);
    }

    VAR_5->info.cchBuffer = VAR_7;
    VAR_5->info.pchNext = VAR_5->info.pchBuffer;
    VAR_5->info.pchEndRead = VAR_5->info.pchBuffer;
    VAR_5->info.pchEndWrite = VAR_5->info.pchBuffer + VAR_7;
    VAR_5->info.lBufOffset = VAR_5->info.lDiskOffset;
    VAR_5->bBufferLoaded = VAR_0;

    return VAR_4;
}
