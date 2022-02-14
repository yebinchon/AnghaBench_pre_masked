
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int URegularExpression ;
typedef int UErrorCode ;
typedef int UChar ;
typedef scalar_t__ UBool ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_1 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int *,int ) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 int * FUNC_8 (int const*,int,int ,int ,int *) ;
 int FUNC_9 (int *,int const*,int,int *) ;

__attribute__((used)) static void FUNC_10(sqlite3_context *VAR_2, int VAR_3, sqlite3_value **VAR_4){
  UErrorCode VAR_5 = VAR_0;
  URegularExpression *VAR_6;
  UBool VAR_7;
  const UChar *VAR_8 = FUNC_6(VAR_4[1]);

  (void)VAR_3;




  if( !VAR_8 ){
    return;
  }

  VAR_6 = FUNC_3(VAR_2, 0);
  if( !VAR_6 ){
    const UChar *VAR_9 = FUNC_6(VAR_4[0]);
    if( !VAR_9 ){
      return;
    }
    VAR_6 = FUNC_8(VAR_9, -1, 0, 0, &VAR_5);

    if( FUNC_0(VAR_5) ){
      FUNC_5(VAR_2, 0, VAR_6, VAR_1);
    }else{
      FUNC_1(!VAR_6);
      FUNC_2(VAR_2, "uregex_open", VAR_5);
      return;
    }
  }


  FUNC_9(VAR_6, VAR_8, -1, &VAR_5);
  if( !FUNC_0(VAR_5) ){
    FUNC_2(VAR_2, "uregex_setText", VAR_5);
    return;
  }


  VAR_7 = FUNC_7(VAR_6, 0, &VAR_5);
  if( !FUNC_0(VAR_5) ){
    FUNC_2(VAR_2, "uregex_matches", VAR_5);
    return;
  }






  FUNC_9(VAR_6, 0, 0, &VAR_5);


  FUNC_4(VAR_2, VAR_7 ? 1 : 0);
}
