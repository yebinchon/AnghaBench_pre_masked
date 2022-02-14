
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_4__ {scalar_t__ nBuffer; scalar_t__ iBufferOfst; int * aBuffer; } ;
typedef TYPE_1__ DemoFile ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,void const*,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_file *VAR_2,
  const void *VAR_3,
  int VAR_4,
  sqlite_int64 VAR_5
){
  DemoFile *VAR_6 = (DemoFile*)VAR_2;

  if( VAR_6->aBuffer ){
    char *VAR_7 = (char *)VAR_3;
    int VAR_8 = VAR_4;
    sqlite3_int64 VAR_9 = VAR_5;

    while( VAR_8>0 ){
      int VAR_10;





      if( VAR_6->nBuffer==VAR_0 || VAR_6->iBufferOfst+VAR_6->nBuffer!=VAR_9 ){
        int VAR_11 = FUNC_2(VAR_6);
        if( VAR_11!=VAR_1 ){
          return VAR_11;
        }
      }
      FUNC_0( VAR_6->nBuffer==0 || VAR_6->iBufferOfst+VAR_6->nBuffer==VAR_9 );
      VAR_6->iBufferOfst = VAR_9 - VAR_6->nBuffer;


      VAR_10 = VAR_0 - VAR_6->nBuffer;
      if( VAR_10>VAR_8 ){
        VAR_10 = VAR_8;
      }
      FUNC_3(&VAR_6->aBuffer[VAR_6->nBuffer], VAR_7, VAR_10);
      VAR_6->nBuffer += VAR_10;

      VAR_8 -= VAR_10;
      VAR_9 += VAR_10;
      VAR_7 += VAR_10;
    }
  }else{
    return FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
  }

  return VAR_1;
}
