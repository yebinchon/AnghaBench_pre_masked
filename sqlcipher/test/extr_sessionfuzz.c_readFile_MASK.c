
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
 size_t FUNC_4 (char*,int,long,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 long FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (long) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, void **VAR_3, int *VAR_4){
  FILE *VAR_5 = FUNC_2(VAR_2, "rb");
  long VAR_6;
  size_t VAR_7;
  char *VAR_8;
  *VAR_3 = 0;
  *VAR_4 = 0;
  if( VAR_5==0 ){
    FUNC_3(VAR_1, "Cannot open \"%s\" for reading\n", VAR_2);
    FUNC_0(1);
  }
  FUNC_5(VAR_5, 0, VAR_0);
  VAR_6 = FUNC_6(VAR_5);
  FUNC_7(VAR_5);
  VAR_8 = FUNC_8( VAR_6+1 );
  if( VAR_8==0 ){
    FUNC_3(VAR_1, "Failed to malloc %lld bytes\n", (sqlite3_int64)(VAR_6+1));
    FUNC_0(1);
  }
  VAR_7 = FUNC_4(VAR_8, 1, VAR_6, VAR_5);
  FUNC_1(VAR_5);
  if( VAR_7!=(size_t)VAR_6 ){
    FUNC_3(VAR_1, "Read only %d of %d bytes from %s\n", (int)VAR_7, (int)VAR_6,
                    VAR_2);
    FUNC_0(1);
  }
  VAR_8[VAR_6] = 0;
  *VAR_4 = VAR_6;
  *VAR_3 = VAR_8;
}
