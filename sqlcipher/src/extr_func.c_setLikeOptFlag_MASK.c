
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_4__ {int funcFlags; } ;
typedef TYPE_1__ FuncDef ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *,char const*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_1, const char *VAR_2, u8 VAR_3){
  FuncDef *VAR_4;
  VAR_4 = FUNC_1(VAR_1, VAR_2, 2, VAR_0, 0);
  if( FUNC_0(VAR_4) ){
    VAR_4->funcFlags |= VAR_3;
  }
  VAR_4 = FUNC_1(VAR_1, VAR_2, 3, VAR_0, 0);
  if( VAR_4 ){
    VAR_4->funcFlags |= VAR_3;
  }
}
