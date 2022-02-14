
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; int buflen; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DirectSoundDevice ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

HRESULT FUNC_3(DirectSoundDevice *VAR_3)
{
 HRESULT VAR_4 = VAR_0;
 FUNC_1("(%p)\n", VAR_3);

 VAR_3->buflen = VAR_2;
 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 != VAR_0) {
  FUNC_2("DSOUND_PrimaryOpen failed\n");
  return VAR_4;
 }

 VAR_3->state = VAR_1;
 return VAR_0;
}
