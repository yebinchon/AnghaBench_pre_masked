
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int io; int (* read_at ) (int ,int ,int*,int ) ;} ;
struct TYPE_5__ {TYPE_1__ iob; } ;
typedef TYPE_2__ RDebug ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int*,int ) ;

__attribute__((used)) static bool FUNC_2(RDebug *VAR_0, ut64 VAR_1) {
 ut8 VAR_2[1];
 (void)VAR_0->iob.read_at (VAR_0->iob.io, VAR_1, VAR_2, FUNC_0 (VAR_2));
 switch (VAR_2[0]) {
 case 0xc3:
 case 0xcb:
 case 0xc2:
 case 0xca:
  return 1;
 default:
  return 0;
 }

}
