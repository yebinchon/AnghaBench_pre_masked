
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_15__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_14__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_13__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_12__ {TYPE_8__ member_3; TYPE_7__ member_2; TYPE_6__ member_1; TYPE_5__ member_0; } ;
struct TYPE_11__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_10__ {TYPE_3__ member_0; } ;
struct TYPE_9__ {int member_0; int member_1; TYPE_2__ member_2; } ;
typedef int PALETTEENTRY ;
typedef int LOGPALETTE ;
typedef int HPALETTE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

HPALETTE
FUNC_1()
{
    struct
    {
        LOGPALETTE logpal;
        PALETTEENTRY entry[5];
    } VAR_3 =
    { {0x300,5,
      { {1,2,3,0} }},
      { {22,33,44,VAR_2},
        {11,55,77,VAR_0},
        {00,77,66,VAR_2 | VAR_1},
        {12,34,56,78}} };

    return FUNC_0((LOGPALETTE*)&VAR_3);
}
