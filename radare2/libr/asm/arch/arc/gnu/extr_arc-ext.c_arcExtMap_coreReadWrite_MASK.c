
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum ExtReadWrite { ____Placeholder_ExtReadWrite } ExtReadWrite ;
struct TYPE_4__ {TYPE_1__* coreRegisters; } ;
struct TYPE_3__ {int rw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

enum ExtReadWrite
FUNC_0 (int VAR_4)
{
 if (VAR_4 < VAR_0 || VAR_4 > VAR_1) {
  return VAR_2;
 }
 return VAR_3.coreRegisters[VAR_4 - VAR_0].rw;
}
