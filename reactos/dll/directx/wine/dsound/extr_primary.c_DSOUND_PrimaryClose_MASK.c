
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WAVEHDR ;
typedef int ULONG ;
struct TYPE_4__ {unsigned int helfrags; scalar_t__ hwbuf; scalar_t__ pwqueue; int mixlock; int * pwave; int hwo; } ;
typedef TYPE_1__ DirectSoundDevice ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static void FUNC_7(DirectSoundDevice *VAR_0)
{
 FUNC_4("(%p)\n", VAR_0);


 if (!VAR_0->hwbuf) {
  unsigned VAR_1;


  FUNC_3(&(VAR_0->mixlock));

  VAR_0->pwqueue = (DWORD)-1;
  FUNC_5(VAR_0->hwo);
  for (VAR_1=0; VAR_1<VAR_0->helfrags; VAR_1++)
   FUNC_6(VAR_0->hwo, &VAR_0->pwave[VAR_1], sizeof(WAVEHDR));

  FUNC_1(&(VAR_0->mixlock));


  VAR_0->pwqueue = 0;
 } else {
  ULONG VAR_2 = FUNC_2(VAR_0->hwbuf);
  if (!VAR_2)
   VAR_0->hwbuf = 0;
  else
   FUNC_0("Still %d references on primary buffer, refcount leak?\n", VAR_2);
 }
}
