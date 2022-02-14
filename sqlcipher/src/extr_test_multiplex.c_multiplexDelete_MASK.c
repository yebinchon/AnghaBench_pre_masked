
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* xDelete ) (TYPE_1__*,char const*,int) ;int (* xAccess ) (TYPE_1__*,char*,int ,int*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_10__ {TYPE_1__* pOrigVfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__ VAR_5 ;
 int FUNC_0 (char const*,int,int ,int,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,int) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,char*,int ,int*) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_9(
  sqlite3_vfs *VAR_6,
  const char *VAR_7,
  int VAR_8
){
  int VAR_9;
  sqlite3_vfs *VAR_10 = VAR_5.pOrigVfs;
  VAR_9 = VAR_10->xDelete(VAR_10, VAR_7, VAR_8);
  if( VAR_9==VAR_2 ){



    int VAR_11 = (int)FUNC_3(VAR_7);
    char *VAR_12;
    VAR_12 = FUNC_2(VAR_11 + 5);
    if( VAR_12==0 ){
      VAR_9 = VAR_1;
    }else{
      int VAR_13 = 0;
      int VAR_14;
      do{
        FUNC_0(VAR_7, VAR_11, VAR_3, ++VAR_13, VAR_12);
        VAR_9 = VAR_10->xAccess(VAR_10, VAR_12, VAR_0, &VAR_14);
      }while( VAR_9==VAR_2 && VAR_14 );
      while( VAR_9==VAR_2 && VAR_13>1 ){
        FUNC_0(VAR_7, VAR_11, VAR_3, --VAR_13, VAR_12);
        VAR_9 = VAR_10->xDelete(VAR_10, VAR_12, VAR_8);
      }
      if( VAR_9==VAR_2 ){
        VAR_13 = 0;
        do{
          FUNC_0(VAR_7, VAR_11, VAR_4, ++VAR_13, VAR_12);
          VAR_9 = VAR_10->xAccess(VAR_10, VAR_12, VAR_0, &VAR_14);
        }while( VAR_9==VAR_2 && VAR_14 );
        while( VAR_9==VAR_2 && VAR_13>1 ){
          FUNC_0(VAR_7, VAR_11, VAR_4, --VAR_13, VAR_12);
          VAR_9 = VAR_10->xDelete(VAR_10, VAR_12, VAR_8);
        }
      }
    }
    FUNC_1(VAR_12);
  }
  return VAR_9;
}
