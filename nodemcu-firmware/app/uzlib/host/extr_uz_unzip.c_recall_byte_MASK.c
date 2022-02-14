
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint ;
struct TYPE_4__ {scalar_t__ ndx; TYPE_1__** block; } ;
struct TYPE_3__ {int * byte; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;

uint8_t FUNC_1 (uint VAR_4) {
  if(VAR_4 > VAR_0 || VAR_4 >= VAR_3->ndx)
    FUNC_0(VAR_1);

  uint VAR_5 = VAR_3->ndx - VAR_4;
  uint VAR_6 = VAR_5 % VAR_2;
  uint VAR_7 = VAR_3->ndx / VAR_2 - VAR_5 / VAR_2;
  return VAR_3->block[VAR_7]->byte[VAR_6];
}
