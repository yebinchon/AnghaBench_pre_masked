
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int,int *,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int,int *,int) ;

__attribute__((used)) static void FUNC_13(const char *VAR_6, const char *VAR_7, int VAR_8){

  if( FUNC_1(VAR_6, VAR_0) ){
    FUNC_11(VAR_7);
  }else{
    int VAR_9;
    int VAR_10;
    off_t VAR_11;
    off_t VAR_12;
    struct stat VAR_13;
    u8 *VAR_14;

    VAR_9 = FUNC_7(VAR_6, VAR_2 | VAR_5, 0644);
    VAR_10 = FUNC_7(VAR_7, VAR_3 | VAR_1 | VAR_5, 0644);

    FUNC_3(VAR_9, &VAR_13);
    VAR_11 = VAR_13.st_size;
    FUNC_4(VAR_10, VAR_11);

    VAR_14 = FUNC_10(4096);
    for(VAR_12=0; VAR_12<VAR_11; VAR_12+=4096){
      int VAR_15 = VAR_8 && VAR_12 == 0;
      int VAR_16 = FUNC_0((VAR_15 ? 4066 : 4096), VAR_11 - VAR_12);
      FUNC_6(VAR_14, 0, 4096);
      FUNC_8(VAR_9, VAR_14, VAR_16);
      FUNC_12(VAR_10, VAR_14, VAR_16);
      if( VAR_15 ){
        FUNC_5(VAR_9, 4096, VAR_4);
        FUNC_5(VAR_10, 4096, VAR_4);
      }
    }
    FUNC_9(VAR_14);

    FUNC_2(VAR_9);
    FUNC_2(VAR_10);
  }
}
