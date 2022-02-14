
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(
  Mem *VAR_7,
  char VAR_8,
  u8 VAR_9
){
  if( VAR_8>=VAR_4 ){
    FUNC_1( VAR_8==VAR_3 || VAR_8==VAR_5
             || VAR_8==VAR_4 );
    if( (VAR_7->flags & VAR_0)==0 ){
      if( (VAR_7->flags & VAR_1)==0 ){
        if( VAR_7->flags & VAR_2 ) FUNC_0(VAR_7,1);
      }else{
        FUNC_2(VAR_7);
      }
    }
  }else if( VAR_8==VAR_6 ){





    if( 0==(VAR_7->flags&VAR_2) ){
      if( (VAR_7->flags&(VAR_1|VAR_0)) ){
        FUNC_3(VAR_7, VAR_9, 1);
      }
    }
    VAR_7->flags &= ~(VAR_1|VAR_0);
  }
}
