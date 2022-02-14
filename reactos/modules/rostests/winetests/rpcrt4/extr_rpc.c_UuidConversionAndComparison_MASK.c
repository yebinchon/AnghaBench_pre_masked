
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UUID ;
typedef scalar_t__ RPC_STATUS ;
typedef char* LPWSTR ;
typedef char* LPSTR ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (unsigned char*,int *) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (int *,unsigned char**) ;
 scalar_t__ FUNC_6 (int *,char**) ;
 int** VAR_2 ;
 int * VAR_3 ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8(void) {
    CHAR VAR_4[100], VAR_5;
    LPSTR VAR_6 = VAR_4;
    WCHAR VAR_7[100], VAR_8;
    LPWSTR VAR_9 = VAR_7;

    UUID VAR_10, VAR_11, *VAR_12, *VAR_13;
    RPC_STATUS VAR_14;

    int VAR_15,VAR_16;


    for (VAR_15 = 0; VAR_15 < 11; VAR_15++)
        for (VAR_16 = 0; VAR_16 < 11; VAR_16++) {
     if (VAR_15 < 10) {
         VAR_10 = VAR_3[VAR_15];
  VAR_12 = &VAR_10;
            } else {
         VAR_12 = ((void*)0);
     }
     if (VAR_16 < 10) {
         VAR_11 = VAR_3[VAR_16];
  VAR_13 = &VAR_11;
            } else {
         VAR_13 = ((void*)0);
     }
     FUNC_7( (FUNC_2(VAR_12, VAR_13, &VAR_14) == VAR_2[VAR_15][VAR_16]), "UUID Equality\n" );
        }


    for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
        VAR_10 = VAR_3[VAR_15];
 FUNC_7( (FUNC_5(&VAR_10, (unsigned char**)&VAR_6) == VAR_1), "Simple UUID->String copy\n" );
 FUNC_7( (FUNC_3((unsigned char*)VAR_6, &VAR_11) == VAR_1), "Simple String->UUID copy from generated UUID String\n" );
 FUNC_7( FUNC_2(&VAR_10, &VAR_11, &VAR_14), "Uuid -> String -> Uuid transform\n" );

 for (VAR_16 = 0; VAR_16 < 36; VAR_16++) {
     VAR_5 = VAR_6[VAR_16];
     VAR_6[VAR_16] = 'g';
     FUNC_7( (FUNC_3((unsigned char*)VAR_6, &VAR_10) == VAR_0), "Invalid UUID String\n" );
     VAR_6[VAR_16] = VAR_5;
 }
 FUNC_0((unsigned char **)&VAR_6);
    }


    for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
        VAR_10 = VAR_3[VAR_15];
        VAR_14=FUNC_6(&VAR_10, &VAR_9);
        FUNC_7( (VAR_14 == VAR_1), "Simple UUID->WString copy\n" );
        FUNC_7( (FUNC_4(VAR_9, &VAR_11) == VAR_1), "Simple WString->UUID copy from generated UUID String\n" );
        FUNC_7( FUNC_2(&VAR_10, &VAR_11, &VAR_14), "Uuid -> WString -> Uuid transform\n" );

 for (VAR_16 = 0; VAR_16 < 36; VAR_16++) {
     VAR_8 = VAR_9[VAR_16];
     VAR_9[VAR_16] = 'g';
     FUNC_7( (FUNC_4(VAR_9, &VAR_10) == VAR_0), "Invalid UUID WString\n" );
     VAR_9[VAR_16] = VAR_8;
 }
 FUNC_1(&VAR_9);
    }
}
