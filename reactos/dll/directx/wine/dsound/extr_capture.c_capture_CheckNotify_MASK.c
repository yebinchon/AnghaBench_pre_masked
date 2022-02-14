
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nrofnotifies; TYPE_1__* notifies; } ;
struct TYPE_4__ {scalar_t__ dwOffset; int hEventNotify; } ;
typedef TYPE_1__* LPDSBPOSITIONNOTIFY ;
typedef TYPE_2__ IDirectSoundCaptureBufferImpl ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,...) ;

__attribute__((used)) static void FUNC_2(IDirectSoundCaptureBufferImpl *VAR_1, DWORD VAR_2, DWORD VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_1->nrofnotifies; ++VAR_4) {
        LPDSBPOSITIONNOTIFY VAR_5 = VAR_1->notifies + VAR_4;
        DWORD VAR_6 = VAR_5->dwOffset;
        FUNC_1("checking %d, position %d, event = %p\n", VAR_4, VAR_6, VAR_5->hEventNotify);

        if (VAR_6 == VAR_0) {
            if (!VAR_2 && !VAR_3) {
                FUNC_0(VAR_5->hEventNotify);
                FUNC_1("signalled event %p (%d)\n", VAR_5->hEventNotify, VAR_4);
                return;
            }
            else return;
        }

        if (VAR_6 >= VAR_2 && VAR_6 < (VAR_2 + VAR_3))
        {
            FUNC_1("signalled event %p (%d)\n", VAR_5->hEventNotify, VAR_4);
            FUNC_0(VAR_5->hEventNotify);
        }
    }
}
