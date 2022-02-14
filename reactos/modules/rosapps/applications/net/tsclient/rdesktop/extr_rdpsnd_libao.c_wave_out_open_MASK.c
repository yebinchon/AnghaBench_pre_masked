
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bits; int channels; int rate; int byte_format; } ;
typedef TYPE_1__ ao_sample_format ;
struct TYPE_5__ {int channels; scalar_t__ dsp_; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

BOOL
FUNC_3(void)
{
 ao_sample_format VAR_10;

 FUNC_1();
 VAR_4 = FUNC_0();

 VAR_10.bits = 16;
 VAR_10.channels = 2;
 VAR_2->channels = 2;
 VAR_10.rate = 44100;
 VAR_6 = 44100;
 VAR_10.byte_format = VAR_0;

 VAR_7 = FUNC_2(VAR_4, &VAR_10, ((void*)0));
 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }

 VAR_2->dsp_ = 0;
 VAR_9 = VAR_8 = 0;

 VAR_5 = VAR_3;

 return VAR_3;
}
