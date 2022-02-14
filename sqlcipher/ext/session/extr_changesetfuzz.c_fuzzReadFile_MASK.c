
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (void*,size_t,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, int *VAR_3, void **VAR_4){
  FILE *VAR_5;
  sqlite3_int64 VAR_6;
  void *VAR_7;
  VAR_5 = FUNC_2(VAR_2, "rb");
  if( VAR_5==0 ){
    FUNC_3(VAR_1, "cannot open \"%s\" for reading\n", VAR_2);
    FUNC_0(1);
  }
  FUNC_5(VAR_5, 0, VAR_0);
  VAR_6 = FUNC_6(VAR_5);
  FUNC_7(VAR_5);
  VAR_7 = FUNC_8( VAR_6 ? VAR_6 : 1 );
  if( VAR_7==0 ){
    FUNC_3(VAR_1, "cannot allocate %d to hold content of \"%s\"\n",
            (int)VAR_6, VAR_2);
    FUNC_0(1);
  }
  if( VAR_6>0 ){
    if( FUNC_4(VAR_7, (size_t)VAR_6, 1, VAR_5)!=1 ){
      FUNC_3(VAR_1, "cannot read all %d bytes of \"%s\"\n",
              (int)VAR_6, VAR_2);
      FUNC_0(1);
    }
    FUNC_1(VAR_5);
  }
  *VAR_3 = (int)VAR_6;
  *VAR_4 = VAR_7;
}
