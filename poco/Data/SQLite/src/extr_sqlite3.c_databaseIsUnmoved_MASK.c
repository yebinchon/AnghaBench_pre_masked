
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dbSize; int fd; scalar_t__* zFilename; scalar_t__ tempFile; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(Pager *VAR_4){
  int VAR_5 = 0;
  int VAR_6;

  if( VAR_4->tempFile ) return VAR_2;
  if( VAR_4->dbSize==0 ) return VAR_2;
  FUNC_0( VAR_4->zFilename && VAR_4->zFilename[0] );
  VAR_6 = FUNC_1(VAR_4->fd, VAR_0, &VAR_5);
  if( VAR_6==VAR_1 ){



    VAR_6 = VAR_2;
  }else if( VAR_6==VAR_2 && VAR_5 ){
    VAR_6 = VAR_3;
  }
  return VAR_6;
}
