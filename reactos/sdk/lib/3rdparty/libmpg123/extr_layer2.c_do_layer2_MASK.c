
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int fraction; } ;
struct TYPE_10__ {int stereo; int single; int jsbound; scalar_t__ mode; int mode_ext; int II_sblimit; scalar_t__ (* synth_stereo ) (int ,int ,TYPE_2__*) ;scalar_t__ (* synth_mono ) (int ,TYPE_2__*) ;TYPE_1__ layer2; } ;
typedef TYPE_2__ mpg123_handle ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned int*,int*,TYPE_2__*) ;
 int FUNC_2 (unsigned int*,int **,int*,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int ** VAR_6 ;
 int ** FUNC_4 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_2__*) ;

int FUNC_7(mpg123_handle *VAR_8)
{
 int VAR_9=0;
 int VAR_10,VAR_11;
 int VAR_12 = VAR_8->stereo;


 FUNC_4 (*VAR_6)[4][VAR_1] = VAR_8->layer2.fraction;
 unsigned int VAR_13[64];
 int VAR_14[192];
 int VAR_15 = VAR_8->single;

 FUNC_0(VAR_8);
 VAR_8->jsbound = (VAR_8->mode == VAR_0) ? (VAR_8->mode_ext<<2)+4 : VAR_8->II_sblimit;

 if(VAR_8->jsbound > VAR_8->II_sblimit)
 {
  FUNC_3(VAR_7, "Truncating stereo boundary to sideband limit.\n");
  VAR_8->jsbound=VAR_8->II_sblimit;
 }


 if(VAR_12 == 1 || VAR_15 == VAR_4)
 VAR_15 = VAR_3;

 FUNC_1(VAR_13, VAR_14, VAR_8);

 for(VAR_10=0;VAR_10<VAR_2;VAR_10++)
 {
  FUNC_2(VAR_13,VAR_6,VAR_14,VAR_8,VAR_10>>2);
  for(VAR_11=0;VAR_11<3;VAR_11++)
  {
   if(VAR_15 != VAR_5)
   VAR_9 += (VAR_8->synth_mono)(VAR_6[VAR_15][VAR_11], VAR_8);
   else
   VAR_9 += (VAR_8->synth_stereo)(VAR_6[0][VAR_11], VAR_6[1][VAR_11], VAR_8);
  }
 }

 return VAR_9;
}
