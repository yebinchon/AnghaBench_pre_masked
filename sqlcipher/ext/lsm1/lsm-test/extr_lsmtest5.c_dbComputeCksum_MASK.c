
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int TestDb ;
struct TYPE_4__ {int nFanout; } ;
typedef TYPE_1__ DbParameters ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,scalar_t__*,int ,char*,int,char*,int,int ) ;

__attribute__((used)) static u32 FUNC_4(
  DbParameters *VAR_2,
  TestDb *VAR_3,
  int VAR_4,
  int VAR_5,
  int *VAR_6
){
  u32 VAR_7 = 0;
  if( *VAR_6==0 ){
    int VAR_8;
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12;
    int VAR_13 = 1;
    char VAR_14[VAR_0];
    char VAR_15[VAR_0];

    FUNC_0( VAR_4>=1 );
    for(VAR_12=0; VAR_12<VAR_4; VAR_12++) VAR_13 = VAR_13 * VAR_2->nFanout;

    VAR_10 = VAR_13*(VAR_5/VAR_13);
    VAR_11 = VAR_10 + VAR_13 - 1;
    FUNC_1(VAR_2, VAR_4-1, VAR_10, VAR_14);
    FUNC_1(VAR_2, VAR_4-1, VAR_11, VAR_15);
    VAR_8 = FUNC_2(VAR_14);
    VAR_9 = FUNC_2(VAR_15);

    *VAR_6 = FUNC_3(VAR_3, (u32*)&VAR_7, 0, VAR_14, VAR_8, VAR_15, VAR_9,VAR_1);
  }

  return VAR_7;
}
