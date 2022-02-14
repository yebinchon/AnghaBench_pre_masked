
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_3__ {int codepage; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(csconv_t *VAR_1, const uchar *VAR_2, int VAR_3)
{
    int VAR_4 = 0;

    if (VAR_1->codepage == 54936) {
 if (VAR_2[0] <= 0x7F) VAR_4 = 1;
 else if (VAR_2[0] >= 0x81 && VAR_2[0] <= 0xFE &&
   VAR_3 >= 2 &&
   ((VAR_2[1] >= 0x40 && VAR_2[1] <= 0x7E) ||
    (VAR_2[1] >= 0x80 && VAR_2[1] <= 0xFE))) VAR_4 = 2;
 else if (VAR_2[0] >= 0x81 && VAR_2[0] <= 0xFE &&
   VAR_3 >= 4 &&
   VAR_2[1] >= 0x30 && VAR_2[1] <= 0x39) VAR_4 = 4;
 else
     return FUNC_0(VAR_0);
 return VAR_4;
    }
    else
 return FUNC_0(VAR_0);
}
