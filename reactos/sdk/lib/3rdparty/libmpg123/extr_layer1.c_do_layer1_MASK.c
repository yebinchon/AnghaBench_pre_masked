
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fraction; } ;
struct TYPE_9__ {int stereo; int single; int jsbound; scalar_t__ mode; int mode_ext; scalar_t__ (* synth_stereo ) (int ,int ,TYPE_2__*) ;scalar_t__ (* synth_mono ) (int ,TYPE_2__*) ;TYPE_1__ layer1; } ;
typedef TYPE_2__ mpg123_handle ;


 scalar_t__ FUNC_0 (unsigned int*,unsigned int**,TYPE_2__*) ;
 int FUNC_1 (int *,unsigned int*,unsigned int**,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int * VAR_7 ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_2__*) ;

int FUNC_6(mpg123_handle *VAR_8)
{
 int VAR_9=0;
 int VAR_10,VAR_11 = VAR_8->stereo;
 unsigned int VAR_12[2*VAR_2];
 unsigned int VAR_13[2][VAR_2];
 FUNC_3 (*VAR_7)[VAR_2] = VAR_8->layer1.fraction;
 int VAR_14 = VAR_8->single;

 VAR_8->jsbound = (VAR_8->mode == VAR_0) ? (VAR_8->mode_ext<<2)+4 : 32;

 if(VAR_11 == 1 || VAR_14 == VAR_5)
 VAR_14 = VAR_4;

 if(FUNC_0(VAR_12,VAR_13,VAR_8))
 {
  if(VAR_1) FUNC_2("Aborting layer I decoding after step one.\n");
  return VAR_9;
 }

 for(VAR_10=0;VAR_10<VAR_3;VAR_10++)
 {
  FUNC_1(VAR_7,VAR_12,VAR_13,VAR_8);

  if(VAR_14 != VAR_6)
  VAR_9 += (VAR_8->synth_mono)(VAR_7[VAR_14], VAR_8);
  else
  VAR_9 += (VAR_8->synth_stereo)(VAR_7[0], VAR_7[1], VAR_8);
 }

 return VAR_9;
}
