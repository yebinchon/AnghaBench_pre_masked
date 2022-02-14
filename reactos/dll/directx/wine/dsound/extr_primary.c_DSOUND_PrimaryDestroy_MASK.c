
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mixlock; int * pwfx; int * pwave; scalar_t__ hwbuf; scalar_t__ driver; } ;
typedef int HRESULT ;
typedef TYPE_1__ DirectSoundDevice ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,TYPE_1__*) ;

HRESULT FUNC_7(DirectSoundDevice *VAR_1)
{
 FUNC_6("(%p)\n", VAR_1);


 FUNC_1(&(VAR_1->mixlock));

 FUNC_0(VAR_1);
 if (VAR_1->driver) {
  if (VAR_1->hwbuf) {
   if (FUNC_4(VAR_1->hwbuf) == 0)
    VAR_1->hwbuf = 0;
  }
 } else
                FUNC_3(FUNC_2(),0,VAR_1->pwave);
        FUNC_3(FUNC_2(),0,VAR_1->pwfx);
        VAR_1->pwfx=((void*)0);

 FUNC_5(&(VAR_1->mixlock));


 return VAR_0;
}
