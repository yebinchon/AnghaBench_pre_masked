
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp_file ;
typedef int fs_file ;
struct TYPE_4__ {int szOsFile; int mxPathname; } ;
struct TYPE_6__ {TYPE_1__ base; TYPE_2__* pParent; } ;
struct TYPE_5__ {int mxPathname; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(void){
  if( VAR_1.pParent ) return VAR_0;
  VAR_1.pParent = FUNC_1(0);
  VAR_1.base.mxPathname = VAR_1.pParent->mxPathname;
  VAR_1.base.szOsFile = FUNC_0(sizeof(tmp_file), sizeof(fs_file));
  return FUNC_2(&VAR_1.base, 0);
}
