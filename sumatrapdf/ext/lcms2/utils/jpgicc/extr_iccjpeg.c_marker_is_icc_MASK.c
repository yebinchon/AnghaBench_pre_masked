
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jpeg_saved_marker_ptr ;
typedef int boolean ;
struct TYPE_3__ {scalar_t__ marker; scalar_t__ data_length; int * data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static boolean
FUNC_1 (jpeg_saved_marker_ptr VAR_2)
{
  return
    VAR_2->marker == VAR_0 &&
    VAR_2->data_length >= VAR_1 &&

    FUNC_0(VAR_2->data[0]) == 0x49 &&
    FUNC_0(VAR_2->data[1]) == 0x43 &&
    FUNC_0(VAR_2->data[2]) == 0x43 &&
    FUNC_0(VAR_2->data[3]) == 0x5F &&
    FUNC_0(VAR_2->data[4]) == 0x50 &&
    FUNC_0(VAR_2->data[5]) == 0x52 &&
    FUNC_0(VAR_2->data[6]) == 0x4F &&
    FUNC_0(VAR_2->data[7]) == 0x46 &&
    FUNC_0(VAR_2->data[8]) == 0x49 &&
    FUNC_0(VAR_2->data[9]) == 0x4C &&
    FUNC_0(VAR_2->data[10]) == 0x45 &&
    FUNC_0(VAR_2->data[11]) == 0x0;
}
