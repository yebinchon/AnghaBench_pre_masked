
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VLogFile ;
struct TYPE_6__ {scalar_t__ szOsFile; } ;
struct TYPE_5__ {scalar_t__ szOsFile; } ;
struct TYPE_4__ {TYPE_2__ base; TYPE_3__* pVfs; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_2(const char *VAR_1){
  VAR_0.pVfs = FUNC_0(0);
  VAR_0.base.szOsFile = sizeof(VLogFile) + VAR_0.pVfs->szOsFile;
  return FUNC_1(&VAR_0.base, 1);
}
