
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {char* z; int flags; int n; } ;
typedef TYPE_1__ Mem ;
typedef int BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,TYPE_1__*) ;

int FUNC_6(
  BtCursor *VAR_3,
  u32 VAR_4,
  u32 VAR_5,
  Mem *VAR_6
){
  char *VAR_7;
  u32 VAR_8 = 0;
  int VAR_9 = VAR_2;

  FUNC_1( FUNC_2(VAR_3) );
  FUNC_1( !FUNC_0(VAR_6) );



  FUNC_1( !FUNC_4(VAR_6) );
  VAR_7 = (char *)FUNC_3(VAR_3, &VAR_8);
  FUNC_1( VAR_7!=0 );

  if( VAR_4+VAR_5<=VAR_8 ){
    VAR_6->z = &VAR_7[VAR_4];
    VAR_6->flags = VAR_0|VAR_1;
    VAR_6->n = (int)VAR_5;
  }else{
    VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
  }

  return VAR_9;
}
