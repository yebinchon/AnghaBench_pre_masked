
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
typedef int aTrans ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,char const*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,char*,int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_8(FILE *VAR_0){
  FILE *VAR_1;
  char VAR_2[200];
  FUNC_5(sizeof(VAR_2), VAR_2, "/proc/%d/io", FUNC_4());
  VAR_1 = FUNC_2(VAR_2, "rb");
  if( VAR_1==0 ) return;
  while( FUNC_1(VAR_2, sizeof(VAR_2), VAR_1)!=0 ){
    static const struct {
      const char *zPattern;
      const char *zDesc;
    } VAR_3[] = {
      { "rchar: ", "Bytes received by read():" },
      { "wchar: ", "Bytes sent to write():" },
      { "syscr: ", "Read() system calls:" },
      { "syscw: ", "Write() system calls:" },
      { "read_bytes: ", "Bytes read from storage:" },
      { "write_bytes: ", "Bytes written to storage:" },
      { "cancelled_write_bytes: ", "Cancelled write bytes:" },
    };
    int VAR_4;
    for(VAR_4=0; VAR_4<sizeof(VAR_3)/sizeof(VAR_3[0]); VAR_4++){
      int VAR_5 = (int)FUNC_6(VAR_3[VAR_4].zPattern);
      if( FUNC_7(VAR_3[VAR_4].zPattern, VAR_2, VAR_5)==0 ){
        FUNC_3(VAR_0, "%-36s %s", VAR_3[VAR_4].zDesc, &VAR_2[VAR_5]);
        break;
      }
    }
  }
  FUNC_0(VAR_1);
}
