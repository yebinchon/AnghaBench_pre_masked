
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** condCodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

const char *
FUNC_0 (int VAR_3)
{
 if (VAR_3 < VAR_0 || VAR_3 > VAR_1) {
  return ((void*)0);
 }
 return VAR_2.condCodes[VAR_3 - VAR_0];
}
