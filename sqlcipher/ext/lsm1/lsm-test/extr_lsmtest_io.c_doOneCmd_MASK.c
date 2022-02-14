
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int off_t ;
typedef scalar_t__ i64 ;
struct TYPE_3__ {int nWrite; int fd; } ;
typedef TYPE_1__ IoContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char**,int*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static int FUNC_7(
  IoContext *VAR_1,
  u8 *VAR_2,
  int VAR_3,
  char *VAR_4,
  char **VAR_5
){
  char VAR_6;
  char *VAR_7 = VAR_4;

  while( FUNC_4(*VAR_7) ) VAR_7++;
  VAR_6 = *VAR_7;

  if( VAR_6==0 ){
    if( VAR_5 ) *VAR_5 = VAR_7;
    return 0;
  }

  if( VAR_6=='s' || VAR_6=='S' ){
    if( VAR_5 ) *VAR_5 = &VAR_7[1];
    return FUNC_0(VAR_1->fd);
  }

  if( FUNC_3(VAR_6) ){
    i64 VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11;
    int VAR_12;

    VAR_9 = (int)FUNC_1(VAR_7, &VAR_7, &VAR_10);
    if( VAR_10 || *VAR_7!='@' ) goto bad_command;
    VAR_7++;
    VAR_8 = FUNC_1(VAR_7, &VAR_7, &VAR_10);
    if( VAR_10 || (FUNC_4(*VAR_7)==0 && *VAR_7!='\0') ) goto bad_command;
    if( VAR_5 ) *VAR_5 = VAR_7;

    VAR_11 = (VAR_9+VAR_3-1) / VAR_3;
    FUNC_2(VAR_1->fd, (off_t)VAR_8, VAR_0);
    for(VAR_12=0; VAR_12<VAR_11; VAR_12++){
      FUNC_6(VAR_1->fd, VAR_2, VAR_3);
    }
    VAR_1->nWrite += VAR_9/1024;

    return 0;
  }

 bad_command:
  FUNC_5("unrecognized command: %s", VAR_4);
  return 1;
}
