
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {unsigned int ndx; TYPE_1__** block; } ;
struct TYPE_3__ {int * byte; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static uint8_t FUNC_1 (unsigned VAR_3) {
  if(VAR_3 > VAR_0 || VAR_3 >= VAR_2->ndx)
    FUNC_0("invalid dictionary offset on inflate");

  unsigned VAR_4 = VAR_2->ndx - VAR_3;
  unsigned VAR_5 = VAR_4 % VAR_1;
  unsigned VAR_6 = VAR_2->ndx / VAR_1 - VAR_4 / VAR_1;
  return VAR_2->block[VAR_6]->byte[VAR_5];
}
