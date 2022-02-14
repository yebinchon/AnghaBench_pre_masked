
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char const u8 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
struct TYPE_2__ {char* z; int n; } ;
typedef TYPE_1__ Token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*,int*) ;
 char* FUNC_3 (int *,char*,int,unsigned char const*,unsigned char const*,char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int ) ;
 unsigned char* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6
){
  unsigned char const *VAR_7 = FUNC_6(VAR_6[0]);
  unsigned char const *VAR_8 = FUNC_6(VAR_6[1]);

  int VAR_9;
  Token VAR_10;
  unsigned char const *VAR_11 = VAR_7;
  int VAR_12 = 0;
  char *VAR_13;

  sqlite3 *VAR_14 = FUNC_4(VAR_4);

  FUNC_0(VAR_5);





  if( VAR_7 ){
    do {
      if( !*VAR_11 ){

        return;
      }


      VAR_10.z = (char*)VAR_11;
      VAR_10.n = VAR_12;




      do {
        VAR_11 += VAR_12;
        VAR_12 = FUNC_2(VAR_11, &VAR_9);
      } while( VAR_9==VAR_2 );
      FUNC_1( VAR_12>0 );
    } while( VAR_9!=VAR_1 && VAR_9!=VAR_3 );

    VAR_13 = FUNC_3(VAR_14, "%.*s\"%w\"%s", ((u8*)VAR_10.z) - VAR_7, VAR_7,
       VAR_8, VAR_10.z+VAR_10.n);
    FUNC_5(VAR_4, VAR_13, -1, VAR_0);
  }
}
