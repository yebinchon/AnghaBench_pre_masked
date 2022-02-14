
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* zFilename; scalar_t__ memDb; } ;
typedef TYPE_1__ Pager ;



const char *FUNC_0(Pager *VAR_0, int VAR_1){
  return (VAR_1 && VAR_0->memDb) ? "" : VAR_0->zFilename;
}
