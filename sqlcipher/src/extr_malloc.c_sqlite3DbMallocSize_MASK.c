
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int sz; } ;
struct TYPE_9__ {TYPE_2__ lookaside; int mutex; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_7__ {int (* xSize ) (void*) ;} ;
struct TYPE_10__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,void*) ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;

int FUNC_6(sqlite3 *VAR_3, void *VAR_4){
  FUNC_0( VAR_4!=0 );
  if( VAR_3==0 || !FUNC_1(VAR_3,VAR_4) ){
    return VAR_2.m.xSize(VAR_4);
  }else{
    FUNC_0( FUNC_4(VAR_3->mutex) );
    return VAR_3->lookaside.sz;
  }
}
