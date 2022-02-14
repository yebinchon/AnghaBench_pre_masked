
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sectorSize; int fd; scalar_t__ tempFile; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Pager *VAR_1){
  FUNC_0( FUNC_1(VAR_1->fd) || VAR_1->tempFile );

  if( VAR_1->tempFile
   || (FUNC_2(VAR_1->fd) &
              VAR_0)!=0
  ){



    VAR_1->sectorSize = 512;
  }else{
    VAR_1->sectorSize = FUNC_3(VAR_1->fd);
  }
}
