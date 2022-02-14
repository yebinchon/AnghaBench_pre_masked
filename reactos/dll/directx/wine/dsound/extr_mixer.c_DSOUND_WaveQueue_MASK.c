
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WAVEHDR ;
struct TYPE_3__ {size_t pwplay; size_t pwqueue; size_t helfrags; size_t fraglen; size_t prebuf; size_t mixpos; int mixlock; int * pwave; int hwo; } ;
typedef TYPE_1__ DirectSoundDevice ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(DirectSoundDevice *VAR_0, BOOL VAR_1)
{
 DWORD VAR_2, VAR_3, VAR_4, VAR_5;
 FUNC_2("(%p)\n", VAR_0);


 VAR_4 = (VAR_0->pwplay + VAR_0->pwqueue) % VAR_0->helfrags;


 VAR_3 = VAR_4 * VAR_0->fraglen;

 FUNC_2("wave_fragpos = %i, wave_writepos = %i, pwqueue = %i, prebuf = %i\n",
  VAR_4, VAR_3, VAR_0->pwqueue, VAR_0->prebuf);

 if (!VAR_1)
 {

  VAR_2 = VAR_0->mixpos / VAR_0->fraglen;
  if (VAR_2 == VAR_0->helfrags)
   --VAR_2;
  FUNC_2("wave_fragpos = %d, mixpos_frags = %d\n", VAR_4, VAR_2);
  if (VAR_2 < VAR_4)
   VAR_2 += VAR_0->helfrags;
  VAR_2 -= VAR_4;
  FUNC_2("wanted prebuf_frags = %d\n", VAR_2);
 }
 else

  VAR_2 = VAR_0->prebuf;


 if ((VAR_2 + VAR_0->pwqueue) > VAR_0->prebuf)
  VAR_2 = VAR_0->prebuf - VAR_0->pwqueue;

 FUNC_2("prebuf_frags = %i\n", VAR_2);


 VAR_0->pwqueue += VAR_2;


 FUNC_1(&(VAR_0->mixlock));



 for(VAR_5=0; VAR_5<VAR_2; VAR_5++){
  FUNC_2("queueing wave buffer %i\n", VAR_4);
  FUNC_3(VAR_0->hwo, &VAR_0->pwave[VAR_4], sizeof(WAVEHDR));
  VAR_4++;
  VAR_4 %= VAR_0->helfrags;
 }


 FUNC_0(&(VAR_0->mixlock));

 FUNC_2("queue now = %i\n", VAR_0->pwqueue);
}
