
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zBase ;
typedef int va_list ;
struct TYPE_9__ {int * aLimit; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {scalar_t__ accError; int printfFlags; } ;
typedef TYPE_2__ StrAccum ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,char*,int,int ) ;
 int FUNC_4 (TYPE_2__*,char const*,int ) ;

char *FUNC_5(sqlite3 *VAR_4, const char *VAR_5, va_list VAR_6){
  char *VAR_7;
  char VAR_8[VAR_3];
  StrAccum VAR_9;
  FUNC_0( VAR_4!=0 );
  FUNC_3(&VAR_9, VAR_4, VAR_8, sizeof(VAR_8),
                      VAR_4->aLimit[VAR_0]);
  VAR_9.printfFlags = VAR_2;
  FUNC_4(&VAR_9, VAR_5, VAR_6);
  VAR_7 = FUNC_2(&VAR_9);
  if( VAR_9.accError==VAR_1 ){
    FUNC_1(VAR_4);
  }
  return VAR_7;
}
