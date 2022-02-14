
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {void* tv_sec; scalar_t__ tv_usec; } ;
struct timespec {void* tv_sec; scalar_t__ tv_nsec; } ;
struct stat {int st_mode; } ;
typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int mode_t ;
struct TYPE_5__ {int dwHighDateTime; scalar_t__ dwLowDateTime; } ;
typedef int SYSTEMTIME ;
typedef scalar_t__ LPWSTR ;
typedef int LONGLONG ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ FILETIME ;
typedef int FILE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int * FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_13 (char const*,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,scalar_t__) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (char const*,char const*) ;
 void* FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,char const*,struct timespec*,int ) ;
 scalar_t__ FUNC_22 (char const*,struct timeval*) ;

__attribute__((used)) static int FUNC_23(
  sqlite3_context *VAR_8,
  const char *VAR_9,
  sqlite3_value *VAR_10,
  mode_t VAR_11,
  sqlite3_int64 VAR_12
){

  if( FUNC_5(VAR_11) ){
    const char *VAR_13 = (const char*)FUNC_18(VAR_10);
    if( FUNC_19(VAR_13, VAR_9)<0 ) return 1;
  }else

  {
    if( FUNC_4(VAR_11) ){
      if( FUNC_13(VAR_9, VAR_11) ){




        struct stat VAR_14;
        if( VAR_7!=VAR_2
         || 0!=FUNC_10(VAR_9, &VAR_14)
         || !FUNC_4(VAR_14.st_mode)
         || ((VAR_14.st_mode&0777)!=(VAR_11&0777) && 0!=FUNC_8(VAR_9, VAR_11&0777))
        ){
          return 1;
        }
      }
    }else{
      sqlite3_int64 VAR_15 = 0;
      const char *VAR_16;
      int VAR_17 = 0;
      FILE *VAR_18 = FUNC_11(VAR_9, "wb");
      if( VAR_18==0 ) return 1;
      VAR_16 = (const char*)FUNC_16(VAR_10);
      if( VAR_16 ){
        sqlite3_int64 VAR_19 = FUNC_12(VAR_16, 1, FUNC_17(VAR_10), VAR_18);
        VAR_15 = FUNC_17(VAR_10);
        if( VAR_15!=VAR_19 ){
          VAR_17 = 1;
        }
      }
      FUNC_9(VAR_18);
      if( VAR_17==0 && VAR_11 && FUNC_8(VAR_9, VAR_11 & 0777) ){
        VAR_17 = 1;
      }
      if( VAR_17 ) return 2;
      FUNC_15(VAR_8, VAR_15);
    }
  }

  if( VAR_12>=0 ){
    struct timeval VAR_20[2];
    VAR_20[0].tv_usec = VAR_20[1].tv_usec = 0;
    VAR_20[0].tv_sec = FUNC_20(0);
    VAR_20[1].tv_sec = VAR_12;
    if( FUNC_22(VAR_9, VAR_20) ){
      return 1;
    }

  }

  return 0;
}
