
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flock {int l_len; short l_type; int l_start; int l_whence; } ;
typedef int lsm_file ;
typedef int lock ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ PosixFile ;


 int VAR_0 ;

 short VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (short const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,struct flock*) ;
 int FUNC_3 (struct flock*,int ,int) ;

__attribute__((used)) static int FUNC_4(lsm_file *VAR_8, int VAR_9, int VAR_10, int VAR_11){
  int VAR_12 = VAR_6;
  PosixFile *VAR_13 = (PosixFile *)VAR_8;
  static const short VAR_14[3] = { 0, 129, 128 };
  struct flock VAR_15;

  FUNC_1( VAR_11==VAR_5 || VAR_11==VAR_4 );
  FUNC_1( VAR_14[VAR_5]==129 );
  FUNC_1( VAR_14[VAR_4]==128 );
  FUNC_1( VAR_11>=0 && VAR_11<FUNC_0(VAR_14) );
  FUNC_1( VAR_9>0 && VAR_9<=32 );

  FUNC_3(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.l_whence = VAR_7;
  VAR_15.l_len = VAR_10;
  VAR_15.l_type = VAR_14[VAR_11];
  VAR_15.l_start = (4096-VAR_9-VAR_10+1);

  if( FUNC_2(VAR_13->fd, VAR_0, &VAR_15) ){
    VAR_12 = VAR_3;
  }else if( VAR_15.l_type!=VAR_1 ){
    VAR_12 = VAR_2;
  }

  return VAR_12;
}
