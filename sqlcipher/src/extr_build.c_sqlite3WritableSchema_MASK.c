
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(sqlite3 *VAR_2){
  FUNC_0( (VAR_2->flags&(VAR_1|VAR_0))==0 );
  FUNC_0( (VAR_2->flags&(VAR_1|VAR_0))==
               VAR_1 );
  FUNC_0( (VAR_2->flags&(VAR_1|VAR_0))==
               VAR_0 );
  FUNC_0( (VAR_2->flags&(VAR_1|VAR_0))==
               (VAR_1|VAR_0) );
  return (VAR_2->flags&(VAR_1|VAR_0))==VAR_1;
}
