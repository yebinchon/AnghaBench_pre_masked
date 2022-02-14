
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ busy; } ;
struct TYPE_8__ {int flags; TYPE_1__ init; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_9__ {int ncFlags; } ;
typedef TYPE_3__ NameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(sqlite3 *VAR_3, NameContext *VAR_4){
  if( VAR_3->init.busy ) return 1;
  if( VAR_4->ncFlags & VAR_0 ){

    if( FUNC_0(VAR_3) && (VAR_3->flags & VAR_2)!=0 ){
      return 1;
    }
    return (VAR_3->flags & VAR_1)!=0;
  }else{

    return (VAR_3->flags & VAR_2)!=0;
  }
}
