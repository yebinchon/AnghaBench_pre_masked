
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_7__ {scalar_t__ sz; } ;
struct TYPE_8__ {TYPE_1__ lookaside; int mutex; } ;
typedef TYPE_2__ sqlite3 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_2__*,void*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,void*) ;
 void* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (int ) ;

void *FUNC_5(sqlite3 *VAR_0, void *VAR_1, u64 VAR_2){
  FUNC_0( VAR_0!=0 );
  if( VAR_1==0 ) return FUNC_3(VAR_0, VAR_2);
  FUNC_0( FUNC_4(VAR_0->mutex) );
  if( FUNC_2(VAR_0,VAR_1) && VAR_2<=VAR_0->lookaside.sz ) return VAR_1;
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
