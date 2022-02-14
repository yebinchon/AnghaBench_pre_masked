
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pwplay; int pwqueue; int fraglen; int helfrags; scalar_t__ hwbuf; } ;
typedef int* LPDWORD ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DirectSoundDevice ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

HRESULT FUNC_4(DirectSoundDevice *VAR_2, LPDWORD VAR_3, LPDWORD VAR_4)
{
 FUNC_2("(%p,%p,%p)\n", VAR_2, VAR_3, VAR_4);

 if (VAR_2->hwbuf) {
  HRESULT VAR_5=FUNC_1(VAR_2->hwbuf,VAR_3,VAR_4);
  if (VAR_5 != VAR_1) {
   FUNC_3("IDsDriverBuffer_GetPosition failed\n");
   return VAR_5;
  }
 } else {
  FUNC_2("pwplay=%i, pwqueue=%i\n", VAR_2->pwplay, VAR_2->pwqueue);


  if (VAR_3)

   *VAR_3 = VAR_2->pwplay * VAR_2->fraglen;


  if (VAR_4)

   *VAR_4 = ((VAR_2->pwplay + VAR_2->pwqueue) % VAR_2->helfrags) * VAR_2->fraglen;
 }
 FUNC_2("playpos = %d, writepos = %d (%p, time=%d)\n", VAR_3?*VAR_3:-1, VAR_4?*VAR_4:-1, VAR_2, FUNC_0());
 return VAR_0;
}
