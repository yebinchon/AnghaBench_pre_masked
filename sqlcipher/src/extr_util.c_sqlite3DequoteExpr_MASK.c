
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* zToken; } ;
struct TYPE_5__ {int flags; TYPE_1__ u; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;

void FUNC_3(Expr *VAR_2){
  FUNC_0( FUNC_2(VAR_2->u.zToken[0]) );
  VAR_2->flags |= VAR_2->u.zToken[0]=='"' ? VAR_1|VAR_0 : VAR_1;
  FUNC_1(VAR_2->u.zToken);
}
