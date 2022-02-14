
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const* const*) ;




const char *FUNC_2(int VAR_0){
  static const char* const VAR_1[] = {
                             "not an error",
                             "SQL logic error",
                             0,
                             "access permission denied",
                             "query aborted",
                             "database is locked",
                             "database table is locked",
                             "out of memory",
                             "attempt to write a readonly database",
                             "interrupted",
                             "disk I/O error",
                             "database disk image is malformed",
                             "unknown operation",
                             "database or disk is full",
                             "unable to open database file",
                             "locking protocol",
                             0,
                             "database schema has changed",
                             "string or blob too big",
                             "constraint failed",
                             "datatype mismatch",
                             "bad parameter or other API misuse",



                             0,

                             "authorization denied",
                             0,
                             "column index out of range",
                             "file is not a database",
                             "notification message",
                             "warning message",
  };
  const char *VAR_2 = "unknown error";
  switch( VAR_0 ){
    case 130: {
      VAR_2 = "abort due to ROLLBACK";
      break;
    }
    case 128: {
      VAR_2 = "another row available";
      break;
    }
    case 129: {
      VAR_2 = "no more rows available";
      break;
    }
    default: {
      VAR_0 &= 0xff;
      if( FUNC_0(VAR_0>=0) && VAR_0<FUNC_1(VAR_1) && VAR_1[VAR_0]!=0 ){
        VAR_2 = VAR_1[VAR_0];
      }
      break;
    }
  }
  return VAR_2;
}
