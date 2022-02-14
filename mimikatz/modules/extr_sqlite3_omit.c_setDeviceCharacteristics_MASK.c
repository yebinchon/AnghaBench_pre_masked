
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sectorSize; int ctrlFlags; int deviceCharacteristics; int h; } ;
typedef TYPE_1__ unixFile ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(unixFile *VAR_6){
  FUNC_0( VAR_6->deviceCharacteristics==0 || VAR_6->sectorSize!=0 );
  if( VAR_6->sectorSize==0 ){
    if( VAR_6->ctrlFlags & VAR_5 ){
      VAR_6->deviceCharacteristics |= VAR_4;
    }

    VAR_6->sectorSize = VAR_2;
  }
}
