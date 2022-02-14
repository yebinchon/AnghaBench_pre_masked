
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nRef; scalar_t__ h; int exclMask; int sharedMask; int mutex; } ;
typedef TYPE_1__ unixShmNode ;
typedef int u16 ;
struct flock {int l_type; int l_start; int l_len; int l_whence; } ;
typedef int f ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct flock*,int ,int) ;
 int FUNC_3 (scalar_t__,int ,struct flock*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
  unixShmNode *VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11
){
  struct flock VAR_12;
  int VAR_13 = VAR_6;


  FUNC_1( FUNC_4(VAR_8->mutex) || VAR_8->nRef==0 );


  FUNC_1( VAR_11==1 || VAR_9!=VAR_0 );


  FUNC_1( VAR_11>=1 && VAR_11<VAR_7 );

  if( VAR_8->h>=0 ){

    FUNC_2(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.l_type = VAR_9;
    VAR_12.l_whence = VAR_4;
    VAR_12.l_start = VAR_10;
    VAR_12.l_len = VAR_11;

    VAR_13 = FUNC_3(VAR_8->h, VAR_1, &VAR_12);
    VAR_13 = (VAR_13!=(-1)) ? VAR_6 : VAR_5;
  }
  return VAR_13;
}
