
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* coreRegisters; } ;
struct TYPE_3__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

const char *
FUNC_0 (int VAR_3)
{
 if (VAR_3 < VAR_0 || VAR_3 > VAR_1) {
  return ((void*)0);
 }
 return VAR_2.coreRegisters[VAR_3 - VAR_0].name;
}
