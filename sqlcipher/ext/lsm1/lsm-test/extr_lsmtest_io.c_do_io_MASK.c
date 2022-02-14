
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ fd; int nWrite; } ;
typedef TYPE_1__ u8 ;
typedef TYPE_1__ IoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int,char*,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int ,int*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char**) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

int FUNC_14(int VAR_3, char **VAR_4){
  IoContext VAR_5;
  int VAR_6;
  char *VAR_7;
  char *VAR_8;
  int VAR_9;
  int VAR_10 = 0;

  char *VAR_11 = 0;
  char *VAR_12;

  u8 *VAR_13;

  FUNC_5(&VAR_5, 0, sizeof(IoContext));
  if( VAR_3<2 ){
    FUNC_11("FILE PGSZ ?CMD-1 ...?");
    return -1;
  }
  VAR_7 = VAR_4[0];
  VAR_8 = VAR_4[1];

  VAR_6 = (int)FUNC_3(VAR_8, 0, &VAR_10);
  if( VAR_6<=0 ){
    FUNC_10("Ridiculous page size: %d", VAR_6);
    return -1;
  }
  VAR_13 = FUNC_4(VAR_6);
  FUNC_5(VAR_13, 0x77, VAR_6);

  VAR_5.fd = FUNC_6(VAR_7, VAR_1|VAR_0|VAR_2, 0644);
  if( VAR_5.fd<0 ){
    FUNC_7("open: ");
    return -1;
  }

  if( VAR_3==2 ){
    FUNC_9(&VAR_11);
    FUNC_13();
    VAR_12 = VAR_11;
    while( *VAR_12 && VAR_10==0 ){
      VAR_10 = FUNC_1(&VAR_5, VAR_13, VAR_6, VAR_12, &VAR_12);
    }
  }else{
    FUNC_13();
    for(VAR_9=2; VAR_9<VAR_3; VAR_9++){
      VAR_10 = FUNC_1(&VAR_5, VAR_13, VAR_6, VAR_4[VAR_9], 0);
    }
  }

  FUNC_8("%dK written in %d ms\n", VAR_5.nWrite, FUNC_12());

  FUNC_2(VAR_11);
  FUNC_0(VAR_5.fd);

  return 0;
}
