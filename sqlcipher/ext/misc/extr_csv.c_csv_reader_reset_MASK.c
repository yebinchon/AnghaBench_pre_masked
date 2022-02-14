
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int z; int zIn; scalar_t__ in; } ;
typedef TYPE_1__ CsvReader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(CsvReader *VAR_0){
  if( VAR_0->in ){
    FUNC_1(VAR_0->in);
    FUNC_2(VAR_0->zIn);
  }
  FUNC_2(VAR_0->z);
  FUNC_0(VAR_0);
}
