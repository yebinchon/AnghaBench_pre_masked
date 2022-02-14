
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int io; int (* read_at ) (int ,int ,int*,int) ;} ;
struct TYPE_5__ {int eip; TYPE_1__ iob; } ;
typedef TYPE_2__ BfvmCPU ;


 int FUNC_0 (int ,int ,int*,int) ;

__attribute__((used)) static ut8 FUNC_1(BfvmCPU *VAR_0) {

 ut8 VAR_1[4] = {0};
 if (VAR_0 && VAR_0->iob.read_at && !VAR_0->iob.read_at (VAR_0->iob.io, VAR_0->eip, VAR_1, 4)) {
  return 0xff;
 }
 return VAR_1[0];
}
