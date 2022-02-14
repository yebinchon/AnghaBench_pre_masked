
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
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (short const*) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,int ,struct flock*) ;
 int FUNC_3 (struct flock*,int ,int) ;

__attribute__((used)) static int FUNC_4(lsm_file *VAR_11, int VAR_12, int VAR_13){
  int VAR_14 = VAR_8;
  PosixFile *VAR_15 = (PosixFile *)VAR_11;
  static const short VAR_16[3] = { 129, 130, 128 };
  struct flock VAR_17;

  FUNC_1( VAR_16[VAR_7]==129 );
  FUNC_1( VAR_16[VAR_6]==130 );
  FUNC_1( VAR_16[VAR_5]==128 );
  FUNC_1( VAR_13>=0 && VAR_13<FUNC_0(VAR_16) );
  FUNC_1( VAR_12>0 && VAR_12<=32 );

  FUNC_3(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.l_whence = VAR_9;
  VAR_17.l_len = 1;
  VAR_17.l_type = VAR_16[VAR_13];
  VAR_17.l_start = (4096-VAR_12);

  if( FUNC_2(VAR_15->fd, VAR_2, &VAR_17) ){
    int VAR_18 = VAR_10;
    if( VAR_18==VAR_0 || VAR_18==VAR_1 ){
      VAR_14 = VAR_3;
    }else{
      VAR_14 = VAR_4;
    }
  }

  return VAR_14;
}
