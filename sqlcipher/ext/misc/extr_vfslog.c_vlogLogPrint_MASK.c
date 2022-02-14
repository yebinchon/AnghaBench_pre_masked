
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int z3 ;
typedef int z2 ;
typedef int z1 ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {scalar_t__ zFilename; int out; } ;
typedef TYPE_1__ VLogLog ;


 int FUNC_0 (int ,char*,int ,int ,char const*,int,char*,char*,char*,int) ;
 int FUNC_1 (int,char*,char*,int,...) ;

__attribute__((used)) static void FUNC_2(
  VLogLog *VAR_0,
  sqlite3_int64 VAR_1,
  sqlite3_int64 VAR_2,
  const char *VAR_3,
  sqlite3_int64 VAR_4,
  sqlite3_int64 VAR_5,
  const char *VAR_6,
  int VAR_7
){
  char VAR_8[40], VAR_9[40], VAR_10[2000];
  if( VAR_0==0 ) return;
  if( VAR_4>=0 ){
    FUNC_1(sizeof(VAR_8), VAR_8, "%lld", VAR_4);
  }else{
    VAR_8[0] = 0;
  }
  if( VAR_5>=0 ){
    FUNC_1(sizeof(VAR_9), VAR_9, "%lld", VAR_5);
  }else{
    VAR_9[0] = 0;
  }
  if( VAR_6 ){
    FUNC_1(sizeof(VAR_10), VAR_10, "\"%.*w\"", sizeof(VAR_10)-4, VAR_6);
  }else{
    VAR_10[0] = 0;
  }
  FUNC_0(VAR_0->out,"%d,%d,%s,%d,%s,%s,%s,%d\n",
      VAR_1, VAR_2, VAR_3, VAR_0->zFilename==0, VAR_8, VAR_9, VAR_10, VAR_7);
}
