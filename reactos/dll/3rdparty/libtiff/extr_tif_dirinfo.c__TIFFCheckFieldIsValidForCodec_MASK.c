
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ttag_t ;
struct TYPE_4__ {int td_compression; } ;
struct TYPE_5__ {TYPE_1__ tif_dir; } ;
typedef TYPE_2__ TIFF ;
int
FUNC_0(TIFF *VAR_0, ttag_t VAR_1)
{

 switch (VAR_1) {

     case 128:

     case 130:

     case 134:
     case 135:
     case 132:
     case 136:
     case 137:
     case 133:
     case 131:

     case 142:
     case 141:
     case 140:
     case 139:
     case 138:

     case 129:
  break;
     default:
  return 1;
 }


 switch (VAR_0->tif_dir.td_compression) {
     case 152:
  if (VAR_1 == 128)
      return 1;
  break;
     case 149:

  break;
     case 145:

  break;
     case 151:

  break;
     case 155:
  if (VAR_1 == 130)
      return 1;
  break;
     case 150:
  switch (VAR_1) {
      case 134:
      case 135:
      case 132:
      case 136:
      case 137:
      case 133:
      case 131:
   return 1;
  }
  break;
     case 159:
     case 158:
     case 161:
     case 160:
  switch (VAR_1) {
      case 142:
      case 141:
      case 140:
   return 1;
      case 139:
   if (VAR_0->tif_dir.td_compression == 161)
       return 1;
   break;
      case 138:
   if (VAR_0->tif_dir.td_compression == 160)
       return 1;
   break;
  }
  break;
     case 156:

  break;
     case 157:
     case 162:
  if (VAR_1 == 128)
      return 1;
  break;
    case 148:
  if (VAR_1 == 128)
      return 1;
  break;
     case 147:
     case 146:

  break;
     case 153:
  if (VAR_1 == 128)
      return 1;
  break;
     case 143:
  if (VAR_1 == 128)
      return 1;
  break;
     case 154:
  if (VAR_1 == 129)
      return 1;
  break;
    case 144:
  if (VAR_1 == 128)
    return 1;
  break;
 }
 return 0;
}
