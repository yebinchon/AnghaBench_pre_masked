
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_stmt ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int,int,int ,int **,char const**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (void const*,int) ;
 char* FUNC_5 (TYPE_1__*,void const*,int,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(
  sqlite3 *VAR_3,
  const void *VAR_4,
  int VAR_5,
  int VAR_6,
  sqlite3_stmt **VAR_7,
  const void **VAR_8
){




  char *VAR_9;
  const char *VAR_10 = 0;
  int VAR_11 = VAR_1;




  *VAR_7 = 0;
  if( !FUNC_3(VAR_3)||VAR_4==0 ){
    return VAR_0;
  }
  if( VAR_5>=0 ){
    int VAR_12;
    const char *VAR_13 = (const char*)VAR_4;
    for(VAR_12=0; VAR_12<VAR_5 && (VAR_13[VAR_12]!=0 || VAR_13[VAR_12+1]!=0); VAR_12 += 2){}
    VAR_5 = VAR_12;
  }
  FUNC_7(VAR_3->mutex);
  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_2);
  if( VAR_9 ){
    VAR_11 = FUNC_2(VAR_3, VAR_9, -1, VAR_6, 0, VAR_7, &VAR_10);
  }

  if( VAR_10 && VAR_8 ){





    int VAR_14 = FUNC_6(VAR_9, (int)(VAR_10-VAR_9));
    *VAR_8 = (u8 *)VAR_4 + FUNC_4(VAR_4, VAR_14);
  }
  FUNC_1(VAR_3, VAR_9);
  VAR_11 = FUNC_0(VAR_3, VAR_11);
  FUNC_8(VAR_3->mutex);
  return VAR_11;
}
