
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef scalar_t__ i64 ;
struct TYPE_2__ {scalar_t__ pagesize; int mxPage; } ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,scalar_t__*) ;
 unsigned char* FUNC_2 (int,int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned char) ;
 int FUNC_4 (int,char*,int,int,int) ;
 int FUNC_5 (unsigned char*) ;

__attribute__((used)) static void FUNC_6(
  unsigned char VAR_1,
  unsigned char *VAR_2,
  int VAR_3,
  int VAR_4
){
  int VAR_5;
  int VAR_6 = 0;
  i64 VAR_7;
  i64 VAR_8;
  i64 VAR_9;
  VAR_5 = 0;
  if( VAR_1<=5 ){
    VAR_2 += 4;
    VAR_6 += 4;
  }
  if( VAR_1!=5 ){
    VAR_5 = FUNC_1(VAR_2, &VAR_7);
    VAR_2 += VAR_5;
    VAR_6 += VAR_5;
    VAR_9 = FUNC_3(VAR_7, VAR_1);
  }else{
    VAR_7 = VAR_9 = 0;
  }
  if( VAR_1==5 || VAR_1==13 ){
    VAR_5 = FUNC_1(VAR_2, &VAR_8);
    VAR_2 += VAR_5;
    VAR_6 += VAR_5;
  }
  if( VAR_9<VAR_7 ){
    int VAR_10 = FUNC_0(VAR_2+VAR_9);
    int VAR_11 = 0;
    while( VAR_10 && (VAR_11++)<VAR_0.mxPage ){
      FUNC_4(VAR_10, "overflow %d from cell %d of page %d",
                     VAR_11, VAR_4, VAR_3);
      VAR_2 = FUNC_2((VAR_10-1)*(sqlite3_int64)VAR_0.pagesize, 4);
      VAR_10 = FUNC_0(VAR_2);
      FUNC_5(VAR_2);
    }
  }
}
