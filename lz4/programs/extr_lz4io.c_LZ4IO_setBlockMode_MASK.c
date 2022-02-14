
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int blockIndependence; } ;
typedef TYPE_1__ LZ4IO_prefs_t ;
typedef scalar_t__ LZ4IO_blockMode_t ;


 scalar_t__ VAR_0 ;

int FUNC_0(LZ4IO_prefs_t* const VAR_1, LZ4IO_blockMode_t VAR_2)
{
    VAR_1->blockIndependence = (VAR_2 == VAR_0);
    return VAR_1->blockIndependence;
}
