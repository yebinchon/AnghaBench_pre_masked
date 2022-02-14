
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int avail_in; scalar_t__ total_out; int avail_out; int * next_out; int * next_in; } ;
typedef TYPE_1__ z_stream ;
typedef int u8 ;
typedef int str ;
typedef int sqlite3_int64 ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int ,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(
  const u8 *VAR_7, int VAR_8,
  u8 **VAR_9, int *VAR_10,
  char **VAR_11
){
  sqlite3_int64 VAR_12 = FUNC_0(VAR_8);
  u8 *VAR_13;
  int VAR_14 = VAR_2;

  VAR_13 = (u8*)FUNC_6(VAR_12);
  if( VAR_13==0 ){
    VAR_14 = VAR_1;
  }else{
    int VAR_15;
    z_stream VAR_16;
    FUNC_4(&VAR_16, 0, sizeof(VAR_16));
    VAR_16.next_in = (Bytef*)VAR_7;
    VAR_16.avail_in = VAR_8;
    VAR_16.next_out = VAR_13;
    VAR_16.avail_out = VAR_12;

    FUNC_3(&VAR_16, 9, VAR_4, -15, 8, VAR_3);
    VAR_15 = FUNC_1(&VAR_16, VAR_5);

    if( VAR_15==VAR_6 ){
      *VAR_9 = VAR_13;
      *VAR_10 = (int)VAR_16.total_out;
    }else{
      FUNC_5(VAR_13);
      *VAR_11 = FUNC_7("zipfile: deflate() error");
      VAR_14 = VAR_0;
    }
    FUNC_2(&VAR_16);
  }

  return VAR_14;
}
