
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int mode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char const*,int,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_7, int VAR_8, mode_t VAR_9){
  int VAR_10;
  mode_t VAR_11 = VAR_9 ? VAR_9 : VAR_5;
  do{



    VAR_10 = FUNC_3(VAR_7,VAR_8,VAR_11);

  }while( VAR_10<0 && VAR_6==VAR_0 );
  if( VAR_10>=0 ){
    if( VAR_9!=0 ){
      struct stat VAR_12;
      if( FUNC_2(VAR_10, &VAR_12)==0
       && VAR_12.st_size==0
       && (VAR_12.st_mode&0777)!=VAR_9
      ){
        FUNC_0(VAR_10, VAR_9);
      }
    }



  }
  return VAR_10;
}
