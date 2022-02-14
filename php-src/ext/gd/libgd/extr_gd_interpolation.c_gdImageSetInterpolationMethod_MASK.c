
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdInterpolationMethod ;
typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int interpolation_id; int * interpolation; } ;
 int VAR_0 ;







 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;

int FUNC_0(gdImagePtr VAR_18, gdInterpolationMethod VAR_19)
{
 if (VAR_18 == ((void*)0) || VAR_19 < 0 || VAR_19 > VAR_0) {
  return 0;
 }

 switch (VAR_19) {
  case 140:
   VAR_19 = 145;

  case 145:
  case 146:
  case 133:
  case 128:
   VAR_18->interpolation = ((void*)0);
   break;


  case 149:
   VAR_18->interpolation = VAR_1;
   break;
  case 148:
   VAR_18->interpolation = VAR_2;
   break;
  case 147:
   VAR_18->interpolation = VAR_3;
   break;
  case 144:
   VAR_18->interpolation = VAR_4;
   break;
  case 143:
   VAR_18->interpolation = VAR_5;
   break;
  case 142:
   VAR_18->interpolation = VAR_6;
   break;
  case 141:
   VAR_18->interpolation = VAR_7;
   break;
  case 139:
   VAR_18->interpolation = VAR_8;
   break;
  case 138:
   VAR_18->interpolation = VAR_9;
   break;
  case 135:
   VAR_18->interpolation = VAR_12;
   break;
  case 137:
   VAR_18->interpolation = VAR_10;
   break;
  case 136:
   VAR_18->interpolation = VAR_11;
   break;
  case 134:
   VAR_18->interpolation = VAR_13;
   break;
  case 132:
   VAR_18->interpolation = VAR_14;
   break;
  case 131:
   VAR_18->interpolation = VAR_15;
   break;
  case 130:
   VAR_18->interpolation = VAR_16;
   break;
  case 129:
   VAR_18->interpolation = VAR_17;
   break;

  default:
   return 0;
   break;
 }
 VAR_18->interpolation_id = VAR_19;
 return 1;
}
