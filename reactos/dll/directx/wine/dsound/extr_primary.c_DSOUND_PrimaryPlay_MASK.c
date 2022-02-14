
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwo; scalar_t__ hwbuf; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DirectSoundDevice ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

HRESULT FUNC_5(DirectSoundDevice *VAR_2)
{
 HRESULT VAR_3 = VAR_1;
 FUNC_1("(%p)\n", VAR_2);

 if (VAR_2->hwbuf) {
  VAR_3 = FUNC_0(VAR_2->hwbuf, 0, 0, VAR_0);
  if (VAR_3 != VAR_1)
   FUNC_2("IDsDriverBuffer_Play failed\n");
 } else {
  VAR_3 = FUNC_3(FUNC_4(VAR_2->hwo));
  if (VAR_3 != VAR_1)
   FUNC_2("waveOutRestart failed\n");
 }

 return VAR_3;
}
