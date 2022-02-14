
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int illegal_mode; int illegal_substchar; int (* filter_function ) (int,TYPE_1__*) ;int num_illegalchar; } ;
typedef TYPE_1__ mbfl_convert_filter ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;

 int FUNC_0 (TYPE_1__*,unsigned char const*) ;
 int* VAR_4 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;

int
FUNC_7(int VAR_5, mbfl_convert_filter *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = 0;

 VAR_7 = VAR_6->illegal_mode;
 VAR_8 = VAR_6->illegal_substchar;




 if (VAR_6->illegal_mode == 137
   && VAR_6->illegal_substchar != 0x3f) {
  VAR_6->illegal_substchar = 0x3f;
 } else {
  VAR_6->illegal_mode = 134;
 }

 switch (VAR_7) {
 case 137:
  VAR_9 = (*VAR_6->filter_function)(VAR_8, VAR_6);
  break;
 case 135:
  if (VAR_5 >= 0) {
   if (VAR_5 < VAR_1) {
    VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"U+");
   } else {
    if (VAR_5 < VAR_2) {
     VAR_11 = VAR_5 & ~VAR_3;
     switch (VAR_11) {
     case 131:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"JIS+");
      break;
     case 130:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"JIS2+");
      break;
     case 129:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"JIS3+");
      break;
     case 128:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"W932+");
      break;
     case 132:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"GB+");
      break;
     case 133:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"I8859_1+");
      break;
     default:
      VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"?+");
      break;
     }
     VAR_5 &= VAR_3;
    } else {
     VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"BAD+");
     VAR_5 &= VAR_0;
    }
   }
   if (VAR_9 >= 0) {
    VAR_11 = 0;
    VAR_12 = 28;
    while (VAR_12 >= 0) {
     VAR_10 = (VAR_5 >> VAR_12) & 0xf;
     if (VAR_10 || VAR_11) {
      VAR_11 = 1;
      VAR_9 = (*VAR_6->filter_function)(VAR_4[VAR_10], VAR_6);
      if (VAR_9 < 0) {
       break;
      }
     }
     VAR_12 -= 4;
    }
    if (VAR_11 == 0 && VAR_9 >= 0) {
     VAR_9 = (*VAR_6->filter_function)(VAR_4[0], VAR_6);
    }
   }
  }
  break;
 case 136:
  if (VAR_5 >= 0) {
   if (VAR_5 < VAR_1) {
    VAR_9 = FUNC_0(VAR_6, (const unsigned char *)"&#x");
    if (VAR_9 < 0)
     break;

    VAR_11 = 0;
    VAR_12 = 28;
    while (VAR_12 >= 0) {
     VAR_10 = (VAR_5 >> VAR_12) & 0xf;
     if (VAR_10 || VAR_11) {
      VAR_11 = 1;
      VAR_9 = (*VAR_6->filter_function)(VAR_4[VAR_10], VAR_6);
      if (VAR_9 < 0) {
       break;
      }
     }
     VAR_12 -= 4;
    }
    if (VAR_9 < 0) {
     break;
    }
    if (VAR_11 == 0) {
     VAR_9 = (*VAR_6->filter_function)(VAR_4[0], VAR_6);
    }
    VAR_9 = FUNC_0(VAR_6, (const unsigned char *)";");
   } else {
    VAR_9 = (*VAR_6->filter_function)(VAR_8, VAR_6);
   }
  }
  break;
 case 134:
 default:
  break;
 }

 VAR_6->illegal_mode = VAR_7;
 VAR_6->illegal_substchar = VAR_8;
 VAR_6->num_illegalchar++;

 return VAR_9;
}
