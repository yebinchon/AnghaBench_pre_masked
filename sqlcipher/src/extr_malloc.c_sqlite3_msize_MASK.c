
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_uint64 ;
struct TYPE_3__ {int (* xSize ) (void*) ;} ;
struct TYPE_4__ {TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*) ;

sqlite3_uint64 FUNC_4(void *VAR_2){
  FUNC_0( FUNC_2(VAR_2, (u8)~VAR_0) );
  FUNC_0( FUNC_1(VAR_2, VAR_0) );
  return VAR_2 ? VAR_1.m.xSize(VAR_2) : 0;
}
