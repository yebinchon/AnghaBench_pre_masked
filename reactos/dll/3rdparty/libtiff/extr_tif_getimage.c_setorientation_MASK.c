
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int orientation; int req_orientation; } ;
typedef TYPE_1__ TIFFRGBAImage ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static int
FUNC_0(TIFFRGBAImage* VAR_2)
{
 switch (VAR_2->orientation) {
  case 129:
  case 132:
   if (VAR_2->req_orientation == 128 ||
       VAR_2->req_orientation == 130)
    return VAR_0;
   else if (VAR_2->req_orientation == 134 ||
       VAR_2->req_orientation == 131)
    return VAR_0 | VAR_1;
   else if (VAR_2->req_orientation == 135 ||
       VAR_2->req_orientation == 133)
    return VAR_1;
   else
    return 0;
  case 128:
  case 130:
   if (VAR_2->req_orientation == 129 ||
       VAR_2->req_orientation == 132)
    return VAR_0;
   else if (VAR_2->req_orientation == 134 ||
       VAR_2->req_orientation == 131)
    return VAR_1;
   else if (VAR_2->req_orientation == 135 ||
       VAR_2->req_orientation == 133)
    return VAR_0 | VAR_1;
   else
    return 0;
  case 134:
  case 131:
   if (VAR_2->req_orientation == 129 ||
       VAR_2->req_orientation == 132)
    return VAR_0 | VAR_1;
   else if (VAR_2->req_orientation == 128 ||
       VAR_2->req_orientation == 130)
    return VAR_1;
   else if (VAR_2->req_orientation == 135 ||
       VAR_2->req_orientation == 133)
    return VAR_0;
   else
    return 0;
  case 135:
  case 133:
   if (VAR_2->req_orientation == 129 ||
       VAR_2->req_orientation == 132)
    return VAR_1;
   else if (VAR_2->req_orientation == 128 ||
       VAR_2->req_orientation == 130)
    return VAR_0 | VAR_1;
   else if (VAR_2->req_orientation == 134 ||
       VAR_2->req_orientation == 131)
    return VAR_0;
   else
    return 0;
  default:
   return 0;
 }
}
