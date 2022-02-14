
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ class; scalar_t__ type; } ;
struct TYPE_15__ {int ** mono; int ** mono2stereo; int ** stereo; int ** plain; } ;
struct TYPE_14__ {int dec_enc; int channels; } ;
struct TYPE_17__ {int down_sample; int (* make_decode_tables ) (TYPE_4__*) ;TYPE_3__ cpu_opts; int err; TYPE_2__ synths; TYPE_1__ af; int synth_mono; int synth_stereo; int synth; } ;
typedef TYPE_4__ mpg123_handle ;
typedef enum synth_resample { ____Placeholder_synth_resample } synth_resample ;
typedef enum synth_format { ____Placeholder_synth_format } synth_format ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ VAR_31 ;

int FUNC_10(mpg123_handle *VAR_32)
{
 enum synth_resample VAR_33 = VAR_27;
 enum synth_format VAR_34 = VAR_15;


 if(VAR_0){}

 else if(VAR_32->af.dec_enc & VAR_2)
 VAR_34 = VAR_12;


 else if(VAR_32->af.dec_enc & VAR_5)
 VAR_34 = VAR_14;


 else if(VAR_32->af.dec_enc & VAR_6)
 VAR_34 = VAR_16;



 else if(VAR_32->af.dec_enc & VAR_4 || VAR_32->af.dec_enc & VAR_3)
 VAR_34 = VAR_13;



 if(VAR_34 == VAR_15)
 {
  if(VAR_10) FUNC_1("set_synth_functions: This output format is disabled in this build!");

  return -1;
 }


 switch(VAR_32->down_sample)
 {
  case 0: VAR_33 = VAR_24; break;

  case 1: VAR_33 = VAR_25; break;
  case 2: VAR_33 = VAR_26; break;


  case 3: VAR_33 = VAR_28; break;

 }

 if(VAR_33 == VAR_27)
 {
  if(VAR_10) FUNC_1("set_synth_functions: This resampling mode is not supported in this build!");

  return -1;
 }

 FUNC_0("selecting synth: resample=%i format=%i", VAR_33, VAR_34);

 VAR_32->synth = VAR_32->synths.plain[VAR_33][VAR_34];
 VAR_32->synth_stereo = VAR_32->synths.stereo[VAR_33][VAR_34];
 VAR_32->synth_mono = VAR_32->af.channels==2
  ? VAR_32->synths.mono2stereo[VAR_33][VAR_34]
  : VAR_32->synths.mono[VAR_33][VAR_34];

 if(FUNC_2(VAR_32) != VAR_9)
 {
  VAR_32->err = VAR_1;
  return VAR_7;
 }

 if(FUNC_3(VAR_32) != 0)
 {
  VAR_32->err = VAR_8;
  if(VAR_10) FUNC_1("Failed to set up decoder buffers!");

  return VAR_7;
 }


 if(VAR_34 == VAR_14)
 {
  if(FUNC_6(VAR_32) != 0)
  {
   if(VAR_10) FUNC_1("Failed to set up conv16to8 table!");

   return -1;
  }
 }
 {

  FUNC_5(VAR_32, VAR_19);


  FUNC_4(VAR_32, VAR_17);

  VAR_32->make_decode_tables = FUNC_7;
 }


 VAR_32->make_decode_tables(VAR_32);

 return 0;
}
