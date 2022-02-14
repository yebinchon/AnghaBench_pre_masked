
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_2__ {void (* alarmCallback ) (void*,int,int) ;int alarmThreshold; int nearlyFull; int mutex; void* alarmArg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
  void(*VAR_3)(void *VAR_4, sqlite3_int64 VAR_5,int VAR_6),
  void *VAR_7,
  sqlite3_int64 VAR_8
){
  int VAR_9;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
  VAR_2 = VAR_7;
  VAR_2 = VAR_8;
  VAR_9 = FUNC_0(VAR_1);
  VAR_2 = (VAR_8>0 && VAR_8<=VAR_9);
  FUNC_2(VAR_2);
  return VAR_0;
}
