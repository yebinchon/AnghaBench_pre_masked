
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;
typedef int aMult ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0){
  sqlite3_int64 VAR_1 = 0;
  static const struct { char *zSuffix; int iMult; } VAR_2[] = {
    { "KiB", 1024 },
    { "MiB", 1024*1024 },
    { "GiB", 1024*1024*1024 },
    { "KB", 1000 },
    { "MB", 1000000 },
    { "GB", 1000000000 },
    { "K", 1000 },
    { "M", 1000000 },
    { "G", 1000000000 },
  };
  int VAR_3;
  int VAR_4 = 0;
  if( VAR_0[0]=='-' ){
    VAR_4 = 1;
    VAR_0++;
  }else if( VAR_0[0]=='+' ){
    VAR_0++;
  }
  if( VAR_0[0]=='0' && VAR_0[1]=='x' ){
    int VAR_5;
    VAR_0 += 2;
    while( (VAR_5 = FUNC_2(VAR_0[0]))>=0 ){
      VAR_1 = (VAR_1<<4) + VAR_5;
      VAR_0++;
    }
  }else{
    while( FUNC_0(VAR_0[0]) ){
      VAR_1 = VAR_1*10 + VAR_0[0] - '0';
      VAR_0++;
    }
  }
  for(VAR_3=0; VAR_3<sizeof(VAR_2)/sizeof(VAR_2[0]); VAR_3++){
    if( FUNC_3(VAR_2[VAR_3].zSuffix, VAR_0)==0 ){
      VAR_1 *= VAR_2[VAR_3].iMult;
      break;
    }
  }
  if( VAR_1>0x7fffffff ) FUNC_1("parameter too large - max 2147483648");
  return (int)(VAR_4? -VAR_1 : VAR_1);
}
