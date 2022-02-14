
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int UChar32 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,int,int,int ) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const unsigned char *VAR_4 = FUNC_5(VAR_3[0]);
  const unsigned char *VAR_5 = FUNC_5(VAR_3[1]);
  UChar32 VAR_6 = 0;




  if( FUNC_4(VAR_3[0])>VAR_0 ){
    FUNC_2(VAR_1, "LIKE or GLOB pattern too complex", -1);
    return;
  }


  if( VAR_2==3 ){



    int VAR_7= FUNC_4(VAR_3[2]);
    const unsigned char *VAR_8 = FUNC_5(VAR_3[2]);
    int VAR_9 = 0;
    if( VAR_8==0 ) return;
    FUNC_0(VAR_8, VAR_9, VAR_7, VAR_6);
    if( VAR_9!=VAR_7){
      FUNC_2(VAR_1,
          "ESCAPE expression must be a single character", -1);
      return;
    }
  }

  if( VAR_4 && VAR_5 ){
    FUNC_3(VAR_1, FUNC_1(VAR_4, VAR_5, VAR_6));
  }
}
