
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mixlock; int hwo; scalar_t__ hwbuf; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DirectSoundDevice ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,TYPE_1__*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

HRESULT FUNC_12(DirectSoundDevice *VAR_3)
{
 HRESULT VAR_4 = VAR_1;
 FUNC_8("(%p)\n", VAR_3);

 if (VAR_3->hwbuf) {
  VAR_4 = FUNC_6(VAR_3->hwbuf);
  if (VAR_4 == VAR_0) {
   FUNC_0(VAR_3);
   VAR_4 = FUNC_2(VAR_3, VAR_2);
   if (FUNC_5(VAR_4))
    FUNC_3("DSOUND_ReopenDevice failed\n");
   else
   {
    VAR_4 = FUNC_1(VAR_3);
    if (FUNC_5(VAR_4))
     FUNC_9("DSOUND_PrimaryOpen failed\n");
   }
  } else if (VAR_4 != VAR_1) {
   FUNC_9("IDsDriverBuffer_Stop failed\n");
  }
 } else {


  FUNC_7(&(VAR_3->mixlock));


  VAR_4 = FUNC_10(FUNC_11(VAR_3->hwo));


  FUNC_4(&(VAR_3->mixlock));

  if (VAR_4 != VAR_1)
   FUNC_9("waveOutPause failed\n");
 }

 return VAR_4;
}
