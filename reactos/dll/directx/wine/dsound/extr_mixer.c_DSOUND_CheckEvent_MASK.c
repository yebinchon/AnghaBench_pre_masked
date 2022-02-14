
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nrofnotifies; int buflen; scalar_t__ state; TYPE_1__* notifies; } ;
struct TYPE_5__ {int dwOffset; TYPE_2__ const* hEventNotify; } ;
typedef TYPE_1__* LPDSBPOSITIONNOTIFY ;
typedef TYPE_2__ IDirectSoundBufferImpl ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(const IDirectSoundBufferImpl *VAR_2, DWORD VAR_3, int VAR_4)
{
 int VAR_5;
 DWORD VAR_6;
 LPDSBPOSITIONNOTIFY VAR_7;
 FUNC_1("(%p,%d)\n",VAR_2,VAR_4);

 if (VAR_2->nrofnotifies == 0)
  return;

 FUNC_1("(%p) buflen = %d, playpos = %d, len = %d\n",
  VAR_2, VAR_2->buflen, VAR_3, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2->nrofnotifies ; VAR_5++) {
  VAR_7 = VAR_2->notifies + VAR_5;
  VAR_6 = VAR_7->dwOffset;
  FUNC_1("checking %d, position %d, event = %p\n",
   VAR_5, VAR_6, VAR_7->hEventNotify);







  if (VAR_6 == VAR_0) {
   if (VAR_2->state == VAR_1) {
    FUNC_0(VAR_7->hEventNotify);
    FUNC_1("signalled event %p (%d)\n", VAR_7->hEventNotify, VAR_5);
   }
                        continue;
  }
  if ((VAR_3 + VAR_4) >= VAR_2->buflen) {
   if ((VAR_6 < ((VAR_3 + VAR_4) % VAR_2->buflen)) ||
       (VAR_6 >= VAR_3)) {
    FUNC_1("signalled event %p (%d)\n", VAR_7->hEventNotify, VAR_5);
    FUNC_0(VAR_7->hEventNotify);
   }
  } else {
   if ((VAR_6 >= VAR_3) && (VAR_6 < (VAR_3 + VAR_4))) {
    FUNC_1("signalled event %p (%d)\n", VAR_7->hEventNotify, VAR_5);
    FUNC_0(VAR_7->hEventNotify);
   }
  }
 }
}
