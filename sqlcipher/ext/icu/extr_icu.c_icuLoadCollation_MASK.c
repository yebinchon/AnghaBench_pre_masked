
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int UErrorCode ;
typedef int UCollator ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char const*,int ,void*,int ,int ) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_5,
  int VAR_6,
  sqlite3_value **VAR_7
){
  sqlite3 *VAR_8 = (sqlite3 *)FUNC_5(VAR_5);
  UErrorCode VAR_9 = VAR_2;
  const char *VAR_10;
  const char *VAR_11;
  UCollator *VAR_12;
  int VAR_13;

  FUNC_1(VAR_6==2);
  (void)VAR_6;
  VAR_10 = (const char *)FUNC_6(VAR_7[0]);
  VAR_11 = (const char *)FUNC_6(VAR_7[1]);

  if( !VAR_10 || !VAR_11 ){
    return;
  }

  VAR_12 = FUNC_8(VAR_10, &VAR_9);
  if( !FUNC_0(VAR_9) ){
    FUNC_2(VAR_5, "ucol_open", VAR_9);
    return;
  }
  FUNC_1(*VAR_5);

  VAR_13 = FUNC_3(VAR_8, VAR_11, VAR_1, (void *)VAR_12,
      VAR_3, VAR_4
  );
  if( VAR_13!=VAR_0 ){
    FUNC_7(VAR_12);
    FUNC_4(VAR_5, "Error registering collation function", -1);
  }
}
