
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int segment; } ;
typedef TYPE_1__ OptLeavesReader ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(OptLeavesReader *VAR_0, OptLeavesReader *VAR_1){
  int VAR_2 = FUNC_0(VAR_0, VAR_1);
  if( VAR_2!=0 ) return VAR_2;
  return VAR_0->segment-VAR_1->segment;
}
