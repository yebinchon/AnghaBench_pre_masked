
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (unsigned char*,int,size_t,int *) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,unsigned char*) ;

__attribute__((used)) static void FUNC_11(const char *VAR_0, sqlite3_int64 *VAR_1, int VAR_2){
  FILE *VAR_3;
  sqlite3_int64 VAR_4;
  size_t VAR_5;
  unsigned char *VAR_6;
  const char *VAR_7 = "wb";

  VAR_4 = FUNC_3(VAR_0);
  if( VAR_4<0 ){
    FUNC_0("No such file: \"%s\"", VAR_0);
  }
  *VAR_1 = VAR_4;
  if( VAR_4==0 ) return;
  VAR_6 = FUNC_9( VAR_4 );
  if( VAR_6==0 ){
    FUNC_0("Cannot allocate %lld bytes\n", VAR_4);
  }
  FUNC_10((int)VAR_4, VAR_6);



  VAR_3 = FUNC_5(VAR_0, VAR_7);
  if( VAR_3==0 ){
    FUNC_0("Cannot open \"%s\" for writing\n", VAR_0);
  }
  VAR_5 = FUNC_7(VAR_6, 1, (size_t)VAR_4, VAR_3);
  if( VAR_2 ){



    FUNC_6(FUNC_4(VAR_3));

  }
  FUNC_1(VAR_3);
  if( VAR_5!=(size_t)VAR_4 ){
    FUNC_0("Wrote only %d of %d bytes to \"%s\"\n",
               (int)VAR_5, (int)VAR_4, VAR_0);
  }
  FUNC_8(VAR_6);
}
